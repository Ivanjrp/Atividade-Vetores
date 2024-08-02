#ifndef LISTA_H
#define LISTA_H

#include <vector>

class ListaSequencial {
private:
    std::vector<int> dados;
    int tamanho_maximo;

public:
    ListaSequencial(int tamanho); // Criação da lista vazia com tamanho máximo
    bool estaVazia() const; // Verificar se a lista está vazia
    bool estaCheia() const; // Verificar se a lista está cheia
    int obterTamanho() const; // Obter o tamanho da lista
    int obter(int posicao) const; // Obter o valor de uma posição
    void modificar(int posicao, int valor); // Modificar o valor de uma posição
    void inserir(int posicao, int valor); // Inserir um elemento em uma posição
    void retirar(int posicao); // Retirar um elemento de uma posição
};

#endif
