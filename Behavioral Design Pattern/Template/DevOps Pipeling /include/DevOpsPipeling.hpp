#ifndef DEVOPS_PIPELINE_HPP
#define DEVOPS_PIPELINE_HPP

#include <iostream>
using namespace std;

class DevOpsPipeline
{
public:
    virtual ~DevOpsPipeline() = default;

    virtual void runPipeline() final
    {
        cout << "=== Starting DevOps Pipeline: " << pipelineName() << " ====" << endl;

        // Abstract Methods
        checkoutCode();
        buildProject();
        runTests();
        runStaticAnalysis();
        packageArtifacts();
        deployApplication();
        notifyTeam();

        cout << "=== Finished DevOps Pipeline: " << pipelineName() << " ===\n\n";
    }

protected:
    virtual const char *pipelineName() const = 0;
    virtual void checkoutCode() = 0;
    virtual void buildProject() = 0;
    virtual void runTests() = 0;

    virtual void runStaticAnalysis()
    {
        cout << "[StaticAnalysis] Skipping static analysis for " << pipelineName() << endl;
    }

    virtual void packageArtifacts() = 0;
    virtual void deployApplication() = 0;

    virtual void notifyTeam()
    {
        cout << "[Notify] Sending generic notification: Pipeline "
             << pipelineName() << " completed.\n";
    }
};

#endif