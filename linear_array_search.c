
#include <stdio.h>
#include <conio.h>

#define MAXN 100

void vvodMassiva(int *a,int n){
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
}

void print(int C[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",C[i]);
    }
    printf("\n");
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

int main()
{
    printf("Program start");
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
    
    printf("Введите массив А\n");
    vvodMassiva(A,n);
    printf("Введите массив В\n");
    vvodMassiva(B,m);
    
    int size = search(C,A,B,n,m);

    printf("Массив А\n");
    print(A,n);
    printf("Массив В\n");
    print(B,n);
    printf("itog\n");
    print(C,size);

    return 0;
}
