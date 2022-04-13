#include <stdio.h>


int main() {
    int n;
    printf("\n\n|-----------------------------------------------------------------------|\n|\t\t\tSISTEMA DO BAR\t\t\t\t\t|\n|\t\t\t\t\t\t\t\t\t|\n| 1- Introduzir dados de um novo aluno\t\t\t\t\t|\n| 2- Eliminar um aluno existente\t\t\t\t\t|\n| 3- Listar todos os alunos por ordem alfabetica\t\t\t|\n| 4- Listar os alunos com saldo abaixo de um determinado valor\t\t|\n| 5- Apresentar toda a informacao de um determinado aluno\t\t|\n| 6- Efetuar uma despesa por um determinado aluno\t\t\t|\n| 7- Carregar a conta de um aluno\t\t\t\t\t|\n|-----------------------------------------------------------------------|\n\n--> ");
    scanf("%d", &n);

    switch (n) {
        case 1: introduzir();
                break;
        case 2: eliminar();
                break;
        case 3: listar();
                break;
        case 4: listar_saldo();
                break;
        case 5: aluno_info();
                break;
        case 6: efetuar_despesa();
                break;
        case 7: carregar();
                break;
        default: printf("Introduza uma opcao valida!");
                break;
    }

    return 0;
}