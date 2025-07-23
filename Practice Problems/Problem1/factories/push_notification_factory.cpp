#include "push_notification_factory.hpp"
#include "../builder/push_notification_builder.hpp"

unique_ptr<NotificationBuilder> PushFactory::createBuilder() const {
    return make_unique<PushBuilder>();
}