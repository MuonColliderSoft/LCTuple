#ifndef SimCalorimeterHitBranches_h
#define SimCalorimeterHitBranches_h 1

#include "LCTupleConf.h" 

#include "CWBranchesSet.h"


class TTree ;

namespace EVENT{
  class LCCollection ;
  class LCCEvent ;
}

/** SimCalorimeterHitBranches holds branches created from LCRelations.
 * 
 * @author F. Gaede, DESY
 * @version $Id: SimCalorimeterHitBranches.h 2945 2012-01-16 15:05:02Z gaede $
 */

class SimCalorimeterHitBranches : public CWBranchesSet {
  
public:
  
  SimCalorimeterHitBranches() {} ;
  
  virtual void initBranches( TTree* tree, const std::string& prefix="" ) ;
  
  virtual void fill(const EVENT::LCCollection* col, EVENT::LCEvent* evt ) ;
  
  virtual ~SimCalorimeterHitBranches() {} ;
  

private:
  
  int    _nsch   ;    
  
  int    _scci0[ LCT_SIMCALORIMETERHIT_MAX ] ;
  int    _scci1[ LCT_SIMCALORIMETERHIT_MAX ] ;
  double _scpox[ LCT_SIMCALORIMETERHIT_MAX ] ;
  double _scpoy[ LCT_SIMCALORIMETERHIT_MAX ] ;
  double _scpoz[ LCT_SIMCALORIMETERHIT_MAX ] ;
  float  _scene[ LCT_SIMCALORIMETERHIT_MAX ] ;
  
} ;

#endif


