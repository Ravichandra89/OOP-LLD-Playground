#include "../include/GoApp.hpp"
#include <iostream>
using namespace std;

void GoApp::checkoutCode() {
    cout << "[Checkout] Cloning Git repo for Go service..." << endl;
}

void GoApp::buildProject() {
    cout << "[Build] Running go mod download and go build..." << endl;
}

void GoApp::runTests() {
    cout << "[Test] Running go test" << endl;
}

void GoApp::runStaticAnalysis() {
    cout << "[Static Analysis] Running go vet and golangci-lint..." << endl;
}

void GoApp::packageArtifacts() {
    cout << "[Package] Building Docker image: docker build -t my-go-service ." << endl;
}

void GoApp::deployApplication() {
    cout << "[Deploy] Pushing Docker image and deploying to Kubernetes..." << endl;
}

void GoApp::notify() {
    cout << "[Notify] Sending Deployment Notification to Slack #go-deployment" << endl;
}