
#include <stdio.h>

#define S(x) (x*x)

#define MAX(x,y) ((x) > (y)) ? (x) : (y)

int main(int argc, char *argv[])
{
  int a,b,c,max;
  
 
  printf("Введите сторонц квадрата:  ");
  scanf("%d",&a);
  int s = S(a);
  printf("Площадь квадрата равна:  ");
  printf("%d\n", s);

  //
  printf("Введите первое число:  ");
  scanf("%d\n", &a);
  printf("Введите второе число:  ");
  scanf("%d\n", &b);
  max = MAX(a,b);
  printf("Максимальное число: %d",max);
  printf("Введите третье число:  ");
  scanf("%d\n",&c);
  max = MAX(max,c);
  printf("Максимальное число: %d",max);
  
}
