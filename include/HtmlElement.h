#ifndef HTML_ELEMENT_H
#define HTML_ELEMENT_H

#include <string>
#include <vector>
#include <iostream>
#include <memory>

class HtmlBuilder;
class HtmlElement {
    friend class HtmlBuilder;
    std::string name;
    std::string text;
    std::vector<HtmlElement> elements;
    const size_t indent_size = 2;

    HtmlElement();
    HtmlElement(const std::string& name, const std::string& text);
    std::string str(int indent = 0) const;
};

#endif