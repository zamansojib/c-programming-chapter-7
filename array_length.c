#include<stdio.h>

int main(void){

    int scores[] = {80,82,83,90,95,64,82,99};

       int length = sizeof(scores) / sizeof(scores[0]);
       printf("size of array length = %d\n",length);
    // printf("size of scores: %d\n",sizeof(scores));
    // printf("size of elements: %d\n",sizeof(scores[0]));
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("%d",N);

    return 0;
}