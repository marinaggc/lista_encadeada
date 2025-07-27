#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP

struct No {
    int valor;
    No* prox;
};

class ListaEncadeada {
private:
    No* inicio;
    int tamanho;

public:
    ListaEncadeada();
    ~ListaEncadeada();

    bool vazia() const;
    int getTamanho() const;

    int getValor(int pos) const;
    void setValor(int pos, int novoValor);

    void inserir(int pos, int valor);
    void remover(int pos);

    void imprimir() const;
};

#endif
