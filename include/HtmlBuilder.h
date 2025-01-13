#ifndef HTML_BUILDER_H
#define HTML_BUILDER_H

#include <string>
#include <vector>
#include <iostream>
#include <memory>

#include "HtmlElement.h"

class HtmlBuilder {
public:
    HtmlElement root;
    HtmlBuilder(std::string root_name);
    HtmlBuilder& addChild(std::string child_name, std::string child_text);
    std::string str() const;
};
#endif

    
    