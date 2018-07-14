#include "cAPP.h"

cAPP::cAPP()
{
  m_dynArr = new int[45];
}

cAPP::~cAPP()
{
  delete m_dynArr;
}

cAPP& cAPP::Instance()
{
  static cAPP app;
  return app;
}

int* cAPP::GetArr()
{
  return m_dynArr;
}
