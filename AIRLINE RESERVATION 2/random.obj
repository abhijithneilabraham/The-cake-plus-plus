#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *arr, size_t n)
{
    if (n > 1) 
    {
        size_t i;
        srand(time(NULL));
        for (i = 0; i < n - 1; i++) 
        {
          size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = arr[j];
          arr[j] = arr[i];
          arr[i] = t;
        }
    }
}

int main()
{
    int i;
    int arr[10];
    for (i=0; i<10; i++){
        arr[i] = i;
    }
    shuffle(arr, 10);
    for (i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
}