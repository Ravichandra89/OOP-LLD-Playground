#ifndef DOCUMENTMANAGER_HPP
#define DOCUMENTMANAGER_HPP

#include <string>
#include <memory>
#include <unordered_map>
#include "../Document/Document.hpp"

using namespace std;

class DocumentManager
{
    unordered_map<string, unique_ptr<Document>> prototypes;

public:
    DocumentManager();
    unique_ptr<Document> createDocument(const string &type, const string &client, const string &dates);
};

#endif