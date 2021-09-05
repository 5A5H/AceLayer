# AceLayer
The **AceLayer** project defines a library to wrap AceGen elements. 
The idea is that these elements are build for the AceFEM environment,
and the **AceLayer** then allows usage in other FEM contexts, e.g., FEDDlib.

## Concept:
Basically, the AceFEM element is "loaded" from its C-code from the wrapper.
Then there is access to the elements information, e.g., topology (number of nodes, dofs, etc.) and 
length of data fields. Further the library provides Data Container to emulate AceFEM structures.
The "host" FEM code would first read these information to setup the FE-space and then whould
call the SKR function of the wrapper for each element in the discretization at assembly.
> Notice: SKR function computes the element's local stiffness matrix and internal force vector.

## Content:
* ```AceGenElement```               -> Wrapper to interface with AceGen generated element code.
* ```AceFEMElementDataContainer```  -> Manages element data for each element in the discretization.
* ```AceFEMNodeDataContainer```     -> Manages nodal data for each node in the discretization.
* ```AceFEMDataLayer```             -> General data interface.
  
> I do my best to document the code well. Best entry point is the ```include/ace_layer.hpp```.

## Infos for the AceGen programmer:
Below are some restriction listed. However, support of AceFEM features is mainly dependent on 
the "host" FE-program (e.g. FEDDlib), so that this list is not exclusive. 
* Build elements always with options: ```SMSInitialize["ELMTNAME", "Environment" -> "AceFEM", "Mode" -> "Optimal"];``` ELMTNAME is free to chose.
* Currently only the SKR function is properly bounded - e.g. SPP (postprocessing) is not.

## Some random Notes:
sms.h is needed for definition of ace element input classes/structs
SMSUtility.c is needed to provide integration points
restriction: code MUST be type=Optimal
at first the elements default material parameters are used -> semi variable material parameters!
SKR routine is always called with dummy node specification!! 