#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include <vector>
#include "TTree.h"
#include "ClassReadTree.cc"
#include "TString.h"
#include "TH1F.h"
using namespace std;


void MasterReaderAdvanced(TString InputFile="",TString OutputFile="", std::string Weight=""){
 

    
if(InputFile=="" || OutputFile=="" || Weight==""){
cout<<"You are missing input arguments,you should put arguments before running ..."<<endl;

}



    TFile *fsie=new TFile(OutputFile,"RECREATE");



    TH1F  *h_bins[60];
    
    char histName[100];
    
    for(int i=0;i<60;i++){//loop bins
    
    sprintf(histName,"SigmaIeta_%i_h",i);
    h_bins[i]=new TH1F(histName,histName,200,0,0.05);

    
    

    }//loop bins

    

        //cout<<"file path : "<<InputFileName<<endl;

	TChain* t = new TChain("TreeMaker2/PreSelection");
	t->Add(InputFile);

//"/home/bibhu/Desktop/PhD/DevelopingMakeClassCode/GenericNtuplePlotter/Ntuples/Spring15.GJets_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_40_RA2AnalysisTree.root");

    ClassReadTree read(t);
    for(int iEv=0;iEv < t->GetEntries();iEv++){//event loop signal
	if( iEv % 500 == 0 ) cout << "event: " << iEv << endl;
			t->GetEntry(iEv);
		int iPh_0=-1;
		float PhPt_0=0;
          for(int iPh=0;iPh<read.photonCands->size();iPh++){//photon loop
          if(read.photonCands->at(iPh).Pt() > PhPt_0){
          PhPt_0=read.photonCands->at(iPh).Pt();
          iPh_0=iPh;
             }
          }//photon loop
//////////////////
if(iPh_0 !=-1  && read.photon_isEB->at(iPh_0)==1){//Leading Pt Photon
if(read.PassSigFull(iEv,iPh_0)){h_bins[0]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFull(iEv,iPh_0)){h_bins[1]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCut(iEv,iPh_0)){h_bins[2]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCut(iEv,iPh_0)){h_bins[3]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullPrompt(iEv,iPh_0)){h_bins[4]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullPrompt(iEv,iPh_0)){h_bins[5]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutPrompt(iEv,iPh_0)){h_bins[6]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutPrompt(iEv,iPh_0)){h_bins[7]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullNonPrompt(iEv,iPh_0)){h_bins[8]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullNonPrompt(iEv,iPh_0)){h_bins[9]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutNonPrompt(iEv,iPh_0)){h_bins[10]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutNonPrompt(iEv,iPh_0)){h_bins[11]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassNJetslow()){//low Njet
if(read.PassSigFull(iEv,iPh_0)){h_bins[12]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFull(iEv,iPh_0)){h_bins[13]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCut(iEv,iPh_0)){h_bins[14]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCut(iEv,iPh_0)){h_bins[15]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullPrompt(iEv,iPh_0)){h_bins[16]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullPrompt(iEv,iPh_0)){h_bins[17]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutPrompt(iEv,iPh_0)){h_bins[18]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutPrompt(iEv,iPh_0)){h_bins[19]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullNonPrompt(iEv,iPh_0)){h_bins[20]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullNonPrompt(iEv,iPh_0)){h_bins[21]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutNonPrompt(iEv,iPh_0)){h_bins[22]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutNonPrompt(iEv,iPh_0)){h_bins[23]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
}//low Njet
if(read.PassNJetshigh()){//high Njet
if(read.PassSigFull(iEv,iPh_0)){h_bins[24]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFull(iEv,iPh_0)){h_bins[25]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCut(iEv,iPh_0)){h_bins[26]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCut(iEv,iPh_0)){h_bins[27]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullPrompt(iEv,iPh_0)){h_bins[28]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullPrompt(iEv,iPh_0)){h_bins[29]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutPrompt(iEv,iPh_0)){h_bins[30]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutPrompt(iEv,iPh_0)){h_bins[31]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullNonPrompt(iEv,iPh_0)){h_bins[32]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullNonPrompt(iEv,iPh_0)){h_bins[33]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutNonPrompt(iEv,iPh_0)){h_bins[34]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutNonPrompt(iEv,iPh_0)){h_bins[35]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
}//high Njet
if(read.PassHTlow()){//low HT
if(read.PassSigFull(iEv,iPh_0)){h_bins[36]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFull(iEv,iPh_0)){h_bins[37]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCut(iEv,iPh_0)){h_bins[38]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCut(iEv,iPh_0)){h_bins[39]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullPrompt(iEv,iPh_0)){h_bins[40]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullPrompt(iEv,iPh_0)){h_bins[41]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutPrompt(iEv,iPh_0)){h_bins[42]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutPrompt(iEv,iPh_0)){h_bins[43]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullNonPrompt(iEv,iPh_0)){h_bins[44]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullNonPrompt(iEv,iPh_0)){h_bins[45]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutNonPrompt(iEv,iPh_0)){h_bins[46]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutNonPrompt(iEv,iPh_0)){h_bins[47]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
}//low HT
if(read.PassHThigh()){//high HT
if(read.PassSigFull(iEv,iPh_0)){h_bins[48]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFull(iEv,iPh_0)){h_bins[49]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCut(iEv,iPh_0)){h_bins[50]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCut(iEv,iPh_0)){h_bins[51]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullPrompt(iEv,iPh_0)){h_bins[52]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullPrompt(iEv,iPh_0)){h_bins[53]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutPrompt(iEv,iPh_0)){h_bins[54]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutPrompt(iEv,iPh_0)){h_bins[55]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigFullNonPrompt(iEv,iPh_0)){h_bins[56]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBFullNonPrompt(iEv,iPh_0)){h_bins[57]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSigCutNonPrompt(iEv,iPh_0)){h_bins[58]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
if(read.PassSBCutNonPrompt(iEv,iPh_0)){h_bins[59]->Fill(read.photon_sigmaIetaIeta->at(iPh_0));}
}//high HT
}//Leading Pt Photon
		
}//event loop signal




double weight = ::atof(Weight.c_str());


cout<<"converted string value: "<<weight<<endl;
for(int i=0;i<60;i++){
h_bins[i]->Scale(weight);

}



fsie->Write();


cout<<"test"<<endl;

	
}
