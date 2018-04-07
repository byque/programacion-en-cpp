// Programa para ilustrar el funcionamiento de vectores en C++

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> vector1;
  int* data_ptr = vector1.data();
  vector <int> :: iterator i;
  vector <int> :: reverse_iterator ir;

  // Aumentar el vector con valores provenientes de un contador ascendente
  for (int i = 1; i <= 5; i++) {
      vector1.push_back(i);
      cout << "Valor agregado = " << *data_ptr << "\n";
  }

  for (i = vector1.begin(); i != vector1.end(); ++i) {
      cout << *i << '\t';
  }

  cout << endl << endl;
  cout << "Output of rbegin and rend\t:\t";
  for (ir = vector1.rbegin(); ir != vector1.rend(); ++ir)
      cout << '\t' << *ir;

  return 0;

}
