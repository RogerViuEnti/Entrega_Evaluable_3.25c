#include <iostream>

int main() {
	double x;
	int n;
	double valortotal = 1;
	double valorx = 1;
	int factorial = 1;
	std::cout << "Introduce el valor de x: ";
	std::cin >> x;
	std::cout << "Introduce el numero de terminos (precision): ";
	std::cin >> n;

	// Bucle para sumar n veces
	for (int i = 1; i <= n; i++) {
	
		factorial *= i; // Calculamos el factorial de cada divisor
		valorx = valorx * (x / i);
		valortotal = valortotal + valorx;       // Acumulamos el resultado
	}
	std::cout << "El valor estimado de e^" << x << " es: " << valortotal << std::endl;
	return 0;
}