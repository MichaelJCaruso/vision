/*****  Vca::MetaData::SiteObject Implementation  *****/

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

#include "Vca_MetaData_SiteObject.h"

/************************
 *****  Supporting  *****
 ************************/

#include "Vca_CompilerHappyPill.h"


/***************************************
 ***************************************
 *****                             *****
 *****  Vca::MetaData::SiteObject  *****
 *****                             *****
 ***************************************
 ***************************************/

/**************************
 **************************
 *****  Construction  *****
 **************************
 **************************/

Vca::MetaData::SiteObject::SiteObject (Site* pSite) : m_pSite (pSite) {
}

/*************************
 *************************
 *****  Destruction  *****
 *************************
 *************************/

Vca::MetaData::SiteObject::~SiteObject () {
}
