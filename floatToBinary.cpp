#include "floatToBinary.h"

// corregir si es cercano a cero
string floatToBinary(float f){
  bool signo;
  string str;
  int entero = abs(f); // default tomb la part enters
  float decimal = abs(f - entero);
  const int significando_size = 23;
  const int exponente_size = 8;

  if (f == 0){
    string str(32, '0');
    return str;
  }

  if(f>0) signo = 0;
  else signo = 1;

  string bEntero = cambioDeBaseEntero(entero);
  string bDecimal = cambioDeBaseDecimal(decimal, significando_size);
  string bExponenete = cambioBiased(bEntero.size(), exponente_size);
  string significando = bEntero.substr(1) + bDecimal.substr(0, bDecimal.size()-(bEntero.size()-1));
  str = to_string(signo) + " " + bExponenete + " " + significando;
  return str;
}
