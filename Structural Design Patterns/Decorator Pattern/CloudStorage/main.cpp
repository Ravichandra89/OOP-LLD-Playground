#include "component/FileUpload.hpp"
#include "decorator/EncryptionDecorator.hpp"
#include "decorator/CompressDecorator.hpp"
#include "decorator/LoggingDecorator.hpp"

#include <iostream>

int main() {
    IUpload* uploader = new FileUpload("s3://bucket/path");
    uploader = new EncryptionDecorator(uploader);
    uploader = new CompressDecorator(uploader);
    uploader = new LoggingDecorator(uploader);

    uploader->upload("important data");

    delete uploader;
    return 0;
}