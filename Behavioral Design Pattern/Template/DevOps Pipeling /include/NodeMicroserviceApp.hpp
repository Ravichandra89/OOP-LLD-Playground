#ifndef NODE_MICROSERVICE_APP_HPP
#define NODE_MICROSERVICE_APP_HPP

#include "DevOpsPipeling.hpp"

class NodeMicroserviceApp : public DevOpsPipeline {
    protected : 
        const char* pipelineName() const override {
            return "NodeMicroService";
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