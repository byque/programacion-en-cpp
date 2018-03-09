#include <iostream>

using namespace std;

class Caja {
  public:
    double longitud;     // Longitud de una caja
    double profundidad;  // Profundidad de una caja
    double altitud;      // Altitud de una caja
};

int main() {
  Caja Caja1;  // Declarar Caja1 de tipo Caja
  Caja Caja2;  // Declarar Caja2 de tipo Caja
  double volumen = 0.0;  // Almacenar el volumen de una caja caja aquí

  // Especificación de la caja 1
  Caja1.altitud = 5.0;
  Caja1.longitud = 6.0;
  Caja1.profundidad = 7.0;

  // Especificación de la caja 2
  Caja2.altitud = 10.0;
  Caja2.longitud = 12.0;
  Caja2.profundidad = 13.0;

  // Volumen de la caja 1
  volumen = Caja1.altitud * Caja1.longitud * Caja1.profundidad;
  cout << "Volumen de Caja1 : " << volumen <<endl;

  // Volumen de la caja 2
  volumen = Caja2.altitud * Caja2.longitud * Caja2.profundidad;
  cout << "Volumen de Caja2 : " << volumen <<endl;
  return 0;
}
