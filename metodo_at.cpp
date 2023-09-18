#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numeros{1,2,3,4,5};

    vector<char> letras{'a','b','c','d','e'};
    // el metodo at() devuelve un referencia al elemento en la posicion indicada
    // y hace una comprobacion de que la posicion sea valida
    // el resultado es el mismo que numeros[3] pero este no hace la comprobacion
    cout << numeros.at(3) << endl;
    // si la posicion es invalida se lanza un error
}
