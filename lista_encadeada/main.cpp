#include "lista.hpp"
#include <iostream>

void menu() {
    std::cout << "\n--- Lista Encadeada ---\n";
    std::cout << "1. Inserir elemento\n";
    std::cout << "2. Remover elemento\n";
    std::cout << "3. Obter valor\n";
    std::cout << "4. Modificar valor\n";
    std::cout << "5. Imprimir lista\n";
    std::cout << "6. Verificar se está vazia\n";
    std::cout << "7. Obter tamanho\n";
    std::cout << "0. Sair\n";
    std::cout << "Escolha uma opção: ";
}

int main() {
    ListaEncadeada lista;
    int opcao, pos, valor;

    do {
        menu();
        std::cin >> opcao;

        try {
            switch (opcao) {
                case 1:
                    std::cout << "Digite a posição e o valor: ";
                    std::cin >> pos >> valor;
                    lista.inserir(pos, valor);
                    break;
                case 2:
                    std::cout << "Digite a posição para remover: ";
                    std::cin >> pos;
                    lista.remover(pos);
                    break;
                case 3:
                    std::cout << "Digite a posição: ";
                    std::cin >> pos;
                    std::cout << "Valor: " << lista.getValor(pos) << std::endl;
                    break;
                case 4:
                    std::cout << "Digite a posição e o novo valor: ";
                    std::cin >> pos >> valor;
                    lista.setValor(pos, valor);
                    break;
                case 5:
                    std::cout << "Lista: ";
                    lista.imprimir();
                    break;
                case 6:
                    std::cout << (lista.vazia() ? "Lista está vazia." : "Lista não está vazia.") << std::endl;
                    break;
                case 7:
                    std::cout << "Tamanho da lista: " << lista.getTamanho() << std::endl;
                    break;
                case 0:
                    std::cout << "Encerrando...\n";
                    break;
                default:
                    std::cout << "Opção inválida!\n";
            }
        } catch (std::exception &e) {
            std::cerr << "Erro: " << e.what() << std::endl;
        }

    } while (opcao != 0);

    return 0;
}
