#ifndef JAVA_WEB_APPLICATION_HPP
#define JAVA_WEB_APPLICATION_HPP

#include "DevOpsPipeling.hpp"

class JavaWebApp : public DevOpsPipeline {
    protected : 
        const char* pipelineName() const override {
            return "JavaWebApplication";
        }

        void checkoutCode() override;
        void buildProject() override;
        void runTests() override;
        void runStaticAnalysis() override;
        void packageArtifacts() override;
        void deployApplication() override;
        void notifyTeam() override;
};

#endif