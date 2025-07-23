#include "sms_factory.hpp"
#include "../builder/sms_builder.hpp"

unique_ptr<NotificationBuilder> SMSFactory::createBuilder() const {
    return make_unique<SMSBuilder>();
}