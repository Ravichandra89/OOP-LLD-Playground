#include <iostream>
using namespace std;

class XMLData {
        string xml;
    public: 
        XMLData(string data) {
            xml = data;
        }

        // Get the Xml Data
        string getXmlData() {
            return xml;
        }
};

class DataAnalysis{
        string jsonData;
    public : 
        DataAnalysis() {};
        DataAnalysis(string json) {
            jsonData = json;
        };

        virtual void analyseData() {
            cout << "Analysing Data " << jsonData << endl;
        }
};

class Client {
    public :
        void processData(DataAnalysis * tool) {
            tool->analyseData();
        }
};

class Adapter : public DataAnalysis {
        XMLData* xmlPtr;
    public : 
        Adapter(XMLData* tool) {
            xmlPtr = tool;
        };

        // analysing the data
        void analyseData() override {
            cout << "Converting XmlData : "<< xmlPtr->getXmlData() << " Into the Json Data" << endl;
            cout << "Analysing Converted Json Data" << endl;
        }
};


int main() {
    XMLData * xml = new XMLData("XML Sample Data");
    // DataAnalysis * tool = new DataAnalysis();  // TODO: Excepting the data in the Json format

    DataAnalysis * tool = new Adapter(xml);
    Client * cli = new Client();
    cli->processData(tool);

    return 0;

}