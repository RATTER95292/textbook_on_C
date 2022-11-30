#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 4

//Функция для ввода матрицы
void importMatrix(int matrix[ROWS][COLS]);

//Вывод матрицы
void printMatrix(int matrix[ROWS][COLS], char quest1[4][30], char quest2[5][30]);

//Функция для подсяета количество гостей
int maxOwner(int matrix[ROWS][ROWS]);

//Функция для подсяета количество гостей
int maxQuest(int matrix[ROWS][ROWS]);

void main(){
    
    char quest2[4][30] = {"Камилла","Артур  ","Боб    ","Мария  "};
    char quest1[5][30] = {"хозяин/гость","Камилла ","Артур","Боб","Мария"};
    int a[4][4];                     

    importMatrix(a);

    printMatrix(a, quest1, quest2);

    printf("\nБольше всего гостей принял(а) %s\n", quest1[maxOwner(a)+1]);
    printf("Больше всего в гостях был(а) %s\n",quest1[maxQuest(a)+1]);
    
}

void importMatrix(int matrix[ROWS][COLS]){
    const char *quest1[] = {"Камилла","Артур","Боб","Мария"};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j){ 
                printf("Сколько раз %s был(а) в гостях у %s ?   ", quest1[i], quest1[j]);
                scanf("%d",&matrix[i][j]);
            }else{
                matrix[i][j] = 0;
            }
        }
    }
    printf("\n");
}
void printMatrix(int matrix[ROWS][COLS], char quest1[4][30], char quest2[5][30]){
    for (int i=0; i<4; i++){
        if(i == 0){
            for(int k = 0; k < 5; k++) printf(" %-15s",quest1[k]);
            printf("\n");
        }
        printf(" %s", quest2[i]);
        for (int j=0; j<4; j++){ 
            if(j == i){
                printf("         -");
            }else{
            printf("%10d",matrix[i][j]);}}             
        printf("\n");                                         
    }
}
int maxQuest(int matrix[ROWS][ROWS]){
    int q =0;
    int q1 = 0;
    int i,max = 0;
    for(i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j){ 
                    max += matrix[j][i];
                }
        }
        if(max > q){
            q = max;
            q1 = i;
        }
        max = 0;
    }
    
    return q1;
}

int maxOwner(int matrix[ROWS][ROWS]){
    int o =0;
    int o1 = 0;
    int i,max = 0;
    for(i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j){ 
                    max += matrix[i][j];
                }
        }
        if(max > o){
            o = max;
            o1 = i;
        }
        max = 0;
    }
    
    return o1;
}
