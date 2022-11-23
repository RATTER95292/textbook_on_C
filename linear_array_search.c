
#include <stdio.h>
#include <conio.h>

#define MAXN 100

//функция для ввода массив
void vvodMassiva(int *a,int n);
//функция для вывода массива
void print(int C[], int size);
//функция для поиска повторяющихся элементов массива
int find_in_massive(int A[],int m, int a, int d);
//функция поиск элемнтов массива в другом массива изапись их в другом массиве
int search(int C[], int A[], int B[], int n, int m );

int main()
{
    int A[MAXN];
    int B[MAXN];
    int C[MAXN];
    int n,m;

    printf("Enter n and m (1-%d) ",MAXN);
    scanf("%d",&n);
    scanf("%d",&m);
    if((n<1 || n>MAXN) || (m<1 || m>MAXN))
    {
        printf("Error! a<1 or b>%d",MAXN);
        getch();
        return 1;
    }
    
    printf("Enter an array А\n");
    vvodMassiva(A,n);
    printf("Enter an array В\n");
    vvodMassiva(B,m);
    
    int size = search(C,A,B,n,m);

    printf("Array А\n");
    print(A,n);
    printf("Array В\n");
    print(B,n);
    printf("Itog array\n");
    print(C,size);

    return 0;
}

int search(int C[], int A[], int B[], int n, int m ){
    
    int i,j,c,count = 0;
    int k=0;
    for(i=0; i<m; i++)
    {
        if ((find_in_massive(A, m, B[i], 3) == 1) && (find_in_massive(C,k, B[i], 1) == 0)){
            C[k] = B[i];
            k++;
        }
    }
    return k;
}

int find_in_massive(int A[],int m, int a, int d){
    int i;
    int count = 0;
    for (i =0;i<m;i++){
        if(a == A[i]){
            count++;
        }
    } 
    if(count == d) {
    return 1;
    }else{ 
    return 0;
    }
}

void print(int C[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",C[i]);
    }
    printf("\n");
}

void vvodMassiva(int *a,int n){
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
}

