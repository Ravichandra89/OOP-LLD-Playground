#ifndef ABSTRACT_REPORT_HPP
#define ABSTRACT_REPORT_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/// The Abstract Base Class defining the template method.
class AbstractReport {
public:
    virtual ~AbstractReport() = default;

    /// The Template Method — final to prevent override of structure.
    void generateReport() final {
        authenticateUser();
        fetchData();
        validateData();
        processData();
        formatReport();
        exportReport();
        archiveReport();
    }

protected:
    void authenticateUser() {
        cout << "[Auth] User authenticated successfully.\n";
    }
    void validateData() {
        cout << "[Validate] Data validated: " << rawData_.size()
                  << " records.\n";
    }
    void archiveReport() {
        cout << "[Archive] Report archived in central repository.\n\n";
    }

    // Abstract Methods
    virtual void fetchData() = 0;
    virtual void processData() = 0;
    virtual void formatReport() = 0;
    virtual void exportReport() = 0;

    vector<string> rawData_;
    string processedData_;
};

#endif
