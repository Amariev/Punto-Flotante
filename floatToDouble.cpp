#include "floatToDouble.h"
#include "tools.h"

double floatToDouble(float f, string& s){
  string str = floatToBinary(f);
  str += " ";
  string b[3];
  int exponente_size = 11;

  size_t pos = 0;
  int i = 0;
  while ((pos = str.find(" ")) != string::npos){
    b[i] = str.substr(0, pos);
    str.erase(0, pos + 1);
    i++;
  }

  int num = binaryToDecimal(b[1]);
  int n = num - pow(2,7) +2; // exponente
  string bexponente = cambioBiased(n, exponente_size);

  string ceros(29, '0');
  str.clear();
  str = b[0] + bexponente + b[2] + ceros;
  s = str;

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
  return d;
}
