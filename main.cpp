#include <iostream>
#include "Matriz.h"
#include "Matriz.cpp"

using namespace std;

int main(){
    Matriz Y;
    Matriz X(3,1), A(3,3), C(3,3);
    Matriz W = C;
    Matriz Z(A);
    int numeroLinhas = A.ValorLinha();
    int numeroColunas = A.ValorColuna();
    C.MatrizIdentidade(); // inicializa Y com a matriz identidade
    //A(2,1)=10; // altera o valor de uma posição de A
    A.AlteraValor();
    //C.ModificaElementos0(); // modifica todos os elementos de Y para o valor zero
    C=A+A; // Soma
    cout << C << endl;
    //C-=A; // Subtração
    cout << C << endl;
    A=C-A; // Subtração
    cout << A << endl;
    A+=A; // Soma
    cout << A << endl;
    A=~C; // A é igual a transposta de C
    cout << A << endl;
    X.ModificaElementos1(); // modifica todos os elementos de X com 1s
    //X*=2; // multiplicação por uma constante
    C=A*X; // multiplicação de matrizes
    //C*=X; // multiplicação de matrizes
    if (A == C) // verifica a igualdade entre A e C
    //if (X != Y) // verifica a desigualdade entre A e C
    cout << C << endl; // Impressão de matrizes
    cin >> Y; // leitura de dados para dentro da matriz Y

    return 0;
}
