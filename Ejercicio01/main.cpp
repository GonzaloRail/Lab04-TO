#include <iostream>
#include <vector>
#include <algorithm> // Para count_if
#include <cstdlib>   // Para rand() y srand()
#include <ctime>     // Para time()

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla para números aleatorios

    vector<int> numeros;

    // Generamos 15 números aleatorios entre 1 y 100
    for(int i = 0; i < 15; ++i) {
        numeros.push_back(rand() % 100 + 1);
    }
    cout<<"Arreglo de numeros"<<"\n";
    for(int n: numeros){
        cout << n<<"-";
    };
    cout<<"\n";

    // Contamos los números impares menores de 20
    int cuenta = count_if(numeros.begin(), numeros.end(), [](int n) {
        return n < 20 && n % 2 != 0; // Impares y menores de 20
    });

    // Mostramos el resultado
    cout << "Cantidad de numeros impares y menores de 20: " << cuenta << endl;

    return 0;
}
