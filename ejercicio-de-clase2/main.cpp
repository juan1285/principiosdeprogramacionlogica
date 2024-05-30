#include <iostream>

int main() {
   int numero;

      // Solicita al usuario que ingrese un número
      std::cout << "Ingresa un número: ";
      std::cin >> numero;

      // Determina si el número es par o impar
      if (numero % 2 == 0) {
          std::cout << "El número " << numero << " es par." << std::endl;
      } else {
          std::cout << "El número " << numero << " es impar." << std::endl;
      }

      return 0;
  }


 