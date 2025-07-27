#include "lista.hpp"
#include <iostream>
#include <stdexcept>

ListaEncadeada::ListaEncadeada() : inicio(nullptr), tamanho(0) {}

ListaEncadeada::~ListaEncadeada() {
    while (!vazia()) remover(1);
}

bool ListaEncadeada::vazia() const {
    return tamanho == 0;
}

int ListaEncadeada::getTamanho() const {
    return tamanho;
}

int ListaEncadeada::getValor(int pos) const {
    if (pos < 1 || pos > tamanho) throw std::out_of_range("Posição inválida.");
    No* atual = inicio;
    for (int i = 1; i < pos; i++) atual = atual->prox;
    return atual->valor;
}

void ListaEncadeada::setValor(int pos, int novoValor) {
    if (pos < 1 || pos > tamanho) throw std::out_of_range("Posição inválida.");
    No* atual = inicio;
    for (int i = 1; i < pos; i++) atual = atual->prox;
    atual->valor = novoValor;
}

void ListaEncadeada::inserir(int pos, int valor) {
    if (pos < 1 || pos > tamanho + 1) throw std::out_of_range("Posição inválida.");
    No* novo = new No{valor, nullptr};
    if (pos == 1) {
        novo->prox = inicio;
        inicio = novo;
    } else {
        No* atual = inicio;
        for (int i = 1; i < pos - 1; i++) atual = atual->prox;
        novo->prox = atual->prox;
        atual->prox = novo;
    }
    tamanho++;
}

void ListaEncadeada::remover(int pos) {
    if (pos < 1 || pos > tamanho) throw std::out_of_range("Posição inválida.");
    No* removido;
    if (pos == 1) {
        removido = inicio;
        inicio = inicio->prox;
    } else {
        No* atual = inicio;
        for (int i = 1; i < pos - 1; i++) atual = atual->prox;
        removido = atual->prox;
        atual->prox = removido->prox;
    }
    delete removido;
    tamanho--;
}

void ListaEncadeada::imprimir() const {
    No* atual = inicio;
    while (atual) {
        std::cout << atual->valor << " ";
        atual = atual->prox;
    }
    std::cout << std::endl;
}
