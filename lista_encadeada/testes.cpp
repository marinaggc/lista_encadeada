#include "lista.hpp"
#include <iostream>

int main() {
    ListaEncadeada lista;

    std::cout << "Inserindo elementos: ";
    lista.inserir(1, 10);
    lista.inserir(2, 20);
    lista.inserir(2, 15);
    lista.imprimir();  // Esperado: 10 15 20

    std::cout << "Tamanho: " << lista.getTamanho() << "\n";  // 3

    std::cout << "Valor na posição 2: " << lista.getValor(2) << "\n"; // 15
    lista.setValor(2, 25);
    std::cout << "Novo valor na posição 2: " << lista.getValor(2) << "\n"; // 25

    lista.remover(1);
    std::cout << "Após remover posição 1: ";
    lista.imprimir();  // 25 20

    return 0;
}
