#include "cAPP.h"

int main()
{
  int* myArr = cAPP::Instance().GetArr();

  myArr[0] = 78;

	return 0;
}