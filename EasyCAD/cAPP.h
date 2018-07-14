#ifndef CAPP_H
#define CAPP_H

class cAPP
{
  cAPP(const cAPP&) = delete;
  cAPP(cAPP&&) = delete;
  cAPP& operator=(const cAPP&) = delete;

  cAPP();
  ~cAPP();

public:
  static cAPP& Instance();
  int* GetArr();

private:

};

#endif // CAPP_H