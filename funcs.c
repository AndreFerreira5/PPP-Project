#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> //for Linux
#include <Windows.h> //for Windows

#define MAXCHAR 1000



void error_op_fl(){
    printf("Ocorreu um erro no acesso a base de dados!");
    sleep(5);
}

void back_main_menu(){

    printf("\n\n\n\n\nA voltar para o menu principal\n\t[");
    for(int temp_bmm = 0; temp_bmm < 10; temp_bmm++){
        sleep(1);
        printf("#");
    }

    sleep(1);
    printf("]");
    sleep(2);
    printf("\n\n\n\n");
    main();
}

void introduzir(){

    printf("\n\n------- Novo Aluno -------\n\n");
    printf("Introduza o nome do aluno: ");
    //scanf("%s", );


}

void eliminar(){
    FILE *fp;
    char str[MAXCHAR];

    fp = fopen("active_students.csv","r");

    if(fp == NULL) {error_op_fl();}
    else{
        while( fgets(str, MAXCHAR, fp) != NULL){
            printf("%s", str);
        }
    }

    fclose(fp);
    back_main_menu();
}

void listar(){

    printf("eheheh");

}

void listar_saldo(){

    printf("eheheh");

}

void aluno_info(){

    printf("eheheh");

}

void efetuar_despesa(){

    printf("eheheh");

}

void carregar(){

    printf("eheheh");

}





