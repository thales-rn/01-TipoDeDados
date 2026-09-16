#include <iostream>
#include <climits>

using namespace std;

int main() {
  
// Exibindo os valores máximos e mínimos de int e short
cout << "int max = " << INT_MAX << "\n";
cout << "int min = " << INT_MIN << "\n";
cout << "short max = " << SHRT_MAX << "\n";

return 0; }

/* Pergunta: O que acontece quando você soma INT_MAX + 1?
Resposta: Quando somamos INT_MAX + 1, ocorre um estouro de 
capacidade (overflow). O número passa do limite suportado, 
"dá a volta" e se transforma no menor número negativo possível (INT_MIN). */

