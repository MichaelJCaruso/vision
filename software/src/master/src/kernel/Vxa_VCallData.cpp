/*****  Vxa_VCallData Implementation  *****/

/************************
 ************************
 *****  Interfaces  *****
 ************************
 ************************/

/********************
 *****  System  *****
 ********************/

#include "Vk.h"

/******************
 *****  Self  *****
 ******************/

#include "Vxa_VCallData.h"

/************************
 *****  Supporting  *****
 ************************/


/****************************
 ****************************
 *****                  *****
 *****  Vxa::VCallData  *****
 *****                  *****
 ****************************
 ****************************/

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

Vxa::VCallData::VCallData (
    VCollection *pCluster, VString const &rSelectorName, cardinality_t cParameters, cardinality_t cTask, bool bIntensional
) : m_pCluster     (pCluster)
  , m_iSelector    (rSelectorName, cParameters)
  , m_pDomain      (new VFiniteSet (cTask))
  , m_bIntensional (bIntensional)
{
}

Vxa::VCallData::VCallData (
    ThisClass const &rOther
) : m_pCluster     (rOther.m_pCluster)
  , m_iSelector    (rOther.m_iSelector)
  , m_pDomain      (rOther.m_pDomain)
  , m_bIntensional (rOther.m_bIntensional)
{
}

/*************************
 *************************
 *****  Destruction  *****
 *************************
 *************************/

Vxa::VCallData::~VCallData () {
}

/************************
 ************************
 *****  Visitation  *****
 ************************
 ************************/

bool Vxa::VCallData::launchTask (VTask *pTask) const {
    return m_pCluster->launchTask (pTask);
}
