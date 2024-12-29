#include<stdio.h>
int sum (int a, int b)
{
printf("nhap so dau tien : ");
scanf("%d",&a);
printf("nhap so thu hai : ");
scanf("%d",&b);
return a + b;
}
int main ()
{
    int c,d;
    int total = sum(c,d);
    printf("tong cua 2 so la : %d",total);
    return 0;
}
