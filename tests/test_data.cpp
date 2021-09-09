#include <iostream>
#include <ace_layer.hpp>

int main(int, char**) 
{
    AceGenElement* elmt;
    elmt = new AceGenElement(std::string(SMSElmt)+"/T1_Laplace.c");
    
    size_t no_elmt = 100;
    size_t no_nodes = 300;

    //AceFEMElementDataContainer<elmt->get_NoTimeStorage(), elmt->get_NoElementData()> ElmtData;
    //AceFEMNodeDataContainer<20, 5> NdeData;

    delete elmt;
    return 0;
}
