/**
 * Notification_builder : For Building the Complex notification_objects
 */

#ifndef NOTIFICATION_BUILDER_ITERFACE_HPP
#define NOTIFICATION_BUILDER_ITERFACE_HPP

#include "../utils/user_model.hpp"
#include "../products/Notification.hpp"
#include "../prototype/NotificationTemplate.hpp"
#include <memory>
#include <string>
#include <map>
using namespace std;


class NotificationBuilder {
    public: 
        virtual ~NotificationBuilder() = default;

        virtual NotificationBuilder& setTemplate(unique_ptr<NotificationTemplate> temp) = 0;
        virtual NotificationBuilder& setReceipent(const User& user) = 0;
        virtual NotificationBuilder& setData(const map<string, string> &data) = 0;

        // build method - Through the Notification Concrete Product
        virtual unique_ptr<Notification> build() = 0;
};

#endif