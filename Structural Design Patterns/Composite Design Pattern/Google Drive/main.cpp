#include "File.hpp"
#include "Folder.hpp"
#include "GoogleDrive.hpp"

#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    auto root = make_unique<Folder> ("My Drive");

    auto docs = make_unique<Folder> ("Documents");
    docs->add(make_unique<File> ("Resume.pdf", 120));
    docs->add(make_unique<File> ("ProjectReport.docx", 300));


    auto images = make_unique<Folder> ("Photos");
    images->add(make_unique<File> ("Vacation.jpg", 2000));
    images->add(make_unique<File> ("ProjectReport.jpg", 2000));

    root->add(move(docs));
    root->add(move(images));
    root->add(make_unique<File> ("RootNote.txt", 100));

    root->show();
    // Calculate Total Size
    cout << "Total Size : " << root->getSize() << endl;
}