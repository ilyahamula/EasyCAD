#include "cAPP.h"

cAPP::cAPP()
{
}

cAPP::~cAPP()
{
}

cAPP& cAPP::Instance()
{
  static cAPP app;
  return app;
}