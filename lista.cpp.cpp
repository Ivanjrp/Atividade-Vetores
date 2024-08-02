#include "lista.h"
#include <stdexcept>

ListaSequencial::ListaSequencial(int tamanho) : tamanho_maximo(tamanho) {}

bool ListaSequencial::estaVazia() const {
    return dados.empty();
}

bool ListaSequencial::estaCheia() const {
    return dados.size() == tamanho_maximo;
}

int ListaSequencial::obterTamanho() const {
    return dados.size();
}

int ListaSequencial::obter(int posicao) const {
    if (posicao < 1 || posicao > obterTamanho()) {
        throw std::out_of_range("Posição inválida");
    }
    return dados[posicao - 1];
}

void ListaSequencial::modificar(int posicao, int valor) {
    if (posicao < 1 || posicao > obterTamanho()) {
        throw std::out_of_range("Posição inválida");
    }
    dados[posicao - 1] = valor;
}

void ListaSequencial::inserir(int posicao, int valor) {
    if (estaCheia()) {
        throw std::overflow_error("Lista está cheia");
    }
    if (posicao < 1 || posicao > obterTamanho() + 1) {
        throw std::out_of_range("Posição inválida");
    }
    dados.insert(dados.begin() + (posicao - 1), valor);
}

void ListaSequencial::retirar(int posicao) {
    if (posicao < 1 || posicao > obterTamanho()) {
        throw std::out_of_range("Posição inválida");
    }
    dados.erase(dados.begin() + (posicao - 1));
}
