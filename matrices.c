#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    
    const char *quest[] = {"хозяин/гость","Камилла","Артур","Боб","Мария"};
    int a[4][4] = {{ 0, 2, 0, 3},                         
                    {0, 0, 0, 1},                         
                    {4 , 0, 0,0},
                    {0 , 5, 0,0}};                        

    for (int i=0; i<4; i++){
        if(i == 0){
            for(int k = 0; k < 5; k++) printf("%*s   ",0,quest[k]);
            printf("\n");
        }
        printf("%*s", 0, quest[i+1]);
        for (int j=0; j<4; j++){ 
            if(j == i){
                printf("       -");
            }else{
            printf("%*d",10,a[i][j]);}}             
        printf("\n");                                         
    }                                                         
}     
