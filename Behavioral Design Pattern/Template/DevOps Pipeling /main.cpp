#include <iostream>

#include "include/DevOpsPipeling.hpp"
#include "include/GoApp.hpp"
#include "include/JavaWebApp.hpp"
#include "include/PythonDataPipeline.hpp"
#include "include/NodeMicroserviceApp.hpp"
#include <memory>

using namespace std;

int main() {
    // Instances of Concrete Classes
    unique_ptr<DevOpsPipeline> java = make_unique<JavaWebApp>();
    unique_ptr<DevOpsPipeline> node = make_unique<NodeMicroserviceApp> ();
    unique_ptr<DevOpsPipeline> python = make_unique<PythonDataPipeline> ();
    unique_ptr<DevOpsPipeline> go = make_unique<GoApp> ();


    // Run each pipeline
    java->runPipeline();
    node->runPipeline();
    python->runPipeline();
    go->runPipeline();

    return 0;
}
