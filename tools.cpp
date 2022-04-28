#include "tools.h"
#include <math.h>

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

string cambioDeBaseDecimal(double f, const int size){
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

int binaryToDecimal(string str){
  int i = 0;
  int cont = str.size()-1;
  for (int j = 0; j < (int)str.size() ; j++) {
    if (str[j] == '1') {
      i+=pow(2, cont);
    }
    cont--;
  }
  
  return i;
}
