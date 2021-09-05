#include <iostream>
#include <ace_layer.hpp>

int main(int, char**) 
{
    int error = 0;
    AceGenElement* elmt;
    elmt = new AceGenElement();
    error = elmt -> load("/Users/sash/c_coding/ace_layer/elements/Dummy_1.c");
    error = elmt -> load("/Users/sash/c_coding/ace_layer/elements/Dummy_1.c");
    error = elmt -> load("/Users/sash/c_coding/ace_layer/elements/Dummy_3.c");
    error = elmt -> status();
    delete elmt;

    
    // elmt = new AceGenElement("/Users/sash/c_coding/ace_layer/elements/T1_Laplace.c");
    // // calling an element skr
    // int no_nodes = elmt -> get_NoNodes();
    // ElementData ed_;
    // NodeData* nd[no_nodes];
    // double dummy[3] = {0.0, 0.0, 0.0};
    // for (int i=0; i<no_nodes; i++)
    // {
    //     nd[i] = new NodeData();
    //     nd[i] -> X = &(elmt->get_ReferenceNodes()[0+i*3]);
    //     nd[i] -> ap = &dummy[0];
    //     nd[i] -> at = &dummy[0];
    // }
    // double s[no_nodes*no_nodes], p[no_nodes], rdata[400];
    // int idata[100];
    // elmt -> SKR(&ed_, &nd[0], &rdata[0], &idata[0], &p[0], &s[0]);
    // delete elmt;
    return error;
}