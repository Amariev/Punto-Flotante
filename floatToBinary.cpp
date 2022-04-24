#include "floatToBinary.h"

// corregir si es cero
// agregar cin
int main(){
  float f = 32.7212f;
  string str = floatToBinary(f);
  cout << str << endl;
  // bits del programa
  int* p = (int*)&f;
  bitset<sizeof(float)*8> bits(*p);
  cout << bits << endl;
  return 0;
}

string floatToBinary(float f){
  bool signo;
  string str;
  int entero = abs(f); // default tomb la part enters
  float decimal = abs(f - entero);
  const int significando_size = 23;
  const int exponente_size = 8;

  if(f>0) signo = 0;
  else signo = 1;

  string bEntero = cambioDeBaseEntero(entero);
  string bDecimal = cambioDeBaseDecimal(decimal, significando_size);
  string bExponenete = cambioBiased(bEntero.size(), exponente_size);
  string significando = bEntero.substr(1) + bDecimal.substr(0, bDecimal.size()-(bEntero.size()-1));
  str = to_string(signo) + " " + bExponenete + " " + significando;
  return str;
}

string cambioDeBaseEntero(int n){
  string str;
  while (n > 0) {
    if(n%2) str.push_back('1');
    else str.push_back('0');
    n = n/2;
  }
  string temp(str.rbegin(), str.rend()); // revert
  str = temp;
  return str;
}

string cambioDeBaseDecimal(float f, const int size){
  string str;
  for (int i = 0; i < size; i++) {
    f *= 2;
    if ((int)f == 1) {
      f--;
      str.push_back('1');
    }else str.push_back('0');
  }
  return str;
}

string cambioBiased(int n,const int size){
  string str;
  int num = (n-1) + ((pow(2, size-1))-1);
  str = cambioDeBaseEntero(num);
  return str;
}
