/**
 Двоичный поиск в массиве
**/
#include <stdio.h>
#include <conio.h>

#define MAXN 100

// функция ввода массива
void enterArray(int array[],int size);
// функция вывода массива
void printArray(int array[],int size);
// функция двоичного поиска
int binSearch(int array[],int size,int value);
/* 
* функция обработки массивов array1[] и array2[], формирование массива array3[]
* возвращает число элементов в сформированном массиве
*/
int sortArray(int array[], int array1[], int array2[], int size, int size2);

int main(){
    
    int A[MAXN];
    int B[MAXN];
    int C[MAXN];
    int n, m;
    
    printf("Enter n (1-%d):", MAXN);
    scanf("%d",&n);
    printf("Enter m (1-%d):", MAXN);
    scanf("%d",&m);
    
    if((n<1 || n>MAXN) || (m<1 || m>MAXN)){
        printf("Error! a<1 or b>%d",MAXN);
        getch();
        return 1;
    }
    
    printf("Enter an array А\n");
    enterArray(A,n);
    printf("Enter an array В\n");
    enterArray(B,m);
    
    int key = sortArray(A, B, C , n, m);
    
    printf("Array А\n");
    printArray(A,n);
    printf("Array В\n");
    printArray(B,m);
    printf("Itog array\n");
    printArray(C,key);
    
    return 0;
}

void enterArray(int array[],int size){
    for(int i=0; i<size; i++)
    {
        printf("Enter element[%d]=",i+1);
        scanf("%d",&array[i]);
    }
}

int binSearch(int array[],int size,int key){
    for(int i=0; i <= size; i++){
        if(array[i] == key){
            return 1;
        }else{
            return 0;
        }
    }
}

int sortArray(int array[], int array1[], int array2[], int size, int size2){
    int i,j,c,count = 0;
    int k=0;
    for(i=0; i <= size; i++)
    {
        if ((binSearch(array1, size2, array[i]) == 1)){
            array2[k] = array[i];
            k++;
        }
    }
    return k;
}

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
