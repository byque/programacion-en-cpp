// Programa para ilustrar el funcionamiento de clases y objetos en C++

#include <iostream>
using namespace std;

class Prueba {
  private:
    int enteros;
    float decimales;

  public:
    void InsertarDatosEnteros(int d) {
      enteros = d;
      cout << "Entero: " << enteros;
    }

    float InsertarDatosDecimales() {
      cout << "\nIngrese un decimal: ";
      cin >> decimales;
      return decimales;
    }
};

 int main() {
      Prueba prueba1, prueba2;  // Crear dos objetos de tipo prueba
      float respuesta;  // Almacena la variable retornada por la función

      prueba1.InsertarDatosEnteros(12);
      respuesta = prueba2.InsertarDatosDecimales();

      cout << "Se ingresó " << respuesta;
      return 0;
 }
