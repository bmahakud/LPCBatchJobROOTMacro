#include<iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include<vector>
#include "TTree.h"
using namespace std;

class ClassReadTree {

public :

   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   Int_t           fCurrent; //!current Tree number in a TChain



// Fixed size dimensions of array or collections stored in the TTree if any.



   // Declaration of leaf types

   UInt_t          RunNum;

   UInt_t          LumiBlockNum;

   UInt_t          EvtNum;

   Int_t           NVtx;

   Int_t           isoElectronTracks;

   Int_t           isoMuonTracks;

   Int_t           isoPionTracks;

   Int_t           Leptons;

   Int_t           TagLeptonHighPT;

   Int_t           NumPhotons;

   Int_t           METFilters;

   Int_t           CSCTightHaloFilter;

   Int_t           EcalDeadCellTriggerPrimitiveFilter;

   Int_t           eeBadScFilter;

   Int_t           NJets;

   Int_t           BTags;

   Int_t           ZNum;

   Int_t           NJetsclean;

   Int_t           BTagsclean;

   Float_t         Weight;

   Float_t         HT;

   Float_t         MHT;

   Float_t         MHT_Phi;

   Float_t         DeltaPhi1;

   Float_t         DeltaPhi2;

   Float_t         DeltaPhi3;

   Float_t         minDeltaPhiN;

   Float_t         DeltaPhiN1;

   Float_t         DeltaPhiN2;

   Float_t         DeltaPhiN3;

   Float_t         METPt;

   Float_t         METPhi;

   Float_t         HTclean;

   Float_t         DeltaPhi1clean;

   Float_t         DeltaPhi2clean;

   Float_t         DeltaPhi3clean;

   Float_t         MHTclean;

   Float_t         minDeltaPhiNclean;

   Float_t         METPtclean;

   Float_t         rho;

   UChar_t         GoodVtx;

   UChar_t         JetID;

   UChar_t         PassHFVeto;

   UChar_t         HBHENoiseFilter;

   vector<int>     *genParticles_PDGid;

   vector<int>     *PassTrigger;

   vector<int>     *MuonCharge;

   vector<int>     *ElectronCharge;

   vector<int>     *ak4Jets_chargedHadMult;

   vector<int>     *ak4Jets_neutralHadMult;

   vector<int>     *ak4Jets_photonMult;

   vector<int>     *ak4Jets_flavor;

   vector<double>  *photon_isEB;

   vector<double>  *photon_genMatched;

   vector<double>  *photon_hadTowOverEM;

   vector<double>  *photon_hasPixelSeed;

   vector<double>  *photon_passElectronVeto;

   vector<double>  *photon_pfChargedIso;

   vector<double>  *photon_pfChargedIsoRhoCorr;

   vector<double>  *photon_pfGammaIso;

   vector<double>  *photon_pfGammaIsoRhoCorr;

   vector<double>  *photon_pfNeutralIso;

   vector<double>  *photon_pfNeutralIsoRhoCorr;

   vector<double>  *photon_sigmaIetaIeta;

   vector<double>  *ak4Jets_CSVdisc;

   vector<double>  *ak4Jets_MVAdisc;

   vector<double>  *ak4Jets_chargeHadEfrac;

   vector<double>  *ak4Jets_neutralHadEfrac;

   vector<double>  *ak4Jets_photonEfrac;

   vector<unsigned int> *photon_nonPrompt;

   vector<unsigned int> *photon_hadronization;

   vector<string>  *TriggerNames;

   vector<TLorentzVector> *genParticles;

   vector<TLorentzVector> *bestPhoton;

   vector<TLorentzVector> *photonCands;

   vector<TLorentzVector> *Zp4;

   vector<TLorentzVector> *Muons;

   vector<TLorentzVector> *Electrons;

   vector<TLorentzVector> *ak4Jets;



   // List of branches

   TBranch        *b_RunNum;   //!

   TBranch        *b_LumiBlockNum;   //!

   TBranch        *b_EvtNum;   //!

   TBranch        *b_NVtx;   //!

   TBranch        *b_isoElectronTracks;   //!

   TBranch        *b_isoMuonTracks;   //!

   TBranch        *b_isoPionTracks;   //!

   TBranch        *b_Leptons;   //!

   TBranch        *b_TagLeptonHighPT;   //!

   TBranch        *b_NumPhotons;   //!

   TBranch        *b_METFilters;   //!

   TBranch        *b_CSCTightHaloFilter;   //!

   TBranch        *b_EcalDeadCellTriggerPrimitiveFilter;   //!

   TBranch        *b_eeBadScFilter;   //!

   TBranch        *b_NJets;   //!

   TBranch        *b_BTags;   //!

   TBranch        *b_ZNum;   //!

   TBranch        *b_NJetsclean;   //!

   TBranch        *b_BTagsclean;   //!

   TBranch        *b_Weight;   //!

   TBranch        *b_HT;   //!

   TBranch        *b_MHT;   //!

   TBranch        *b_MHT_Phi;   //!

   TBranch        *b_DeltaPhi1;   //!

   TBranch        *b_DeltaPhi2;   //!

   TBranch        *b_DeltaPhi3;   //!

   TBranch        *b_minDeltaPhiN;   //!

   TBranch        *b_DeltaPhiN1;   //!

   TBranch        *b_DeltaPhiN2;   //!

   TBranch        *b_DeltaPhiN3;   //!

   TBranch        *b_METPt;   //!

   TBranch        *b_METPhi;   //!

   TBranch        *b_HTclean;   //!

   TBranch        *b_DeltaPhi1clean;   //!

   TBranch        *b_DeltaPhi2clean;   //!

   TBranch        *b_DeltaPhi3clean;   //!

   TBranch        *b_MHTclean;   //!

   TBranch        *b_minDeltaPhiNclean;   //!

   TBranch        *b_METPtclean;   //!

   TBranch        *b_rho;   //!

   TBranch        *b_GoodVtx;   //!

   TBranch        *b_JetID;   //!

   TBranch        *b_PassHFVeto;   //!

   TBranch        *b_HBHENoiseFilter;   //!

   TBranch        *b_genParticles_PDGid;   //!

   TBranch        *b_PassTrigger;   //!

   TBranch        *b_MuonCharge;   //!

   TBranch        *b_ElectronCharge;   //!

   TBranch        *b_ak4Jets_chargedHadMult;   //!

   TBranch        *b_ak4Jets_neutralHadMult;   //!

   TBranch        *b_ak4Jets_photonMult;   //!

   TBranch        *b_ak4Jets_flavor;   //!

   TBranch        *b_photon_isEB;   //!

   TBranch        *b_photon_genMatched;   //!

   TBranch        *b_photon_hadTowOverEM;   //!

   TBranch        *b_photon_hasPixelSeed;   //!

   TBranch        *b_photon_passElectronVeto;   //!

   TBranch        *b_photon_pfChargedIso;   //!

   TBranch        *b_photon_pfChargedIsoRhoCorr;   //!

   TBranch        *b_photon_pfGammaIso;   //!

   TBranch        *b_photon_pfGammaIsoRhoCorr;   //!

   TBranch        *b_photon_pfNeutralIso;   //!

   TBranch        *b_photon_pfNeutralIsoRhoCorr;   //!

   TBranch        *b_photon_sigmaIetaIeta;   //!

   TBranch        *b_ak4Jets_CSVdisc;   //!

   TBranch        *b_ak4Jets_MVAdisc;   //!

   TBranch        *b_ak4Jets_chargeHadEfrac;   //!

   TBranch        *b_ak4Jets_neutralHadEfrac;   //!

   TBranch        *b_ak4Jets_photonEfrac;   //!

   TBranch        *b_photon_nonPrompt;   //!

   TBranch        *b_photon_hadronization;   //!

   TBranch        *b_TriggerNames;   //!

   TBranch        *b_genParticles;   //!

   TBranch        *b_bestPhoton;   //!

   TBranch        *b_photonCands;   //!

   TBranch        *b_Zp4;   //!

   TBranch        *b_Muons;   //!

   TBranch        *b_Electrons;   //!

   TBranch        *b_ak4Jets;   //!



   ClassReadTree(TTree *tree);

   virtual ~ClassReadTree();

   bool BaseLine(int iEv, int iPh);

 

   bool PassSigFull(int iEv, int iPh);
   bool PassSBFull(int iEv, int iPh);
   
   bool PassSigCut(int iEv, int iPh);
   bool PassSBCut(int iEv, int iPh);

 
   bool PassSigFullPrompt(int iEv, int iPh);
   bool PassSBFullPrompt(int iEv, int iPh);
   
   bool PassSigCutPrompt(int iEv, int iPh);
   bool PassSBCutPrompt(int iEv, int iPh);

  
   bool PassSigFullNonPrompt(int iEv, int iPh);
   bool PassSBFullNonPrompt(int iEv, int iPh);
   
   bool PassSigCutNonPrompt(int iEv, int iPh);
   bool PassSBCutNonPrompt(int iEv, int iPh);
   


   
   



   bool PassHTlow();
   
   bool PassHThigh();


   bool PassNJetslow();

   bool PassNJetshigh();
  
  // bool PassMHTlow();

  // bool PassMHThigh();





  // virtual void     Init(TTree *tree);

   

   

   

};

ClassReadTree::~ClassReadTree()

{

   if (!fChain) return;

   delete fChain->GetCurrentFile();

}

 ClassReadTree::ClassReadTree(TTree *tree)

{


fChain=tree;
   // The Init() function is called when the selector needs to initialize

   // a new tree or chain. Typically here the branch addresses and branch

   // pointers of the tree will be set.

   // It is normally not necessary to make changes to the generated

   // code, but the routine can be extended by the user if needed.

   // Init() will be called many times when running on PROOF

   // (once per file to be processed).



   // Set object pointer

   genParticles_PDGid = 0;

   PassTrigger = 0;

   MuonCharge = 0;

   ElectronCharge = 0;

   ak4Jets_chargedHadMult = 0;

   ak4Jets_neutralHadMult = 0;

   ak4Jets_photonMult = 0;

   ak4Jets_flavor = 0;

   photon_isEB = 0;

   photon_genMatched = 0;

   photon_hadTowOverEM = 0;

   photon_hasPixelSeed = 0;

   photon_passElectronVeto = 0;

   photon_pfChargedIso = 0;

   photon_pfChargedIsoRhoCorr = 0;

   photon_pfGammaIso = 0;

   photon_pfGammaIsoRhoCorr = 0;

   photon_pfNeutralIso = 0;

   photon_pfNeutralIsoRhoCorr = 0;

   photon_sigmaIetaIeta = 0;

   ak4Jets_CSVdisc = 0;

   ak4Jets_MVAdisc = 0;

   ak4Jets_chargeHadEfrac = 0;

   ak4Jets_neutralHadEfrac = 0;

   ak4Jets_photonEfrac = 0;

   photon_nonPrompt = 0;

   photon_hadronization = 0;

   TriggerNames = 0;

   genParticles = 0;

   bestPhoton = 0;

   photonCands = 0;

   Zp4 = 0;

   Muons = 0;

   Electrons = 0;

   ak4Jets = 0;

   



   fChain->SetBranchAddress("RunNum", &RunNum, &b_RunNum);

   fChain->SetBranchAddress("LumiBlockNum", &LumiBlockNum, &b_LumiBlockNum);

   fChain->SetBranchAddress("EvtNum", &EvtNum, &b_EvtNum);

   fChain->SetBranchAddress("NVtx", &NVtx, &b_NVtx);

   fChain->SetBranchAddress("isoElectronTracks", &isoElectronTracks, &b_isoElectronTracks);

   fChain->SetBranchAddress("isoMuonTracks", &isoMuonTracks, &b_isoMuonTracks);

   fChain->SetBranchAddress("isoPionTracks", &isoPionTracks, &b_isoPionTracks);

   fChain->SetBranchAddress("Leptons", &Leptons, &b_Leptons);

   fChain->SetBranchAddress("TagLeptonHighPT", &TagLeptonHighPT, &b_TagLeptonHighPT);

   fChain->SetBranchAddress("NumPhotons", &NumPhotons, &b_NumPhotons);

   fChain->SetBranchAddress("METFilters", &METFilters, &b_METFilters);

   fChain->SetBranchAddress("CSCTightHaloFilter", &CSCTightHaloFilter, &b_CSCTightHaloFilter);

   fChain->SetBranchAddress("EcalDeadCellTriggerPrimitiveFilter", &EcalDeadCellTriggerPrimitiveFilter, &b_EcalDeadCellTriggerPrimitiveFilter);

   fChain->SetBranchAddress("eeBadScFilter", &eeBadScFilter, &b_eeBadScFilter);

   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);

   fChain->SetBranchAddress("BTags", &BTags, &b_BTags);

   fChain->SetBranchAddress("ZNum", &ZNum, &b_ZNum);

   fChain->SetBranchAddress("NJetsclean", &NJetsclean, &b_NJetsclean);

   fChain->SetBranchAddress("BTagsclean", &BTagsclean, &b_BTagsclean);

   fChain->SetBranchAddress("Weight", &Weight, &b_Weight);

   fChain->SetBranchAddress("HT", &HT, &b_HT);

   fChain->SetBranchAddress("MHT", &MHT, &b_MHT);

   fChain->SetBranchAddress("MHT_Phi", &MHT_Phi, &b_MHT_Phi);

   fChain->SetBranchAddress("DeltaPhi1", &DeltaPhi1, &b_DeltaPhi1);

   fChain->SetBranchAddress("DeltaPhi2", &DeltaPhi2, &b_DeltaPhi2);

   fChain->SetBranchAddress("DeltaPhi3", &DeltaPhi3, &b_DeltaPhi3);

   fChain->SetBranchAddress("minDeltaPhiN", &minDeltaPhiN, &b_minDeltaPhiN);

   fChain->SetBranchAddress("DeltaPhiN1", &DeltaPhiN1, &b_DeltaPhiN1);

   fChain->SetBranchAddress("DeltaPhiN2", &DeltaPhiN2, &b_DeltaPhiN2);

   fChain->SetBranchAddress("DeltaPhiN3", &DeltaPhiN3, &b_DeltaPhiN3);

   fChain->SetBranchAddress("METPt", &METPt, &b_METPt);

   fChain->SetBranchAddress("METPhi", &METPhi, &b_METPhi);

   fChain->SetBranchAddress("HTclean", &HTclean, &b_HTclean);

   fChain->SetBranchAddress("DeltaPhi1clean", &DeltaPhi1clean, &b_DeltaPhi1clean);

   fChain->SetBranchAddress("DeltaPhi2clean", &DeltaPhi2clean, &b_DeltaPhi2clean);

   fChain->SetBranchAddress("DeltaPhi3clean", &DeltaPhi3clean, &b_DeltaPhi3clean);

   fChain->SetBranchAddress("MHTclean", &MHTclean, &b_MHTclean);

   fChain->SetBranchAddress("minDeltaPhiNclean", &minDeltaPhiNclean, &b_minDeltaPhiNclean);

   fChain->SetBranchAddress("METPtclean", &METPtclean, &b_METPtclean);

   fChain->SetBranchAddress("rho", &rho, &b_rho);

   fChain->SetBranchAddress("GoodVtx", &GoodVtx, &b_GoodVtx);

   fChain->SetBranchAddress("JetID", &JetID, &b_JetID);

   fChain->SetBranchAddress("PassHFVeto", &PassHFVeto, &b_PassHFVeto);

   fChain->SetBranchAddress("HBHENoiseFilter", &HBHENoiseFilter, &b_HBHENoiseFilter);

   fChain->SetBranchAddress("genParticles_PDGid", &genParticles_PDGid, &b_genParticles_PDGid);

   fChain->SetBranchAddress("PassTrigger", &PassTrigger, &b_PassTrigger);

   fChain->SetBranchAddress("MuonCharge", &MuonCharge, &b_MuonCharge);

   fChain->SetBranchAddress("ElectronCharge", &ElectronCharge, &b_ElectronCharge);

   fChain->SetBranchAddress("ak4Jets_chargedHadMult", &ak4Jets_chargedHadMult, &b_ak4Jets_chargedHadMult);

   fChain->SetBranchAddress("ak4Jets_neutralHadMult", &ak4Jets_neutralHadMult, &b_ak4Jets_neutralHadMult);

   fChain->SetBranchAddress("ak4Jets_photonMult", &ak4Jets_photonMult, &b_ak4Jets_photonMult);

   fChain->SetBranchAddress("ak4Jets_flavor", &ak4Jets_flavor, &b_ak4Jets_flavor);

   fChain->SetBranchAddress("photon_isEB", &photon_isEB, &b_photon_isEB);

   fChain->SetBranchAddress("photon_genMatched", &photon_genMatched, &b_photon_genMatched);

   fChain->SetBranchAddress("photon_hadTowOverEM", &photon_hadTowOverEM, &b_photon_hadTowOverEM);

   fChain->SetBranchAddress("photon_hasPixelSeed", &photon_hasPixelSeed, &b_photon_hasPixelSeed);

   fChain->SetBranchAddress("photon_passElectronVeto", &photon_passElectronVeto, &b_photon_passElectronVeto);

   fChain->SetBranchAddress("photon_pfChargedIso", &photon_pfChargedIso, &b_photon_pfChargedIso);

   fChain->SetBranchAddress("photon_pfChargedIsoRhoCorr", &photon_pfChargedIsoRhoCorr, &b_photon_pfChargedIsoRhoCorr);

   fChain->SetBranchAddress("photon_pfGammaIso", &photon_pfGammaIso, &b_photon_pfGammaIso);

   fChain->SetBranchAddress("photon_pfGammaIsoRhoCorr", &photon_pfGammaIsoRhoCorr, &b_photon_pfGammaIsoRhoCorr);

   fChain->SetBranchAddress("photon_pfNeutralIso", &photon_pfNeutralIso, &b_photon_pfNeutralIso);

   fChain->SetBranchAddress("photon_pfNeutralIsoRhoCorr", &photon_pfNeutralIsoRhoCorr, &b_photon_pfNeutralIsoRhoCorr);

   fChain->SetBranchAddress("photon_sigmaIetaIeta", &photon_sigmaIetaIeta, &b_photon_sigmaIetaIeta);

   fChain->SetBranchAddress("ak4Jets_CSVdisc", &ak4Jets_CSVdisc, &b_ak4Jets_CSVdisc);

   fChain->SetBranchAddress("ak4Jets_MVAdisc", &ak4Jets_MVAdisc, &b_ak4Jets_MVAdisc);

   fChain->SetBranchAddress("ak4Jets_chargeHadEfrac", &ak4Jets_chargeHadEfrac, &b_ak4Jets_chargeHadEfrac);

   fChain->SetBranchAddress("ak4Jets_neutralHadEfrac", &ak4Jets_neutralHadEfrac, &b_ak4Jets_neutralHadEfrac);

   fChain->SetBranchAddress("ak4Jets_photonEfrac", &ak4Jets_photonEfrac, &b_ak4Jets_photonEfrac);

   fChain->SetBranchAddress("photon_nonPrompt", &photon_nonPrompt, &b_photon_nonPrompt);

   fChain->SetBranchAddress("photon_hadronization", &photon_hadronization, &b_photon_hadronization);

   fChain->SetBranchAddress("TriggerNames", &TriggerNames, &b_TriggerNames);

   fChain->SetBranchAddress("genParticles", &genParticles, &b_genParticles);

   fChain->SetBranchAddress("bestPhoton", &bestPhoton, &b_bestPhoton);

   fChain->SetBranchAddress("photonCands", &photonCands, &b_photonCands);

   fChain->SetBranchAddress("Zp4", &Zp4, &b_Zp4);

   fChain->SetBranchAddress("Muons", &Muons, &b_Muons);

   fChain->SetBranchAddress("Electrons", &Electrons, &b_Electrons);

   fChain->SetBranchAddress("ak4Jets", &ak4Jets, &b_ak4Jets);

   

}



bool ClassReadTree::BaseLine(int iEv, int iPh){//baseline




float HT =HTclean;

float MHT =MHTclean;

float NJets = NJetsclean;

float PhotonPt = photonCands->at(iPh).Pt();

float dPhi1 = DeltaPhi1clean;

float dPhi2 = DeltaPhi2clean;

float dPhi3 = DeltaPhi3clean;

if(NJets >=4 && PhotonPt >100.  && HT > 500. && dPhi1>0.5 && dPhi2>0.5 && dPhi3 > 0.3){

return true;
}else{

return false;
}



}//baseline








bool ClassReadTree::PassSigFull(int iEv,int iPh){



if(BaseLine(iEv,iPh)!=true){

return false;


}


if( photon_hasPixelSeed->at(iPh) == 1 ) return false;

if( photon_isEB->at(iPh) ){
if( photon_hadTowOverEM->at(iPh) > 0.028  ) return false;
}else{
if( photon_hadTowOverEM->at(iPh) > 0.093  ) return false;
}
//return true;



if( photon_isEB->at(iPh) ){
if( photon_pfChargedIsoRhoCorr->at(iPh) > 2.67 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (7.23 + TMath::Exp(0.0028*photonCands->at(iPh).Pt()+0.5408)) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (2.11 + 0.0014*photonCands->at(iPh).Pt()) ) return false;
}else{
if( photon_pfChargedIsoRhoCorr->at(iPh)  > 1.79 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (8.89 + 0.0172*photonCands->at(iPh).Pt()) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (3.09 + 0.0091*photonCands->at(iPh).Pt()) ) return false;
}
return true;

}


bool ClassReadTree::PassSBFull(int iEv,int iPh){



if(BaseLine(iEv,iPh)!=true){

return false;


}


if( photon_hasPixelSeed->at(iPh) == 1 ) return false;

if( photon_isEB->at(iPh) ){
if( photon_hadTowOverEM->at(iPh) > 0.028  ) return false;
}else{
if( photon_hadTowOverEM->at(iPh) > 0.093  ) return false;
}
//return true;



if( photon_isEB->at(iPh) ){
if( photon_pfChargedIsoRhoCorr->at(iPh) < 2.67 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (7.23 + TMath::Exp(0.0028*photonCands->at(iPh).Pt()+0.5408)) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (2.11 + 0.0014*photonCands->at(iPh).Pt()) ) return false;
}else{
if( photon_pfChargedIsoRhoCorr->at(iPh)  < 1.79 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (8.89 + 0.0172*photonCands->at(iPh).Pt()) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (3.09 + 0.0091*photonCands->at(iPh).Pt()) ) return false;
}
return true;

}




bool ClassReadTree::PassSigCut(int iEv,int iPh){


if(BaseLine(iEv,iPh)!=true){

return false;


}


if( photon_hasPixelSeed->at(iPh) == 1 ) return false;

if( photon_isEB->at(iPh) ){
if( photon_hadTowOverEM->at(iPh) > 0.028 || photon_sigmaIetaIeta->at(iPh) > 0.0107 ) return false;
}else{
if( photon_hadTowOverEM->at(iPh) > 0.093 || photon_sigmaIetaIeta->at(iPh) > 0.0272 ) return false;
}
//return true;



if( photon_isEB->at(iPh) ){
if( photon_pfChargedIsoRhoCorr->at(iPh) > 2.67 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (7.23 + TMath::Exp(0.0028*photonCands->at(iPh).Pt()+0.5408)) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (2.11 + 0.0014*photonCands->at(iPh).Pt()) ) return false;
}else{
if( photon_pfChargedIsoRhoCorr->at(iPh)  > 1.79 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (8.89 + 0.0172*photonCands->at(iPh).Pt()) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (3.09 + 0.0091*photonCands->at(iPh).Pt()) ) return false;
}
return true;

}

bool ClassReadTree::PassSBCut(int iEv,int iPh){



if(BaseLine(iEv,iPh)!=true){

return false;


}


if( photon_hasPixelSeed->at(iPh) == 1 ) return false;

if( photon_isEB->at(iPh) ){
if( photon_hadTowOverEM->at(iPh) > 0.028 || photon_sigmaIetaIeta->at(iPh) > 0.0107 ) return false;
}else{
if( photon_hadTowOverEM->at(iPh) > 0.093 || photon_sigmaIetaIeta->at(iPh) > 0.0272 ) return false;
}
//return true;



if( photon_isEB->at(iPh) ){
if( photon_pfChargedIsoRhoCorr->at(iPh) < 2.67 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (7.23 + TMath::Exp(0.0028*photonCands->at(iPh).Pt()+0.5408)) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (2.11 + 0.0014*photonCands->at(iPh).Pt()) ) return false;
}else{
if( photon_pfChargedIsoRhoCorr->at(iPh)  < 1.79 ) return false;
//if( photon_pfNeutralIsoRhoCorr->at(iPh) > (8.89 + 0.0172*photonCands->at(iPh).Pt()) ) return false;
//if( photon_pfGammaIsoRhoCorr->at(iPh) > (3.09 + 0.0091*photonCands->at(iPh).Pt()) ) return false;
}
return true;

}



bool ClassReadTree::PassSigFullPrompt(int iEv,int iPh){

if(PassSigFull(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)==1){

return false;
}

return true;

}



bool ClassReadTree::PassSBFullPrompt(int iEv,int iPh){

if(PassSBFull(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)==1){

return false;
}

return true;

}


bool ClassReadTree::PassSigCutPrompt(int iEv,int iPh){

if(PassSigCut(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)==1){

return false;
}

return true;

}



bool ClassReadTree::PassSBCutPrompt(int iEv,int iPh){

if(PassSBCut(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)==1){

return false;
}

return true;

}
////////////////////////non prompt stuff



bool ClassReadTree::PassSigFullNonPrompt(int iEv,int iPh){

if(PassSigFull(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)!=1){

return false;
}

return true;

}



bool ClassReadTree::PassSBFullNonPrompt(int iEv,int iPh){

if(PassSBFull(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)!=1){

return false;
}

return true;

}


bool ClassReadTree::PassSigCutNonPrompt(int iEv,int iPh){

if(PassSigCut(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)!=1){

return false;
}

return true;

}



bool ClassReadTree::PassSBCutNonPrompt(int iEv,int iPh){

if(PassSBCut(iEv,iPh)!=true){
return false;
}

if(photon_nonPrompt->at(iPh)!=1){

return false;
}

return true;

}

bool ClassReadTree::PassNJetslow(){

if(NJetsclean < 4 || NJets >6 ){
return false;

}else{

return true;
}

}



bool ClassReadTree::PassNJetshigh(){

if(NJetsclean <7 ){
return false;

}else{

return true;
}

}




bool ClassReadTree::PassHTlow(){

if( MHTclean >=500. ){
return false;

}else{

return true;
}

}



bool ClassReadTree::PassHThigh(){

if(MHTclean < 500 ){
return false;

}else{

return true;
}

}







