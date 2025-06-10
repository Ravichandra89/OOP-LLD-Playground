#ifndef PYTHON_DATA_PIPELINE_HPP
#define PYTHON_DATA_PIPELINE_HPP


#include "DevOpsPipeling.hpp"

class PythonDataPipeline : DevOpsPipeline {
    protected : 
        const char* pipelineName() const override {
            return "PythonDataPipeline";
        }

        void checkoutCode() override;
        void buildProject() override;
        void runTests() override;
        void runStaticAnalysis() override;
        void packageArtifacts() override;
        void deployApplication() override;

        // Default Notification Method Using
};

#endif