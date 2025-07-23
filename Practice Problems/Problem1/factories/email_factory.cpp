#include "email_factory.hpp"
#include "../builder/email_builder.hpp"

unique_ptr<NotificationBuilder> EmailFactory::createBuilder() const {
    return make_unique<EmailBuilder>();
}