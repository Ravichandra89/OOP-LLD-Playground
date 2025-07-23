/**
 * notification_concrete_builder : Email_builder
 */
#ifndef NOTIFICATION_CONCRETE_EMAIL_BUILDER_HPP
#define NOTIFICATION_CONCRETE_BUILDER_HPP

#include "NotificationBuilder.hpp"
#include <sstream>
using namespace std;

class EmailBuilder : public NotificationBuilder {
        User user;
        unique_ptr<NotificationTemplate> templ;

    public : 
        EmailBuilder() = default; // default constructor

        NotificationBuilder& setTemplate(unique_ptr<NotificationTemplate> temp) override {
            this->templ = move(temp);
            return *this;
        }

        NotificationBuilder& setReceipent(const User& user) override {
            this->user = user;
            return *this;
        }

        NotificationBuilder& setData(const map<string, string>& data) override {
            for(auto& it : data) {
                templ->applyData(it.first, it.second); //<key,value>
                return *this;
            }
        }

        unique_ptr<Notification> build() override {
            // Builder build method
            ostringstream oss;
            oss << "[Email]" << templ->getBody();
            return make_unique<Notification> (oss.str(), user);
        }
};

#endif