#include<stdio.h>
int factorial(int n) 
{
    if (n < 0) 
    {
        return -1; 
    }
    int result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result = result *i; 
    }
    return result;
}

int main() 
{
    int m;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &m);
    
    int result = factorial(m);
    
    if (result == -1) 
    {
        printf("Giai thua khong ton tai cho so am\n");
    } 
    else 
    {
        printf("Giai thua cua %d la : %d", m, result);
    }
    return 0;
}
