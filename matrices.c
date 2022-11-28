#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 4

void importMatrix(int matrix[ROWS][COLS]);

void main(){

    const char *quest[] = {"хозяин/гость","Камилла","Артур  ","Боб    ","Мария  "};
    int a[4][4] = {{ 0, 2, 0, 3},                         
                    {0, 0, 0, 1},                         
                    {4 , 0, 0,0},
                    {0 , 5, 0,0}};                        

    importMatrix(a);
    
    for (int i=0; i<4; i++){
        if(i == 0){
            for(int k = 0; k < 5; k++) printf(" %*s   ",0,quest[k]);
            printf("\n");
        }
        printf("  %s", quest[i+1]);
        for (int j=0; j<4; j++){ 
            if(j == i){
                printf("          -");
            }else{
            printf(" %*d",10,a[i][j]);}}             
        printf("\n");                                         
    }
    
    
}

void importMatrix(int matrix[ROWS][COLS]){
    const char *quest1[] = {"Камилла","Артур","Боб","Мария"};
    const char *quest2[] = {"Камиллы","Артура","Боба","Марии"};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i != j){ 
                printf("Сколько раз %s был в гостях у %s ?   ", quest1[i], quest2[j]);
                scanf("%d",&matrix[i][j]);
            }else{
                matrix[i][j] = 0;
            }
        }
    }
}
