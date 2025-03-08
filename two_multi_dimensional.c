#include<stdio.h>
int main(){

//    int students[3][3] ={
     
//     {1,80,95},
//     {2,70,90},
//     {3,85,95}

//    };
   // students[0] = first element {2,3,5}

   

//    printf("Roll: %d\nBangla: %d\nEnglish: %d",students[1][0],students[1][1],students[1][2]);
//    printf("\n");
//    printf("Roll: %d\nBangla: %d\nEnglish: %d",students[2][0],students[2][1],students[2][2]);

//    change in a two dimensional Array
// students[2][1] = 98;
// printf("%d",students[2][1]);

   //traverse a multidimensional Array

    // int i,j;
    // printf("Roll\tBangla\tEnglish\n");
    // for(i = 0; i < 3; i++){

    //      for(j = 0; j < 3; j++){
           
    //         printf("%d\t", students[i][j]);

    //      }
    //      printf("\n");
    //     // printf("Roll: %d\nBangla: %d\nEnglish: %d\n",students[i][0],students[i][1],students[i][2]);
    
    // }
    

//    int arr[4][2] = {
//     {1,40},
//     {2,50},
//     {3,60},
//     {4,70},

//    };
//    printf("No.\ttaka\n");
//    for(int i = 0 ; i < 4 ; i++){
//     for(int j = 0 ; j < 2 ; j++){
//         printf("%d\t",arr[i][j]);
//     }
//     printf("\n");
//    }

// Calculate total and average of student scores
// int result[5][3] = {
//     {1,95,96},
//     {2,92,90},
//     {3,70,85},
//     {4,97,98},
//     {5,89,93}
// };
// int i,j;

// printf("Roll\tBangla\tEnlish\n");
// for(i = 0 ; i < 5 ; i++){
//     for(j = 0 ; j < 3 ; j++){
//     printf("%d\t",result[i][j]);
//     }
//     printf("\n");
// }

// int total_bn_score = 0;
// int total_en_score = 0;
// float bn_avg;
// float en_avg;

// for(i = 0 ; i < 5 ; i++){
//     for(j = 0 ; j < 3 ; j++){ 
//         if(j == 0) continue;
            
        
//         if(j == 1){
//             total_bn_score += result[i][j];
//             continue;
//         }
//         if( j == 2){
//             total_en_score += result[i][j];
//         }
//     }

//     // total_bn_score += result[i][1];
//     // total_en_score += result[i][2];
 
// }
// printf("Total score of Bangla and English:\n");
// printf("Total Bangla Score:%d\n",total_bn_score);
// printf("total English Score:%d\n",total_en_score);

// bn_avg = (float)total_bn_score / 5;
// en_avg = (float)total_en_score / 5;
// printf("Total Bangla Avg:%.2f\n",bn_avg);
// printf("total English Avg:%.2f\n",en_avg);

// Summation of two matrices from the user input
// int m,n,i,j;
// //get row and columns size from the user  
// printf("Enter your row and column size: ");
// scanf("%d %d",&m,&n);

// int matrix1[m][n], matrix2[m][n], result[m][n];

// //read elements of the first matrix
// printf("enter your first matrix:\n");
// for(i = 0; i < m; i++){
//   for(j = 0; j < n; j++){
//     scanf("%d",&matrix1[i][j]);
//   }
  
// }

// //read elements of the second matrix
// printf("enter your second matrix:\n");
// for(i = 0; i < m; i++){
//   for(j = 0; j < n; j++){
//     scanf("%d",&matrix2[i][j]);
//   }
  
// }

// //add two matrices
// for(i = 0; i < m; i++){
//     for(j = 0 ; j < n ; j++){
//         result[i][j] = matrix1[i][j] + matrix2[i][j];
//     }
// }

// //print the resultant matrix

// printf("Resultant matrix:\n");
// for(i = 0; i < m; i++){
//   for(j = 0; j < n; j++){
//     printf("%d\t",result[i][j]);
//   }
//   printf("\n");
// }

  // C program to store temperature of two cities of a week and display it.
//   int i,j;
//   int storeTemperature[2][7] = {
//     {25, 30, 28, 32, 26, 29, 31},
//     {22, 27, 24, 23, 21, 25, 28}
//   };
//   int result[2][7];
//  printf("day-1\tday-2\tday-3\tday-4\tday-5\tday-6\tday-7\n");
//     for(i = 0 ; i < 2 ; i++){
//     for(j = 0 ; j < 7 ; j++){
//       printf("%d\t",storeTemperature[i][j]);
//     }
//     printf("\n");
//   }

  


    return 0;
}