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

    // use fluent interface with a list of consoles and videogames
    HtmlBuilder builder2{"ul"};
    builder2
        .addChild("li", "PlayStation 5")
        .addChild("li", "Xbox Series X")
        .addChild("li", "Nintendo Switch")
        .addChild("li", "PC");
    cout << builder2.str() << endl;


    return 0;
}