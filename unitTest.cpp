#include <iostream>
#include "complexNumber.h"

using namespace std;

/** 
* тестирование класса комплексных чисел
*/
int main() {  
  complexNumber firstComplex, secondComplex(-4), thirdComplex(23.0, 45.9);

  cout << firstComplex << "," << secondComplex << "," << thirdComplex << endl;

  firstComplex = secondComplex + thirdComplex;

  cout << "firstComplex = secondComplex + thirdComplex, firstComplex=" << firstComplex << endl;

  complexNumber subComplex = secondComplex - thirdComplex;

  cout << "subComplex = secondComplex - thirdComplex, subComplex = " << subComplex << endl;
  cout << "subComplex*firstComplex = " << subComplex * firstComplex << endl;
  cout << "subComplex/4.45=" << subComplex / 4.45 << endl;

  complexNumber summComplex;

  cout << "Enter complex number summComplex = ";
  cin >> summComplex;

  firstComplex += thirdComplex + summComplex;

  cout << "summComplex = " << summComplex << "\nfirstComplex = " << firstComplex << endl;

  return 0;
}
