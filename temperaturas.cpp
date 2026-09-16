#include <iostream>

using namespace std;

int main() {
// declarando as variaveis separadas igual a gente aprende no comeco
double c;
double f;
double k;

// pedindo o valor pro usuario
cout << "Digite os graus em Celsius: ";
cin >> c;

// calculando fahrenheit e kelvin
f = c * 1.8 + 32;
k = c + 273.15;

// mostrando o resultado na tela
cout << "Fahrenheit: " << f << endl;
cout << "Kelvin: " << k << endl;

return 0; }
