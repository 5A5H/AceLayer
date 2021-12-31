#include <iostream>
#include <fstream>
#include <ace_layer.hpp>

int main(int, char**) 
{
    // test of the ouput variants of an element
    // the element is always verbose when loading a file

    // Unmodified output
    AceGenElement T1_Laplace("DEFAULT \nAll messages are going to std::cout!");

    // Modify output to no-where
    T1_Laplace.disableOutput();
    T1_Laplace.load("disableOutput() \nThe error for this goes to std::err but no other message as e.g. \"Loading Element : ...\" !");

    // Modify output to elment owned file
    T1_Laplace.set_output("OutsideOutputFile");
    T1_Laplace.load("set_output(\"OutsideOutputFile\") \n The error for this goes to std::err.\n Other message as e.g. \"Loading Element : ...\" go to a file \"OutsideOutputFile\" created and owned by the elment.\n It is closed when the element gets destroyed!");

    // Modify output to an existing file stream
    std::ofstream a_file("ProFile");
    T1_Laplace.set_output(a_file);
    T1_Laplace.load("set_output(a_file) \nThe error for this goes to std::err.\n Other message as e.g. \"Loading Element : ...\" go to a file \"ProFile\".\n This file is managed and owned outside the element, the element only write to that stream.");
    a_file.close(); // file must be closed outside the element.

    //
    return 0;
}
