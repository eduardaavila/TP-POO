#include "Matriz.h"

using namespace std;

Matriz::Matriz(){
    _numero_de_linhas = 0;
    _numero_de_colunas = 0;
}

Matriz::Matriz(unsigned int linhas, unsigned int colunas, const double &valor){
    while(linhas==0 || colunas==0){
        cout << "Favor inserir valor válido" << endl;
        cin >> linhas;
        cin >> colunas;
    }
    this->_numero_de_linhas = linhas;
    this->_numero_de_colunas = colunas;
    for(unsigned int i=0; i < _numero_de_linhas; i++){
        for(unsigned int j=0; j < _numero_de_colunas; j++){
            M[i][j] = valor;
        }
    }
}

Matriz::Matriz(const Matriz &m){
    this->_numero_de_linhas = m._numero_de_linhas;
    this->_numero_de_colunas = m._numero_de_colunas;
    for (unsigned int i = 0; i < _numero_de_linhas; ++i)
        this->M[i] = new int[_numero_de_colunas];
    for(unsigned int i = 0; i < _numero_de_linhas; i++)
        for(unsigned int j = 0; j < _numero_de_colunas; j++)
            this->M[i][j] = m.M[i][j];
}

Matriz::~Matriz(){
    //destrui a matriz
}

double Matriz::MatrizIdentidade(){
    for(unsigned int i = 0; i < this->_numero_de_linhas; i++){
        for(unsigned int j = 0; j < this->_numero_de_colunas; j++){
            if (_numero_de_linhas==_numero_de_colunas)
                this->M[i][j] = 1;
            else
                this->M[i][j] = 0;
        }
    }
}
