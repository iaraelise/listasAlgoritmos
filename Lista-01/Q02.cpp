#include <iostream>

int perimetroRetangulo (int base, int altura) {
    int perimetro = 2 * (base + altura);

    return perimetro;
}

int main() {

    int l1;
    int l2;

    std::cout << "Digite os valores de L1 e L2:" << std::endl;
    std::cin >> l1;
    std::cin >> l2;

    int resultado = perimetroRetangulo(l1, l2);
    std::cout << resultado << std::endl;

    return 0;



}






