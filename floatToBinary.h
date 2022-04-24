#ifndef _FLOATTOBINARY
#define _FLOATTOBINARY

#include <iostream>
#include <bitset>
#include <cmath>
#include <string>

using namespace std;

string floatToBinary(float f);
string cambioDeBaseEntero(int n);
string cambioDeBaseDecimal(float f, const int size);
string cambioBiased(int n, const int size);

#endif
