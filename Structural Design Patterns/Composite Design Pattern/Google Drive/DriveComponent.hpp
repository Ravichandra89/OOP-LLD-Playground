/***
 * Common Interface for leaf and composite 
 * In googleDrive system leaves are my Files and have Folder
 * Folder has it's sub - directory which can contain File / Folder
 */

#ifndef COMPOSITE_PATTERN_GOOGLE_DRIVE_HPP
#define COMPOSITE_PATTERN_GOOGLE_DRIVE_HPP

#include <string>
using namespace std;

class GoogleDrive {
    public: 
        virtual ~GoogleDrive() = default;
        virtual void show(int indent = 0) const = 0;
        virtual size_t getSize() const = 0;
};

#endif