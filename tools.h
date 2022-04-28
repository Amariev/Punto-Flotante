#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <cmath>
#include <iostream>
#include <cstring>
#include <bitset>

using namespace std;

string cambioDeBaseEntero(int n);
string cambioDeBaseDecimal(float f, const int size);
string cambioDeBaseDecimal(double f, const int size);
string cambioBiased(int n,const int size);
int binaryToDecimal(string str);

#endif
