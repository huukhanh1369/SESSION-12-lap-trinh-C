#include<stdio.h>
void print (int array[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        printf("array[%d] : %d \n",i, array[i]);
    }
    printf("\n");
}
int main ()
{
    int a[]={2,4,6,8,9,7,5,3,1};
    int size = sizeof(a) / sizeof(int);
    print(a, size);
    return 0;
}