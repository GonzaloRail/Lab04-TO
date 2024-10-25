#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v {5, 2, 3, 7, 1, 0, 14, 20};

    // Lambda para sumar 3 y mostrar cada valor
    std::for_each(v.begin(), v.end(), [](int valor) {
        int resultado = valor + 3;
        std::cout << resultado << std::endl;
    });

    // Lambda que suma 3 a un valor individual
    auto s = [](int valor) {
        return valor + 3;
    };

    int u = 5;
    std::cout << s(u) << std::endl;

    return 0;
}
