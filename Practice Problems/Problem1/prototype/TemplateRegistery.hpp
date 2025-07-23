/**
 * Acting as the Prototype Template Manager - Registering these Templates Once and Cloning further
 * - Replacing Dynamic Data at placeholders
 * 
 * # Process
 * - Registering the Template First.
 * - While building the Notification Object.
 * - Then keep on cloning this template + Placing Dynamic data at plceholders.
 */

#ifndef TEMPLATE_REGISTER_PROTOTYPE_MANAGER_HPP
#define TEMPLATE_REGISTER_PROTOTYPE_MANAGER_HPP

#include "NotificationTemplate.hpp"
#include <memory>
#include <string>
#include <map>
using namespace std;

class TemplateRegistery {
        // Template Storage Data Structure Map< string, template_body>
        // Map< "ordering_template", "ordering_template_notification_body">

        map<string, unique_ptr<NotificationTemplate>> templates;

    public: 
        // Return the template instance
        static TemplateRegistery& instance() {
            static TemplateRegistery inst;
            return inst;
        }

        // template_register_method <string, template>
        void register_template(const string& key, unique_ptr<NotificationTemplate> temp) {
            templates[key] = move(temp);
        } 

        // clone  < key >
        unique_ptr<NotificationTemplate> clone(const string & key) {
            auto it = templates.find(key);

            if (it != templates.end()) return unique_ptr<NotificationTemplate> (it->second->clone());

            // For key template not exist
            return nullptr;  
        }
};

#endif