#include<stdio.h>

int main(void){

//    int students[2][3][2] =
//    {
//     {{5,6},{4,5},{10,11}},
//     {{10,15},{20,25},{12,16}},
//    };

//    int i,j,k;
//    for(i = 0 ; i < 2 ; i++){
//     for(j = 0; j < 3 ; j++){
//         for(k = 0 ; k < 2 ; k++){
//             printf("%d ", students[i][j][k]);
//         }
//         printf("\n");
//     }
//    }


   // C Program to store and print 12 values entered by the user
  // int i,j,k;
  // int storeValues[2][3][2];
  // printf("enter 12 values: ");
  // for(i = 0; i < 2; i++){
  //   for(j = 0; j < 3; j++){
  //     for(k = 0; k < 2; k++){
  //       scanf("%d",&storeValues[i][j][k]);
  //     }
  //   }
  // }
  //   printf("\nStored values: \n");
  //   for(i = 0; i < 2; i++){
  //     for(j = 0; j < 3; j++){
  //       for(k = 0; k < 2; k++){
  //        printf("test: [%d][%d][%d] = %d\t",i , j,k,storeValues[i][j][k]);
  //       }
  //       printf("\n");
  //     }
  //   }

//   int array3D[2][3][4];
//   int value = 1;
//   for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//       for(int k = 0 ; k < 4 ; k++){
//         array3D[i][j][k] = value++;
//       }
//     }
//   }

//   for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//       for(int k = 0 ; k < 4 ; k++){
//         printf("%d\t",array3D[i][j][k]);
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }

//   // change elements in the 3D array
//   array3D[1][2][3] = 100;


//   for(int i = 0 ; i < 2 ; i++){
//     for(int j = 0 ; j < 3 ; j++){
//       for(int k = 0 ; k < 4 ; k++){
//         printf("%d\t",array3D[i][j][k]);
//       }
//       printf("\n");
//     }
//     printf("\n");
//   }


// Scholarhut 2D Array example
int marks[2][3];

 // Prompt user to enter grades
 for(int i = 0 ; i < 2 ; i++){
  printf("Enter the marks for student %d:\n",i+1);
  for(int j = 0 ; j < 3 ; j++){
    printf("subject %d: ",j+1);
    scanf("%d",&marks[i][j]);
  }
 }

 // Display entered grades
 printf("The marks entered are: \n");

 for(int i = 0 ; i < 2 ; i++){
    
    for(int j = 0 ; j < 3 ; j++){
      printf("Student: %d: ",i+1);
      printf("Subject %d: %d\n",j+1,marks[i][j]);
    }
   }


    return 0;
}