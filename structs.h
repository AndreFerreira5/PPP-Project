//
// Created by G512L on 4/5/2022.
//

#ifndef PROJETOPPP_STRUCTS_H
#define PROJETOPPP_STRUCTS_H

typedef struct{

    int dia, mes, ano;

}Data;

typedef struct{

    int valor;
    char desc[100];
    Data data;

}Despesas;

typedef struct{
    char nome[40];
    Data ano_nasc;
    int ano;
    char turma[1];
    int num;
    float saldo;
    Despesas despesas;

}Aluno;

#endif //PROJETOPPP_STRUCTS_H


