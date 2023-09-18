#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numeros{1,2,3,4,5};

    vector<char> letras{'a','b','c','d','e'}; 
    //introducimos el numero 6 al final del vector
    numeros.push_back(6);
    
    cout << numeros.at(5) << endl;

    for(int i = 0; i < numeros.size(); i++)
    {
        cout << numeros.at(i) << endl;
    }
}
