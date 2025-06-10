#include "../include/JavaWebApp.hpp"
#include <iostream>
using namespace std;

// Checkout concrete method
void JavaWebApp::checkoutCode() {
    cout << "Cloning git repo for Java Web App" << endl;
}

// BuildProject Concrete Method
void JavaWebApp::buildProject() {
    cout << "[Building Project] Running Maven build: mvn clean install..." << endl;
}

// runTests Concrete Method
void JavaWebApp::runTests() {
    cout << "[Tests] Executing unit test: mvn test..." << endl;
}

// runStaticAnalysis Concrete Methods
void JavaWebApp::runStaticAnalysis() {
    cout << "[StaticAnalysis] Running Checkstyle/PMD/SpotBugs..." << endl;
}

// PackageArtifacts Concrete Methods
void JavaWebApp::packageArtifacts() {
    cout << "[Package] Packaging WAR/JAR artifact..." << endl;
}

// DeployApplicatoin Concrete Method
void JavaWebApp::deployApplication() {
    cout << "[Deploy] Deploying to Tomcat/AWS Elastic Beanstalk..." << endl;
}

// Notify
void JavaWebApp::notify() {
    cout << "[Notify] Posting success message to Slack channel #java-deployments." << endl;
}
