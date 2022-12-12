#include <stdio.h>

#define S(x) (x*x)

#define MAX(x,y) ((x) > (y)) ? (x) : (y)

int main(int argc, char *argv[])
{
  int a,b,c,max;
  
  // Нахождение площади квадрата
  printf("Введите сторону квадрата:  ");
  scanf("%d",&a);
  int s = S(a);
  printf("Площадь квадрата равна:  ");
  printf("%d\n", s);

  // Нахождение максимального числа и 3 чисел
  printf("Введите первое число:  ");
  scanf("%d", &a);
  printf("Введите второе число:  ");
  scanf("%d", &b);
  max = MAX(a,b);
  printf("Введите третье число:  ");
  scanf("%d",&c);
  max = MAX(max,c);
  printf("Максимальное число: %d",max);
  
}
