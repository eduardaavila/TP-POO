#include "Matriz.h"

Matriz::Matriz(){
    _numero_de_linhas = 0;
    _numero_de_colunas = 0;
}

Matriz::Matriz(unsigned int linhas, unsigned int colunas, const double &valor = 0){
    int i, j;
    while(linhas=0 || colunas=0){
        cout << "Favor inserir valor válido" << endl;
        cin >> linhas;
        cin >> colunas;
    }
    _numero_de_linhas = linhas;
    _numero_de_colunas = colunas;
    for(i=0; i < _numero_de_linhas; i++){
        for(j=0; j < _numero_de_colunas; j++){
            M[i][j] = valor;
        }
    }
}

Matriz::Matriz(const Matriz &m){
    this->_numero_de_linhas = m._numero_de_linhas;
    this->_numero_de_colunas = m._numero_de_colunas;
    this->M = new int*[_numero_de_linhas];
    for (unsigned int i = 0; i < _numero_de_linhas; ++i)
        this->M[i] = new int[_numero_de_colunas];
    for(unsigned int i = 0; i < _numero_de_linhas; i++)
        for(unsigned int j = 0; j < _numero_de_colunas; j++)
            this->M[i][j] = m[i][j];
}

Matriz::~Matriz(){
    //destrui a matriz
}
