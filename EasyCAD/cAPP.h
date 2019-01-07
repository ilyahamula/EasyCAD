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

private:
  int version;

};

#endif // CAPP_H