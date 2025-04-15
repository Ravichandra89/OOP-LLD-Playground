#include <iostream>
#include "DocumentManager.hpp"
#include "../Document/NDADocument.hpp"
#include "../Document/InvoiceDocument.hpp"

#include <memory>
#include <unordered_map>
#include <string>

using namespace std;

DocumentManager::DocumentManager() {
    prototypes["NDA"] = make_unique<NDADocument>();
    prototypes["Invoice"] = make_unique<InvoiceDocument>();
}

// creating the Document
unique_ptr<Document> DocumentManager::createDocument(const string & type, const string & client, const string & dates) {
    // Extract the document type
    auto it = prototypes.find(type);

    // check if document type exists
    if (it != prototypes.end()) {
        auto doc = it->second->clone();
        doc->customize(client, dates);
        return doc;
    }

    return nullptr;
}