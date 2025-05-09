#include <iostream>
#include "Adapters/AzureAdapter.hpp"
#include "Adapters/S3Adapter.hpp"
#include "Adapters/GoogleAdapter.hpp"
#include "Services/PhotoService.hpp"

using namespace std;

int main() {
    PhotoService s1(new S3Adapter("instagram-photos"));
    cout << "S3 URL: " << s1.uploadPhoto("/path/to/photo.jpeg") << endl;

    PhotoService s2(new AzureAdapter("insta-bucket"));
    cout << "Azure URL: " << s2.uploadPhoto("/path/to/photo.jpeg") << endl;

    PhotoService s3(new GoogleAdapter("insta-container"));
    cout << "Google URL: " << s3.uploadPhoto("/path/to/image.jpeg") << endl;

    return 0;
}