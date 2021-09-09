#include <iostream>
#include <ace_layer.hpp>

int main(int, char**) 
{
    int error = 0;
    AceGenElement* elmt;
    elmt = new AceGenElement();
    error = elmt -> load(std::string(SMSElmt)+"/Dummy_1.c");
    error = elmt -> load(std::string(SMSElmt)+"/Dummy_1.c");
    error = elmt -> load(std::string(SMSElmt)+"/Dummy_3.c");
    error = elmt -> status();
    delete elmt;
    return error;
}