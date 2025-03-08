#include<stdio.h>

int main(void){

     
      int roll[]= {10,15,45,25,30,45,90,58,45,87,32,20};
      int size = sizeof(roll)/sizeof(roll[0]);
      int search_key,i;
      int is_found = -1;

      //user input
      printf("Enter your roll number: ");
      scanf("%d",&search_key);
      
      //search for the roll number in the array
      for(i = 0; i < size; i++){
        if(search_key == roll[i]){
            is_found = i;
            break;
        }
      }

      if(is_found == -1){
          printf("Sorry! you are not selected.\n");
      }else{
         printf("Congratulation you are selected and your merit position is: %d\n",is_found);
      }
      


    return 0;
}