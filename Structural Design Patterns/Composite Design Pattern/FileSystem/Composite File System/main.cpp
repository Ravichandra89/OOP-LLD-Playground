#include "Directory.hpp"
#include "File.hpp"
#include "INode.hpp"
#include <iostream>
#include <memory>

using namespace std;

int main() {
    // Root Directory
    auto root = make_unique<Directory> ("Root");

    // Files under Root
    root->add(make_unique<File> ("s.txt", 100));
    root->add(make_unique<File> ("b.txt", 200));

    // Sub Directory called pictures
    auto pictures = make_unique<Directory> ("Pictures");
    pictures->add(make_unique<File> ("a.jpg", 300));
    pictures->add(make_unique<File> ("b.jpg", 400));
    root->add(move(pictures));

    // Sub Directory Documents
    auto documents = make_unique<Directory> ("Documents");
    documents->add(make_unique<File> ("a.txt", 500));
    documents->add(make_unique<File> ("b.txt", 600));
    root->add(move(documents));

    // print directory
    root->print();

    cout << "Total Size: " << root->getSize() << " bytes" << endl;
    return 0;
}