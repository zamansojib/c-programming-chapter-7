#include<stdio.h>

int main(void){

    int size = 5;
    int scores[size];
    int i,sum;
    printf("input: \n");
    for(i = 0; i < size; i++){
        scanf("%d",&scores[i]);
    }

    sum = 0;
    int max = scores[0];
   for(i = 0; i < size; i++){
        sum += scores[i];
   }
   printf("summation: %d\n",sum);
   printf("average: %d\n",sum/size);

   for(i = 0; i < size; i++){
        if(scores[i] > max){
            max = scores[i];
        }
   }
   printf("max number : %d",max);

    return 0;
}