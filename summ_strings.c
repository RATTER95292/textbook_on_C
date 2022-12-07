#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

char* concat(char s1[],char s2[]);

int main()
{
    char s1[50];
    char s2[50];
    
    printf("Введите первую строку:  ");
    gets(s1);
    printf("Введите вторую строку:  ");
    gets(s2);
    
    char *rezult = concat(s1, s2);
    printf("%s\n", rezult);
    return 0;
}

	
char* concat(char s1[],char s2[]){
    
    int l1 = strlen(s1);
    int l2 = strlen(s2);                      

    char *result = malloc(l1 + l2 + 1);

    memcpy(result, s1, l1);
    memcpy(result + l1, s2, l2 + 1);    

    return result;
    
}
