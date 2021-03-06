/*****  VfDeleteGenerator Implementation  *****/

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

#include "VfDeleteGenerator.h"

/************************
 *****  Supporting  *****
 ************************/


/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

VfDeleteGenerator::VfDeleteGenerator (VAssociativeResult& rResult)
: VAssociativeOperator		(rResult)
, m_pTargetDomainAdjustment	(0)
, m_sTargetDomainAdjustment	(0)
{
}


/*************************
 *************************
 *****  Destruction  *****
 *************************
 *************************/

VfDeleteGenerator::~VfDeleteGenerator ()
{
    if (m_pTargetDomainAdjustment)
	m_pTargetDomainAdjustment->discard ();
}


/*****************
 *****************
 *****  Use  *****
 *****************
 *****************/

void VfDeleteGenerator::initialize (
    rtPTOKEN_Handle *pTargetPToken, rtPTOKEN_Handle *pSourcePToken
) {
    VAssociativeOperator::initialize (pTargetPToken, pSourcePToken);

    if (m_pTargetDomainAdjustment) {
	m_pTargetDomainAdjustment->discard ();
	m_pTargetDomainAdjustment = NilOf (rtPTOKEN_CType*);
	m_sTargetDomainAdjustment = 0;
    }

    createSourceReference ();
}

void VfDeleteGenerator::commit () {
    commitTargetReference (m_pTargetDomainAdjustment);
    commitSourceReference (m_sTargetDomainAdjustment);

    VAssociativeOperator::commit ();
}
