#include<stdio.h>
int findMax(int array[], int size) 
{
    int max = array[0];  
    for (int i = 1; i < size; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];  
        }
    }
    return max;  
}

int main() 
{
    int a[] = {1,3,5,7,9,8,6,5,4,2}; 
    int size = sizeof(a) / sizeof(int); 
    int maxValue = findMax(a, size); 
    printf("So lon nhat trong mang la : %d", maxValue);  
    return 0;
}