/*************************************************************
* AceGen    7.204 MacOSX (8 Dec 20)                          *
*           Co. J. Korelc  2020           4 Sep 21 18:35:01  *
**************************************************************
User     : Full professional version
Notebook : dummy
Evaluation time                 : 0 s     Mode  : Prototype
Number of formulae              : 32      Method: Automatic
Subroutine                      : SKR size: 866
Subroutine                      : SPP size: 0
Total size of Mathematica  code : 866 subexpressions
Total size of C code            : 7157 bytes */
#include "sms.h"

void SKR(double v[147],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double *p,double **s);
void SPP(double v[147],ElementSpec *es,ElementData *ed,NodeSpec **ns,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost);

int MMAInitialisationCode[]={
0,24,123,72,111,108,100,91,78,117,108,108,93,44,32,72,111,108,100,91,78,117,108,108,93,125
};



DLLEXPORT int SMTSetElSpec(ElementSpec *es,int *idata,int ic,int ng)
{ int intc,nd,i;FILE *SMSFile;
  static int pn[33]={1, 2, 3, 0, 1, 4, 2, 0, 1, 3, 4, 0, 2, 4, 3, 0, 1, 2, 3, -1, 1, 4, 2, -2, 1, 3, 4, -3, 2, 4, 3, -4, 0};
  static int dof[4]={3, 3, 3, 3};
  static int nsto[4]={0, 0, 0, 0};

  static int ndat[4]={0, 0, 0, 0};

  static int esdat[1]={0};

  static char *nid[]={"D","D","D","D"};
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
  static int nspecs[4];
  static double version[3]={7.204,7.204,12.2};
  static double pnweights[4]={1e0,1e0,1e0,1e0};
  static double rnodes[12]={1e0,0e0,0e0,0e0,1e0,0e0,
  0e0,0e0,1e0,0e0,0e0,0e0};
  es->ReferenceNodes=rnodes;
  if(ng==-1) es->Data=defd;
  es->id.NoDomainData=4;
  es->Code="Dummy_4";es->Version=version;
  es->MainTitle="";
  es->SubTitle="";
  es->SubSubTitle="";
  es->Bibliography="";
  es->id.NoDimensions=3;es->id.NoDOFGlobal=12;es->id.NoDOFCondense=0;es->id.NoNodes=4;
  es->id.NoSegmentPoints=32;es->Segments=pn;es->PostNodeWeights=pnweights;
  es->id.NoIntSwitch=0;es->IntSwitch=iswitch;es->id.LocalReKe=0;
  es->id.NoDoubleSwitch=0;es->DoubleSwitch=dswitch;
  es->id.NoCharSwitch=0;es->id.WorkingVectorSize=147;es->CharSwitch=cswitch;
  es->DOFGlobal=dof;es->NodeID=nid;es->id.NoGPostData=2;es->id.NoNPostData=0;
  es->id.SymmetricTangent=0;es->id.PostIterationCall=0;es->id.DOFScaling=0;
  es->Topology="O1";es->DomainDataNames=gdcs;es->GPostNames=gpcs;es->NPostNames=npcs;
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

  es->id.DefaultIntegrationCode=23020023;
  if(ic==-1){intc=23020023;} else {intc=ic;};
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
void SKR(double v[147],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double *p,double **s)
{
int i25;
v[1]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D1$",es->Code))]->X[(int)
 (-1+es->BoundCheck(1,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D2$",es->Code))];
v[2]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D3$",es->Code))]->X[(int)
 (-1+es->BoundCheck(2,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D4$",es->Code))];
v[3]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D5$",es->Code))]->X[(int)
 (-1+es->BoundCheck(3,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D6$",es->Code))];
v[4]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D7$",es->Code))]->X[(int)
 (-1+es->BoundCheck(1,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D8$",es->Code))];
v[5]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D9$",es->Code))]->X[(int)
 (-1+es->BoundCheck(2,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D10$",es->Code))];
v[6]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D11$",es->Code))]->X[(int
 )(-1+es->BoundCheck(3,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D12$",es->Code))];
v[7]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D13$",es->Code))]->X[(int
 )(-1+es->BoundCheck(1,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D14$",es->Code))];
v[8]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D15$",es->Code))]->X[(int
 )(-1+es->BoundCheck(2,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D16$",es->Code))];
v[9]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D17$",es->Code))]->X[(int
 )(-1+es->BoundCheck(3,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D18$",es->Code))];
v[10]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D19$",es->Code))]->X[
 (int)(-1+es->BoundCheck(1,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D20$",es->Code))];
v[11]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D21$",es->Code))]->X[
 (int)(-1+es->BoundCheck(2,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D22$",es->Code))];
v[12]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,X,..]","SKR","$D23$",es->Code))]->X[
 (int)(-1+es->BoundCheck(3,1,es->id.NoDimensions,"nd$$[..,X,j]","SKR","$D24$",es->Code))];
v[13]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D25$",es->Code))]->at[
 (int)(-1+es->BoundCheck(1,1,nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D26$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D27$",es->Code))];
v[14]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D28$",es->Code))]->at[
 (int)(-1+es->BoundCheck(2,1,nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D29$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D30$",es->Code))];
v[15]=nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D31$",es->Code))]->at[
 (int)(-1+es->BoundCheck(3,1,nd[(int)(-1+es->BoundCheck(1,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D32$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D33$",es->Code))];
v[16]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D34$",es->Code))]->at[
 (int)(-1+es->BoundCheck(1,1,nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D35$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D36$",es->Code))];
v[17]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D37$",es->Code))]->at[
 (int)(-1+es->BoundCheck(2,1,nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D38$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D39$",es->Code))];
v[18]=nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D40$",es->Code))]->at[
 (int)(-1+es->BoundCheck(3,1,nd[(int)(-1+es->BoundCheck(2,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D41$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D42$",es->Code))];
v[19]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D43$",es->Code))]->at[
 (int)(-1+es->BoundCheck(1,1,nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D44$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D45$",es->Code))];
v[20]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D46$",es->Code))]->at[
 (int)(-1+es->BoundCheck(2,1,nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D47$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D48$",es->Code))];
v[21]=nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D49$",es->Code))]->at[
 (int)(-1+es->BoundCheck(3,1,nd[(int)(-1+es->BoundCheck(3,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D50$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D51$",es->Code))];
v[22]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D52$",es->Code))]->at[
 (int)(-1+es->BoundCheck(1,1,nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D53$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D54$",es->Code))];
v[23]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D55$",es->Code))]->at[
 (int)(-1+es->BoundCheck(2,1,nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D56$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D57$",es->Code))];
v[24]=nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,at,..]","SKR","$D58$",es->Code))]->at[
 (int)(-1+es->BoundCheck(3,1,nd[(int)(-1+es->BoundCheck(4,1,es->id.NoNodes,"nd$$[i,id,NoDOF]","SKR"
 ,"$D59$",es->Code))]->id.NoDOF,"nd$$[..,at,j]","SKR","$D60$",es->Code))];
for(i25=1;i25<=es->id.NoIntPoints;i25++){
 v[26]=es->IntPoints[(int)(-1+es->BoundCheck(1+4*(-1+i25),1,4*es->id.NoIntPoints
  ,"es$$[IntPoints,j_,k_]","SKR","$D61$",es->Code))];
 v[27]=es->IntPoints[(int)(-1+es->BoundCheck(2+4*(-1+i25),1,4*es->id.NoIntPoints
  ,"es$$[IntPoints,j_,k_]","SKR","$D62$",es->Code))];
 v[28]=es->IntPoints[(int)(-1+es->BoundCheck(3+4*(-1+i25),1,4*es->id.NoIntPoints
  ,"es$$[IntPoints,j_,k_]","SKR","$D63$",es->Code))];
 v[29]=es->IntPoints[(int)(-1+es->BoundCheck(4+4*(-1+i25),1,4*es->id.NoIntPoints
  ,"es$$[IntPoints,j_,k_]","SKR","$D64$",es->Code))];
 p[(int)(-1+es->BoundCheck(1,1,es->id.NoDOFGlobal+es->id.NoDOFCondense,"p$$[i]","SKR","$D65$",es
  ->Code))]+=v[13]+v[14]+v[15]+v[16]+v[17]+v[18]+v[19]+v[20]+v[21]+v[22]+v[23]+v[24]+v[26];
 p[(int)(-1+es->BoundCheck(2,1,es->id.NoDOFGlobal+es->id.NoDOFCondense,"p$$[i]","SKR","$D66$",es
  ->Code))]+=v[1]+v[10]+v[11]+v[12]+v[2]+v[27]+v[3]+v[4]+v[5]+v[6]+v[7]+v[8]+v[9];
 p[(int)(-1+es->BoundCheck(3,1,es->id.NoDOFGlobal+es->id.NoDOFCondense,"p$$[i]","SKR","$D67$",es
  ->Code))]+=v[28];
 p[(int)(-1+es->BoundCheck(4,1,es->id.NoDOFGlobal+es->id.NoDOFCondense,"p$$[i]","SKR","$D68$",es
  ->Code))]+=v[29];
};/* end for */
};

/******************* S U B R O U T I N E *********************/
void SPP(double v[147],ElementSpec *es,ElementData *ed,NodeSpec **ns
     ,NodeData **nd,double *rdata,int *idata,double **gpost,double **npost)
{
};
