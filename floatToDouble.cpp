#include <cstring>
#include "floatToBinary.h"

using namespace std;

double floatToDouble(float f);
double btd(string str);
double bitstringToDouble(const string& s);

int main(){
  float f = 32.72f;
  double d = (double)f;
  
  int* q = (int*)&f;
  bitset<sizeof(float)*8> b(*q);

  unsigned long long* p = (unsigned long long*)&d;
  bitset<sizeof(double)*8> bits(*p);
  // c++ solo agrega ceros al final
    return 0;
}

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
