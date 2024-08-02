#include <iostream>
#include "lista.h"

int main() {
    ListaSequencial lista(5);

    std::cout << "Lista criada. Está vazia? " << (lista.estaVazia() ? "Sim" : "Não") << std::endl;

    lista.inserir(1, 10);
    lista.inserir(2, 20);
    lista.inserir(3, 30);

    std::cout << "Lista após inserções: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    lista.modificar(2, 25);
    std::cout << "Lista após modificar a posição 2 para 25: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    lista.retirar(3);
    std::cout << "Lista após remover o elemento da posição 3: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
