#include <iostream>

int main() {
    // Declara dos variables para poner los números
    int numero1, numero2;

    // Solicita al usuario que ingrese el primer número
    std::cout << "Ingresa el primer número: ";
    std::cin >> numero1;

    // Solicita al usuario que ingrese el segundo número
    std::cout << "Ingresa el segundo número: ";
    std::cin >> numero2;

    // Suma los dos números e imprime el resultado
    int suma = numero1 + numero2;
    std::cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma << std::endl;

    return 0;
}