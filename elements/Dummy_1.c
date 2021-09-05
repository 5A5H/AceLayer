/*************************************************************
* AceGen    7.204 MacOSX (8 Dec 20)                          *
*           Co. J. Korelc  2020           4 Sep 21 14:41:48  *
**************************************************************
User     : Full professional version
Notebook : dummy
Evaluation time                 : 0 s     Mode  : Optimal
Number of formulae              : 5       Method: Automatic
Subroutine                      : SKR size: 83
Subroutine                      : SPP size: 0
Total size of Mathematica  code : 83 subexpressions
Total size of C code            : 612 bytes */
#include "sms.h"

void SKR(double v[124],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double *p,double **s);
void SPP(double v[124],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost);

int MMAInitialisationCode[]={
0,24,123,72,111,108,100,91,78,117,108,108,93,44,32,72,111,108,100,91,78,117,108,108,93,125
};



DLLEXPORT int SMTSetElSpec(ElementSpec *es,int *idata,int ic,int ng)
{ int intc,nd,i;FILE *SMSFile;
  static int pn[175]={1, 12, 4, 11, 3, 10, 2, 9, 0, 1, 9, 2, 14, 6, 17, 5, 13, 0, 2, 10, 3, 15, 7, 18, 6, 14, 0, 4, 16, 8, 19, 7, 15, 3, 11, 0, 1, 13, 5, 20, 8, 16, 4, 12, 0, 5, 17, 6, 18, 7, 19, 8, 20, 0, 1, 12, 21, 9, -1, 12, 4, 11, 21, -1, 9, 21, 10, 2, -1, 21, 11, 3, 10, -1, 1, 9, 22, 13, -2, 9, 2, 14, 22, -2, 13, 22, 17, 5, -2, 22, 14, 6, 17, -2, 2, 10, 23, 14, -3, 10, 3, 15, 23, -3, 14, 23, 18, 6, -3, 23, 15, 7, 18, -3, 4, 16, 24, 11, -4, 16, 8, 19, 24, -4, 11, 24, 15, 3, -4, 24, 19, 7, 15, -4, 1, 13, 25, 12, -5, 13, 5, 20, 25, -5, 12, 25, 16, 4, -5, 25, 20, 8, 16, -5, 5, 17, 26, 20, -6, 17, 6, 18, 26, -6, 20, 26, 19, 8, -6, 26, 18, 7, 19, -6, 0};
  static int dof[27]={3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
  static int nsto[27]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  static int ndat[27]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  static int esdat[1]={0};

  static char *nid[]={"D","D","D","D","D","D",
                       "D","D","D","D","D","D",
                       "D","D","D","D","D","D",
                       "D","D","D","D","D","D",
                       "D","D","D"};
  static char *gdcs[]={"k","l","o","$[Nu]$"};
  static double defd[]={1e0,2e0,3e0,9e0,0e0};
  static char *gpcs[]={"T3","T4"};
  static char *npcs[]={""};
  static char *sname[]={""};
  static char *idname[]={""};
  static int idindex[1];
  static char *rdname[]={""};
  static char *cswitch[]={""};
  static int iswitch[1]={0};
  static double dswitch[1]={0e0};
  static int rdindex[1];
  static int nspecs[27];
  static double version[3]={7.204,7.204,12.2};
  static double pnweights[27]={1e0,1e0,1e0,1e0,1e0,1e0,
  1e0,1e0,1e0,1e0,1e0,1e0,
  1e0,1e0,1e0,1e0,1e0,1e0,
  1e0,1e0,1e0,1e0,1e0,1e0,
  1e0,1e0,0e0};
  static double rnodes[81]={-1e0,-1e0,-1e0,1e0,-1e0,-1e0,
  1e0,1e0,-1e0,-1e0,1e0,-1e0,
  -1e0,-1e0,1e0,1e0,-1e0,1e0,
  1e0,1e0,1e0,-1e0,1e0,1e0,
  0e0,-1e0,-1e0,1e0,0e0,-1e0,
  0e0,1e0,-1e0,-1e0,0e0,-1e0,
  -1e0,-1e0,0e0,1e0,-1e0,0e0,
  1e0,1e0,0e0,-1e0,1e0,0e0,
  0e0,-1e0,1e0,1e0,0e0,1e0,
  0e0,1e0,1e0,-1e0,0e0,1e0,
  0e0,0e0,-1e0,0e0,-1e0,0e0,
  1e0,0e0,0e0,0e0,1e0,0e0,
  -1e0,0e0,0e0,0e0,0e0,1e0,
  0e0,0e0,0e0};
  es->ReferenceNodes=rnodes;
  if(ng==-1) es->Data=defd;
  es->id.NoDomainData=4;
  es->Code="Dummy_1";es->Version=version;
  es->MainTitle="";
  es->SubTitle="";
  es->SubSubTitle="";
  es->Bibliography="";
  es->id.NoDimensions=3;es->id.NoDOFGlobal=81;es->id.NoDOFCondense=0;es->id.NoNodes=27;
  es->id.NoSegmentPoints=174;es->Segments=pn;es->PostNodeWeights=pnweights;
  es->id.NoIntSwitch=0;es->IntSwitch=iswitch;es->id.LocalReKe=0;
  es->id.NoDoubleSwitch=0;es->DoubleSwitch=dswitch;
  es->id.NoCharSwitch=0;es->id.WorkingVectorSize=124;es->CharSwitch=cswitch;
  es->DOFGlobal=dof;es->NodeID=nid;es->id.NoGPostData=2;es->id.NoNPostData=0;
  es->id.SymmetricTangent=0;es->id.PostIterationCall=0;es->id.DOFScaling=0;
  es->Topology="H2";es->DomainDataNames=gdcs;es->GPostNames=gpcs;es->NPostNames=npcs;
  es->AdditionalNodes="{}&";
  es->AdditionalGraphics="{Null,Null,Null}";
  es->MMAInitialisation=MMAInitialisationCode;
  es->MMANextStep="";
  es->MMAStepBack="";
  es->MMAPreIteration="";
  es->IDataNames=idname;es->IDataIndex=idindex;es->RDataNames=rdname;es->RDataIndex=rdindex;
  es->id.NoIData=0;es->id.NoRData=0;
  es->id.ShapeSensitivity=0; es->id.EBCSensitivity=0;es->id.SensitivityOrder=0;
  es->id.NoSensNames=0;es->SensitivityNames=sname;es->NodeSpecs=nspecs;
  es->user.SPP=SPP;es->user.SKR=SKR;

  es->id.DefaultIntegrationCode=7;
  if(ic==-1){intc=7;} else {intc=ic;};
  es->id.IntCode=intc;
  SMTMultiIntPoints(&intc,idata,&es->id.NoIntPoints,
      &es->id.NoIntPointsA,&es->id.NoIntPointsB,&es->id.NoIntPointsC,0);
  es->id.NoAdditionalData=(int)(0);
  es->id.NoTimeStorage=(int)(0);
  es->id.NoElementData=(int)(0);


  es->NoNodeStorage=nsto;es->NoNodeData=ndat;
  
  es->ExtraSensitivityData=esdat;
  if(1){
   return 0;
  }else{
   return 1;
  };
};


/******************* S U B R O U T I N E *********************/
void SKR(double v[124],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double *p,double **s)
{
int i1,i3;
for(i1=1;i1<=es->id.NoIntPoints;i1++){
 i3=4*(-1+i1);
 p[0]+=es->IntPoints[i3];
 p[1]+=es->IntPoints[1+i3];
 p[2]+=es->IntPoints[2+i3];
 p[3]+=es->IntPoints[3+i3];
};/* end for */
};

/******************* S U B R O U T I N E *********************/
void SPP(double v[124],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost)
{
};
