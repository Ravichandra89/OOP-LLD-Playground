#ifndef PUSH_NOTIFICATION_BUILDER_HPP
#define PUSH_NOTIFICATION_BUILDER_HPP

#include "NotificationBuilder.hpp"
#include <sstream>
using namespace std;

class PushBuilder : public NotificationBuilder {
        User user;
        unique_ptr<NotificationTemplate> templ;

    public: 
        PushBuilder() = default;

        // Impelement the core_methods_notification_builder
        NotificationBuilder& setTemplate(unique_ptr<NotificationTemplate> temp) override {
            this->templ = move(temp);
            return *this;
        }

        NotificationBuilder& setReceipent(const User& user) override {
            this->user = user;
            return *this;
        }

        NotificationBuilder& setData(const map<string,string> &data) override {
            for (auto & it : data) {
                templ->applyData(it.first, it.second);
            }

            return *this;
        }

        unique_ptr<Notification> build() override {
            ostringstream oss;
            oss << "[Push_Notification]" << templ->getBody();
            return make_unique<Notification> (oss.str(), user);
        }
};

#endif