#include <iostream>
#include "utils/channel_type.hpp"
#include "utils/user_model.hpp"
#include "prototype/TemplateRegistery.hpp"
#include "factories/notification_factory.hpp"
#include "factories/SuperFactory.hpp"
#include <iostream>

int main()
{
    auto &registry = TemplateRegistery::instance();

    registry.register_template("welcome", make_unique<NotificationTemplate>("Hello {name}, welcome to our service!"));

    registry.register_template("alert", make_unique<NotificationTemplate>("Dear {name}, your alert: {alertDetail}"));

    User user{"Alice", "alice@example.com"};
    map<string, string> data({"name", "Alice"});

    for (auto channel : {ChannelType::Email, ChannelType::SMS, ChannelType::Push})
    {
        auto factory = NotificationSystem::getFactory(channel);
        auto builder = factory->createBuilder();
        auto templ = registry.clone("welcome");

        auto notification_ = builder->setTemplate(move(templ)).setReceipent(user).setData(data).build();

        notification_->send();
    }

    return 0;
}