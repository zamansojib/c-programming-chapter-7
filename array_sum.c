#include<stdio.h>

int main(void){

//    int scores[5];
//    scores[0] = 90;
//    scores[1] = 92;
//    scores[2] = 80;
//    scores[3] = 95;
//    scores[4] = 87;
   
//    // array sum
//    int sum = 0,i;
//     for(i = 0; i < 5; i++){
//         sum += scores[i];

//     }
//     printf("sum = %d\n",sum);
    
//     float sums = (float)sum/5;
//     //average 
//     printf("average = %.2f\n",sums);

//     // max scores
//      int max = scores[0];
//      for(i = 0; i < 5 ; i++){
//         if(scores[i] > max){
//             max = scores[i];
//         }
//      }
//      printf("maximum number = %d\n",max);

   
  //Sum of the Array 

  int sum = 0,i,size;
    printf("Enter your expected size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter your Element of the Array:\n");
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum of the array: %d",sum);
    
    int avg = sum/size;
    printf("\nAverage of the array: %d",avg);

    int max = arr[0];
    int min = arr[0];
    for(i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
        
    }
    printf("\nMaximum of the array: %d",max);
    printf("\nMinimum of the array: %d",min);
 

    return 0;
}