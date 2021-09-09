#include <iostream>
#include <ace_layer.hpp>

int main(int, char**) 
{
    // Simulation of an assembly process for a small mesh

    // Step 1: Load the element file
    AceGenElement T1_Laplace(std::string(SMSElmt)+"/T1_Laplace.c");

    // Step 2: Gather information to build FE-space / data structures
    int no_nodes = T1_Laplace -> get_NoNodes();
    ElementData ed_;
    NodeData* nd[no_nodes];

    // Step 3: Prepare element call, i.e. prepare FE-data for AceLayer
    double dummy[3] = {0.0, 0.0, 0.0};
    for (int i=0; i<no_nodes; i++)
    {
        nd[i] = new NodeData();
        nd[i] -> X = &(elmt->get_ReferenceNodes()[0+i*3]);
        nd[i] -> ap = &dummy[0];
        nd[i] -> at = &dummy[0];
    }
    double s[no_nodes*no_nodes], p[no_nodes], rdata[400];
    int idata[100];

    // Step 4. Call SKR to collect element matrices
    T1_Laplace -> SKR(&ed_, &nd[0], &rdata[0], &idata[0], &p[0], &s[0]);

    // Step 5. At a Newton-Iteration (within the same time/load step) we need to update AceData
    
    // Step 6. At a time/load step we need to update AceData
    return 0;
}
