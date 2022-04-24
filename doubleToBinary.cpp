#include <iostream>
#include <bitset>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

string doubleToBinary(double d);
string cambioDeBaseEntero(int n);
string cambioDeBaseDecimal(double f, const int size);
string cambioBiased(int n,const int size);

// corregir si es cero
// agregar cin
int main(){
  double d = 32.72;
  string str = doubleToBinary(d);
  // representacion en el sistema
  unsigned long long* p = (unsigned long long*)&d;
  bitset<sizeof(double)*8> bits(*p);
  cout << bits << endl;
  return 0;
}

string doubleToBinary(double d){
  string str;
  bool signo;
  const int entero = abs(d); // default tomb la part enters
  const double decimal = abs(d - entero);
  const int sifgnificando_size = 52;
  const int exponente_size = 11;

  if(d>0) signo = 0;
  else signo = 1;

  const string bEntero = cambioDeBaseEntero(entero);
  const string bDecimal = cambioDeBaseDecimal(decimal, sifgnificando_size);
  const string bExponenete = cambioBiased(bEntero.size(), exponente_size);
  const string significando = bEntero.substr(1) + bDecimal.substr(0, bDecimal.size()-(bEntero.size()-1));
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

string cambioDeBaseDecimal(double f, const int size){
  string str;
  for (int i = 0; i < size; i++) {
    f *= 2;
    if ((int)f == 1) {
      f--;
      str.push_back('1');
    }else str.push_back('0');
  }
  cout << "\n"<< str << endl;
  return str;
}

string cambioBiased(int n,const int size){
  string str;
  int num = (n-1) + ((pow(2, size-1))-1);
  str = cambioDeBaseEntero(num);
  return str;
}
