#include "floatToBinary.h"
#include "doubleToBinary.h"
#include "floatToDouble.h"
#include "tools.h"

void ftb();
void dtb();
void ftd();

int main(){
  // Float to Binary
  ftb();
  // Double to Binary
  dtb();
  // Float to Double
  ftd();
  return 0;
}

void ftb(){
  float f;
  cout << "Conversor float a patron binario, ingrese un float: ";
  cin >> f;
  string str = floatToBinary(f);
  cout << str << endl;
  cout << "Float almacenado en memoria RAM:\n";
  int* p = (int*)&f;
  bitset<sizeof(float)*8> bits(*p);
  cout << bits << endl;
  return;
}

void dtb(){
  double d;
  cout << "Conversor de double a patron binario, ingrese un double: ";
  cin >> d;
  string str = doubleToBinary(d);
  cout << str << endl;
  cout << "Double almacenado en memoria RAM:\n";
  unsigned long long* p = (unsigned long long*)&d;
  bitset<sizeof(double)*8> bits(*p);
  cout << bits << endl;

  return;
}

void ftd(){
  float f;
  cout << "Conversor de float a double, ingrese un float: ";
  cin >> f;
  string ds;
  double d = floatToDouble(f, ds);
  cout << ds << endl;
  cout << d << endl;
  cout << "Conversion de C++ al copiar una variable float a double:\n";
  int* q = (int*)&f;
  bitset<sizeof(float)*8> bitsf(*q);
  cout << bitsf << endl;

  double db = (double)f;
  unsigned long long* p = (unsigned long long*)&db;
  bitset<sizeof(double)*8> bitsd(*p);
  cout << bitsd << endl; 
  return;
}
