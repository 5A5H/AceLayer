/*************************************************************
* AceGen    7.204 MacOSX (8 Dec 20)                          *
*           Co. J. Korelc  2020           4 Sep 21 08:06:50  *
**************************************************************
User     : Full professional version
Notebook : laplace
Evaluation time                 : 1 s     Mode  : Optimal
Number of formulae              : 46      Method: Automatic
Subroutine                      : SKR size: 577
Subroutine                      : SPP size: 95
Total size of Mathematica  code : 672 subexpressions
Total size of C code            : 1961 bytes */
#include "sms.h"

void SKR(double v[208],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double *p,double **s);
void SPP(double v[208],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost);

int MMAInitialisationCode[]={
0,24,123,72,111,108,100,91,78,117,108,108,93,44,32,72,111,108,100,91,78,117,108,108,93,125
};



DLLEXPORT int SMTSetElSpec(ElementSpec *es,int *idata,int ic,int ng)
{ int intc,nd,i;FILE *SMSFile;
  static int pn[9]={1, 2, 3, 0, 1, 2, 3, -1, 0};
  static int dof[3]={1, 1, 1};
  static int nsto[3]={0, 0, 0};

  static int ndat[3]={0, 0, 0};

  static int esdat[1]={0};

  static char *nid[]={"T","T","T"};
  static char *gdcs[]={"k"};
  static double defd[]={1e0,0e0};
  static char *gpcs[]={"T"};
  static char *npcs[]={""};
  static char *sname[]={""};
  static char *idname[]={""};
  static int idindex[1];
  static char *rdname[]={""};
  static char *cswitch[]={""};
  static int iswitch[1]={0};
  static double dswitch[1]={0e0};
  static int rdindex[1];
  static int nspecs[3];
  static double version[3]={7.204,7.204,12.2};
  static double pnweights[3]={1e0,1e0,1e0};
  static double rnodes[9]={1e0,0e0,0e0,0e0,1e0,0e0,
  0e0,0e0,1e0};
  es->ReferenceNodes=rnodes;
  if(ng==-1) es->Data=defd;
  es->id.NoDomainData=1;
  es->Code="T1_Laplace";es->Version=version;
  es->MainTitle="";
  es->SubTitle="";
  es->SubSubTitle="";
  es->Bibliography="";
  es->id.NoDimensions=2;es->id.NoDOFGlobal=3;es->id.NoDOFCondense=0;es->id.NoNodes=3;
  es->id.NoSegmentPoints=8;es->Segments=pn;es->PostNodeWeights=pnweights;
  es->id.NoIntSwitch=0;es->IntSwitch=iswitch;es->id.LocalReKe=0;
  es->id.NoDoubleSwitch=0;es->DoubleSwitch=dswitch;
  es->id.NoCharSwitch=0;es->id.WorkingVectorSize=208;es->CharSwitch=cswitch;
  es->DOFGlobal=dof;es->NodeID=nid;es->id.NoGPostData=1;es->id.NoNPostData=0;
  es->id.SymmetricTangent=0;es->id.PostIterationCall=0;es->id.DOFScaling=0;
  es->Topology="T1";es->DomainDataNames=gdcs;es->GPostNames=gpcs;es->NPostNames=npcs;
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

  es->id.DefaultIntegrationCode=41;
  if(ic==-1){intc=41;} else {intc=ic;};
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
void SKR(double v[208],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double *p,double **s)
{
int i11;
v[1]=es->Data[0];
v[6]=nd[2]->X[0];
v[22]=nd[1]->X[0]-v[6];
v[21]=nd[0]->X[0]-v[6];
v[7]=nd[2]->X[1];
v[24]=nd[1]->X[1]-v[7];
v[23]=nd[0]->X[1]-v[7];
v[25]=-(v[22]*v[23])+v[21]*v[24];
v[92]=v[1]/v[25];
v[38]=v[23]/v[25];
v[49]=v[1]*v[38];
v[37]=-(v[24]/v[25]);
v[48]=v[1]*v[37];
v[36]=-(v[21]/v[25]);
v[46]=v[1]*v[36];
v[55]=-(v[36]*v[46])-v[38]*v[49];
v[35]=v[22]/v[25];
v[45]=v[1]*v[35];
v[56]=-(v[35]*v[45])-v[37]*v[48];
v[54]=-(v[36]*v[45])-v[38]*v[48];
v[28]=v[35]+v[36];
v[27]=v[37]+v[38];
v[52]=v[28]*v[46]+v[27]*v[49];
v[51]=v[28]*v[45]+v[27]*v[48];
v[53]=-(v[1]*((v[27]*v[27])+(v[28]*v[28])));
v[8]=nd[0]->at[0];
v[9]=nd[1]->at[0];
v[93]=-(nd[2]->at[0]*v[25]);
v[32]=v[92]*(v[22]*v[8]-v[21]*v[9]+v[28]*v[93]);
v[31]=v[92]*(-(v[24]*v[8])+v[23]*v[9]+v[27]*v[93]);
v[41]=v[27]*v[31]+v[28]*v[32];
v[40]=-(v[32]*v[36])-v[31]*v[38];
v[39]=-(v[32]*v[35])-v[31]*v[37];
for(i11=1;i11<=es->id.NoIntPoints;i11++){
 v[94]=es->IntPoints[3+4*(-1+i11)]*v[25];
 v[61]=v[52]*v[94];
 v[59]=v[51]*v[94];
 v[58]=v[54]*v[94];
 s[0][0]+=v[56]*v[94];
 s[0][1]+=v[58];
 s[0][2]+=v[59];
 s[1][0]+=v[58];
 s[1][1]+=v[55]*v[94];
 s[1][2]+=v[61];
 s[2][0]+=v[59];
 s[2][1]+=v[61];
 s[2][2]+=v[53]*v[94];
 p[0]+=v[39]*v[94];
 p[1]+=v[40]*v[94];
 p[2]+=v[41]*v[94];
};/* end for */
};

/******************* S U B R O U T I N E *********************/
void SPP(double v[208],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost)
{
int i75,i77;
v[72]=nd[0]->at[0];
v[73]=nd[1]->at[0];
v[74]=nd[2]->at[0];
for(i75=1;i75<=es->id.NoIntPoints;i75++){
 i77=4*(-1+i75);
 v[76]=es->IntPoints[i77];
 v[78]=es->IntPoints[1+i77];
 gpost[i75-1][0]=v[72]*v[76]+v[74]*(1e0-v[76]-v[78])+v[73]*v[78];
};/* end for */
};
