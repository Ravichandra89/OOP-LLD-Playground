#ifndef EMAIL_HPP
#define EMAIL_HPP

#include <string>
#include <vector>
using namespace std;

struct Email {
    string subject;
    string body;
    string sender;
    vector<string> attachments;

    Email(const string & s, const string &body, const string sender, vector<string> &att) : subject(s), body(body), sender(sender), attachments(att){};
};

#endif