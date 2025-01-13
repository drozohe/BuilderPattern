#include "HtmlBuilder.h"
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char* argv[]) {
    cout << "C++ Builder pattern" << endl;

    HtmlBuilder builder{"ul"};
    builder.addChild("li", "hello");
    builder.addChild("li", "world");
    cout << builder.str() << endl;

    return 0;
}