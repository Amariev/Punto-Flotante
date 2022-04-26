#include "floatToDouble.h"

double floatToDouble(float f){
  string str = floatToBinary(f);
  // falta el cambio de bits
  double d = bitstringToDouble(str);
  return d;
}

double bitstringToDouble(const string& s)
{
  unsigned long long x = 0;
  for (string::const_iterator it = s.begin(); it != s.end(); ++it) // recorrer cadena
  {
      x = (x << 1) + (*it - '0');
  }
  double d;
  memcpy(&d, &x, 8);
  cout << d << endl;
  return d;
}
