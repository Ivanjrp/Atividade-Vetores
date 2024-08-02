#include "lista.h"
#include <cassert>
#include <iostream>

void rodarTestes() {
    ListaSequencial lista(3);

    assert(lista.estaVazia());
    assert(!lista.estaCheia());

    lista.inserir(1, 10);
    assert(lista.obterTamanho() == 1);
    assert(lista.obter(1) == 10);

    lista.inserir(2, 20);
    lista.inserir(3, 30);
    assert(lista.obterTamanho() == 3);
    assert(lista.estaCheia());

    lista.modificar(2, 25);
    assert(lista.obter(2) == 25);

    lista.retirar(2);
    assert(lista.obterTamanho() == 2);
    assert(lista.obter(2) == 30);

    std::cout << "Todos os testes passaram!" << std::endl;
}

int main() {
    rodarTestes();
    return 0;
}
