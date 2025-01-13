#include "HtmlBuilder.h"

HtmlBuilder::HtmlBuilder(std::string root_name)
{
    root.name = root_name;
}
void HtmlBuilder::addChild(std::string child_name, std::string child_text)
{
    HtmlElement e{child_name, child_text};
    root.elements.emplace_back(e);
}
std::string HtmlBuilder::str() const
{
    return root.str();
}