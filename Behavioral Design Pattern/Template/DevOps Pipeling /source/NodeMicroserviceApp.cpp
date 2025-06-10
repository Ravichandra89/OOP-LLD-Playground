#include "NodeMicroserviceApp.hpp"
#include <iostream>
using namespace std;

// Concrete Implement the Abstract Methods in the DevOpsPipeline
void NodeMicroserviceApp::checkoutCode() {
    cout << "[Checkout] Cloning Git repo for Node.js microservice..." << endl;
}

// buildProject Concrete Method
void NodeMicroserviceApp::buildProject() {
    cout << "[Build] npm install..." << endl;
}

// runTests Concrete Method
void NodeMicroserviceApp::runTests() {
    cout << "[Test] Running unit tests: npm test..." << endl;
}

// runStaticAnalysis Concrete Method
void NodeMicroserviceApp::runStaticAnalysis(){
    cout << "[StaticAnalysis] Running ESLint and security scans..." << endl;
}

// packageArtifacts Concrete Method
void NodeMicroserviceApp::packageArtifacts() {
    cout << "[Package] Building Docker image: docker build -t my-node-service ." << endl;
}

// deployApplication Concrete Method
void NodeMicroserviceApp::deployApplication() {
    cout << "[Deploy] Pushing Docker image and deploying to Kubernetes cluster..." << endl;
}

// notify
void NodeMicroserviceApp::notify() {
    cout << "[Notify] Sending deployment notification to Slack #node-deployments." << endl;
}