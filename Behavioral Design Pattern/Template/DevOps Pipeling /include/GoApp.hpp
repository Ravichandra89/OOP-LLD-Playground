#ifndef GO_LANGUAGE_HPP
#define GO_LANGUAGE_HPP

#include "DevOpsPipeling.hpp"

class GoApp : public DevOpsPipeline {
    const char* pipelineName() const override {
        return "GoApp";
    }

    void checkoutCode() override;
    void buildProject() override;
    void runTests() override;
    void runStaticAnalysis() override;
    void packageArtifacts() override;
    void deployApplication() override;
    void notify() override;
};

#endif