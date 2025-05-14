#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * File Class
 */

class File
{
private:
    string name;
    size_t size;

public:
    // Constructor to Initialize the file name and size
    File(string name, size_t size) : name(name), size(size) {};

    string getName() const
    {
        return name;
    }

    size_t getSize() const
    {
        return size;
    }
};

/**
 * Directory Class
 */

class Directory
{
private:
    string name;
    vector<File> files;
    vector<Directory> directories;

public:
    Directory(string name) : name(name) {};

    // Method to add a file to the directory
    void addFile(const File &file)
    {
        files.push_back(file);
    }

    void addDirectory(const Directory &directory)
    {
        directories.push_back(directory);
    }

    string getDirectoryName() const
    {
        return name;
    }

    vector<File> getFiles() const
    {
        return files;
    }

    vector<Directory> getDirectories() const
    {
        return directories;
    }
};

/**
 * Printing Files and Directories in Recursive manner
 */

void printFilesAndDirectories(const Directory &directory, int indent = 0)
{
    cout << string(indent, ' ') << "[Dir] " << directory.getDirectoryName() << "\n";

    for (const auto &it : directory.getFiles())
    {
        cout << string(indent + 2, ' ')
             << "[File] " << it.getName()
             << " (" << it.getSize() << " bytes)\n";
    }

    // Printing subDirectories
    for (const auto & it : directory.getDirectories()) {
        printFilesAndDirectories(it, indent + 2);
    };
}

int main() {
    // Create some files
    File a("a.txt", 1000);
    File b("b.txt", 500);

    // Create a 'Pictures' directory and add photos
    Directory pics("Pictures");
    pics.addFile(File("photo1.jpg", 200000));
    pics.addFile(File("photo2.jpg", 350000));

    // Create a 'Documents' directory and add text files
    Directory docs("Documents");
    docs.addFile(a);
    docs.addFile(b);

    // Create the root directory and nest others
    Directory root("Root");
    root.addDirectory(pics);
    root.addDirectory(docs);

    // Print the entire tree
    printFilesAndDirectories(root);

    return 0;
}