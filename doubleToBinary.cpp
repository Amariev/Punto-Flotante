#include "doubleToBinary.h"

string doubleToBinary(double d);

// corregir si es cercano a cero
string doubleToBinary(double d){
  string str;
  bool signo;
  const int entero = abs(d); // default tomb la part enters
  const double decimal = abs(d - entero);
  const int sifgnificando_size = 52;
  const int exponente_size = 11;

  if( d == 0){
    string str(64, '0');
    return str;
  }

  if(d>0) signo = 0;
  else signo = 1;

  const string bEntero = cambioDeBaseEntero(entero);
  const string bDecimal = cambioDeBaseDecimal(decimal, sifgnificando_size);
  const string bExponenete = cambioBiased(bEntero.size(), exponente_size);
  const string significando = bEntero.substr(1) + bDecimal.substr(0, bDecimal.size()-(bEntero.size()-1));
  str = to_string(signo) + " " + bExponenete + " " + significando;
  return str;
}
