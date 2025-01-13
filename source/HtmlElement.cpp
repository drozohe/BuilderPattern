#include "HtmlElement.h"
#include <sstream>
#include <memory>

using namespace std;
HtmlElement::HtmlElement() 
{
    cout << "ctor called" << endl;
}

HtmlElement::HtmlElement(const string& name, const string& text) : name(name), text(text) 
{
    cout << "ctor called with name and text" << endl;
}

string HtmlElement::str(int indent) const 
{
    ostringstream oss;
    string i(indent_size * indent, ' ');
    oss << i << "<" << name << ">" << endl;
    if (text.size() > 0) 
    {
        oss << string(indent_size * (indent + 1), ' ') << text << endl;
    }
    
    for (const auto& e : elements) 
    {
        oss << e.str(indent + 1);
    }
    
    oss << i << "</" << name << ">" << endl;
    return oss.str();
}