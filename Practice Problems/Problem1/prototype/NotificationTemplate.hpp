/**
 * Notification Template :: cloning template, applyData(custom<Data>), notification_body;
 */

#ifndef NOTIFICATION_TEMPLATE_STRUCTURE_HPP
#define NOTIFICATION_TEMPATE_STRUCTURE_HPP

#include <string>
using namespace std;

class NotificationTemplate {
        string notification_body;
    public : 
        // Constructor
        NotificationTemplate(const string& body) : notification_body(move(notification_body)) {};

        NotificationTemplate(const NotificationTemplate& other) : notification_body(other.notification_body) {};

        // Clone method - cloning the master notification_template
        NotificationTemplate* clone() const {
            return new NotificationTemplate(*this);
        }

        // Applying Custom_Data::Method
        void applyData(const string& key, const string& value) {
            string token = "{" + key + "}";
            size_t pos;
            while ((pos = notification_body.find(token)) != string::npos) {
                notification_body.replace(pos, token.length(), value);
            }
        } 

        const string getBody() const {
            return notification_body;
        }
};

#endif