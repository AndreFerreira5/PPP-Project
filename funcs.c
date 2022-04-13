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

    //printf("\n\n\n\n\nA voltar para o menu principal\n\t[");

    printf("\n\nPressione ENTER para voltar ao menu principal");
    getch(); //Wait for ENTER key

    printf("[");
    for(int temp_bmm = 0; temp_bmm < 45; temp_bmm++){
        usleep(50000); //Sleep for 50000 microseconds
        printf("#");
    }

    usleep(50000);
    printf("]");
    sleep(1);
    system("cls||clear"); //Clear console (works in windows and linux)
    main(); //Back to main menu
}


void introduzir(){

    printf("\n\n------- Novo Aluno -------\n\n");
    printf("Introduza o nome do aluno: ");
    //scanf("%s", );


}

void eliminar(){
    FILE *fp, *fp_temp;
    char str[MAXCHAR], line_str[MAXCHAR];
    char name[100], turma[2], info[10][100], file_name[] = {"C://Users//G512L//CLionProjects//ProjetoPPP//active_students.csv"}, temp_file_name[] = {"C://Users//G512L//CLionProjects//ProjetoPPP//temp.csv"};
    //NAO ESQUECER DE USAR O MALLOC
    int ano, num, ctrl;



    fp = fopen(file_name,"r");
    fp_temp = fopen(temp_file_name, "w");

    printf("%s", fp);

    char *token;

    if(fp == NULL) {error_op_fl();} //throw error if file is null
    else{

        printf("Introduza as informacoes do aluno que deseja eliminar do sistema: ");
        printf("\nNome: ");
        scanf("%s", &name);
        printf("Ano: ");
        scanf("%d", &ano);
        printf("Turma: ");
        scanf("%s", &turma);
        printf("Numero de turma: ");
        scanf("%d", &num);


        while( fgets(str, MAXCHAR, fp) != NULL){ //do until it reaches the end of the file
            strcpy(line_str, str); //copy current line to line_str
            token = strtok(str, ","); //assign to token the words until the first ","

            ctrl = 0;

            while(token != NULL){//do until it reaches the end of the line
                strcpy(info[ctrl], token);//copy the student's info to the info array
                token = strtok(NULL, ","); //get the following words delimited by ","
                ctrl++;

            }
            if((strcmp(info[0], name) == 0) && (atoi(info[2]) == ano) && (strcmp(info[3], turma) == 0) && (atoi(info[4]) == num)){} //if the student's info is correct then the student won't be copied to the new file, therefore it will be removed
            else{
                fprintf(fp_temp, "%s", line_str); //if the student's info is not correct then it's not the correct student to eliminate, so the student will be copied to the new file, therefore it remains untouched
            }
        }
    }

    system("cls||clear"); //clear screen for asthetics
    printf("\n\nAluno eliminado do sistema com sucesso!");

    fclose(fp);
    fclose(fp_temp);
    remove(file_name); //remove original file
    rename(temp_file_name, file_name); //rename new file to the old file name
    back_main_menu(); //go back to main menu
}

void listar(){

    printf("eheheh");

}

void listar_saldo(){

    printf("eheheh");

}

void aluno_info(){

    char name[100];

    printf("Introduza o nome do aluno sem espacos(ex: AntonioMoreira): ");
    scanf("%s", name);


}

void efetuar_despesa(){

    printf("eheheh");

}

void carregar(){

    printf("eheheh");

}





