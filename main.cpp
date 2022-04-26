#include "floatToBinary.h"
#include "doubleToBinary.h"
#include "floatToDouble.h"
#include "tools.h"

int main(){
  // correr todos
  return 0;
}

// Float to binary
/* int main(){
  float f;
  cin >> f;
  string str = floatToBinary(f);
  cout << str << endl;
  // bits del programa
  int* p = (int*)&f;
  bitset<sizeof(float)*8> bits(*p);
  cout << bits << endl;
  return 0;
} */

// double to binary
/* int main(){
  double d;
  cin >> d;
  string str = doubleToBinary(d);
  cout << str << endl;
  // representacion en el sistema
  unsigned long long* p = (unsigned long long*)&d;
  bitset<sizeof(double)*8> bits(*p);
  cout << bits << endl;
  return 0;
}
 */

// flaot to double
/* int main(){
  float f = 32.729f;
  double d = (double)f;
  
  int* q = (int*)&f;
  bitset<sizeof(float)*8> b(*q);
  cout << b << endl;

  unsigned long long* p = (unsigned long long*)&d;
  bitset<sizeof(double)*8> bits(*p);
  cout << bits << endl;
  // c++ solo agrega ceros al final
    return 0;
}
 */
