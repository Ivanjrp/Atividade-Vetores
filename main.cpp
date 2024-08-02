#include <iostream>
#include "lista.h"

int main() {
    ListaSequencial lista(5);

    std::cout << "Lista criada. Est� vazia? " << (lista.estaVazia() ? "Sim" : "N�o") << std::endl;

    lista.inserir(1, 10);
    lista.inserir(2, 20);
    lista.inserir(3, 30);

    std::cout << "Lista ap�s inser��es: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    lista.modificar(2, 25);
    std::cout << "Lista ap�s modificar a posi��o 2 para 25: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    lista.retirar(3);
    std::cout << "Lista ap�s remover o elemento da posi��o 3: ";
    for (int i = 1; i <= lista.obterTamanho(); i++) {
        std::cout << lista.obter(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
