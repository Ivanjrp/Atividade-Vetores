#ifndef LISTA_H
#define LISTA_H

#include <vector>

class ListaSequencial {
private:
    std::vector<int> dados;
    int tamanho_maximo;

public:
    ListaSequencial(int tamanho); // Cria��o da lista vazia com tamanho m�ximo
    bool estaVazia() const; // Verificar se a lista est� vazia
    bool estaCheia() const; // Verificar se a lista est� cheia
    int obterTamanho() const; // Obter o tamanho da lista
    int obter(int posicao) const; // Obter o valor de uma posi��o
    void modificar(int posicao, int valor); // Modificar o valor de uma posi��o
    void inserir(int posicao, int valor); // Inserir um elemento em uma posi��o
    void retirar(int posicao); // Retirar um elemento de uma posi��o
};

#endif
