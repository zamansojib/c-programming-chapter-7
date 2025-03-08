#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> // For tolower()

#define ROWS 3
#define COLS 3 
int is_vowel(char ch){
   // Convert the character to lowercase to handle both uppercase and lowercase vowels
   ch = tolower(ch);
   return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
     
 
   



int main(void){

   // 1. Write a program that reads in 2D array of integers and calculates the sum of all the elements in the array
//    int m ,n,i,j;
//    int sum;
//    printf("Enter the number of rows and columns: ");
//    scanf("%d %d",&m,&n);

//    int arr[m][n];
//    printf("Enter your expected matrix:\n");
//    for(i = 0; i < m; i++){
//     for(j = 0; j < n; j++){
//         scanf("%d",&arr[i][j]);
//     }
    
//    }
 
//    sum = 0;
//    for (i = 0; i < m; i++){
//     for(j = 0; j < n; j++){
//         sum += arr[i][j];
//     }
//    }
//    printf("Sum of all elements in the array: %d\n", sum);
   
   // 2. Write a program that reads in a 2D array of integers and prints out the values of the elements in the array that are greater than 10

    // int rows,cols,i,j;
    // printf("Enter the number of rows: ");
    // scanf("%d",&rows);
    // printf("Enter the number of columns: ");
    // scanf("%d",&cols);

    // //get the elements of matrix from the user input
    // int arr[rows][cols];
    // printf("Enter your expected matrix:\n");
    // for(i = 0 ; i < rows ; i++){
    //     for(j = 0 ; j < cols ; j++){
    //         scanf("%d",&arr[i][j]);
    //     }

    // }

    // //print out the values of the elements in an array

    // printf("Your Expected Matrix:\n");
    // for(i = 0 ; i < rows ; i++){
    //     for(j = 0 ; j < cols ; j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");

    // }
    
    // //find and print out the values of the elements greater than 10
    // printf("Elements in the array that are greater than 10:\n");
    // for(i = 0 ; i < rows ; i++){
    //     for(j = 0 ; j < cols ; j++){
    //         if(arr[i][j] > 10){
    //             printf("%d at [%d][%d]\t", arr[i][j], i, j);
    //         }
    //     }
    //     printf("\n");

    // }

     //3. Write a program that reads in a 2D Array of integers and prints out the values of the elements in the array that are devisable by 3 

    //  int m,n,i,j;
    //  printf("Enter the number of rows: ");
    //  scanf("%d",&m);
    //  printf("Enter the number of columns: ");
    //  scanf("%d",&n);

    //   //get the elements of matrix from the user input
     
    //  int arr[m][n];
    //  printf("Enter your expected matrix:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    //  }

    //  //print out the values of the elements in an array
    //  printf("Your expected matrix:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    //  }

    //  //find and print out the values of the elements devisable by 3
    //  printf("Elements in the array that are devisable by 3:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //        if(arr[i][j] % 3){
    //            continue;
    //        }else{
    //         printf("%d is divisible by 3 at [%d][%d]\t", arr[i][j], i, j);
    //        }
    //     }
    //     printf("\n");
    //  }

     //4.Write a program that reads in a 2D Array of integers and calculates the product of the elements in each row and column
     
//      int m,n,i,j;
//      printf("Enter the number of rows: ");
//      scanf("%d",&m);
//      printf("Enter the number of columns: ");
//      scanf("%d",&n);

//       //get the elements of matrix from the user input
     
//      int arr[m][n];
//      printf("Enter your expected matrix:\n");
//      for(i = 0 ; i < m ; i++){
//         for(j = 0 ; j < n ; j++){
//             scanf("%d",&arr[i][j]);
//         }
//      }
     
//      //print out the values of the product element elements in an array
     
//      printf("your matrix is: \n");
//      for(i = 0 ; i < m ; i++){
//         for(j = 0 ; j < n ; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//      }

//      // product of rows
//    for(i = 0 ; i < m ; i++){
//     int product_rows = 1;
//     for(j = 0 ; j < n ; j++){
//         product_rows *= arr[i][j];
//     }
//     printf("Product of elements in row %d: %d\n",i + 1,product_rows);
//    }
    
//    // product of columns
//    for(j = 0 ; j < m ; j++){
//     int product_cols = 1;
//     for(i = 0 ; i < n ; i++){
        
//         product_cols *= arr[i][j];
       
//     }
//     printf("Product of elements in column %d: %d\n",j + 1,product_cols);
//    }

    // 5. Write a program that reads in two 2D arrays of integers and calculates their sum and difference
    //       int m,n,i,j;
    //  printf("Enter the number of rows: ");
    //  scanf("%d",&m);
    //  printf("Enter the number of columns: ");
    //  scanf("%d",&n);

    //   //get the elements of matrix from the user input
     
    //  int matrixA[m][n], matrixB[m][n], resultM[m][n];

    //  printf("Enter your matrix A:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         scanf("%d",&matrixA[i][j]);
    //     }
    //  }
     
    //  //print out the values of the product element elements in an array
     
    //  printf("Enter your matrix B: \n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //        scanf("%d",&matrixB[i][j]);
    //     }
        
    //  }

    //  // sum of matrices
     
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         resultM[i][j] = matrixA[i][j] + matrixB[i][j];
    //     }
        
    //  }
     
    //  printf("Sum of matrices: \n");
    //  for(i = 0  ; i < m ; i++){
    //  for(j = 0 ; j < n ; j++){
    //      printf("%d ", resultM[i][j]);
    //  }
    //  printf("\n");
    //  }
     
    //  // difference of matrices
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         resultM[i][j] = matrixA[i][j] - matrixB[i][j];
    //     }
        
    //  }
     
    //  printf("Difference of matrices: \n");
    //  for(i = 0  ; i < m ; i++){
    //  for(j = 0 ; j < n ; j++){
    //      printf("%d ", resultM[i][j]);
    //  }
    //  printf("\n");
    //  }


     //6.Write a program that reads in a 2D array of integers and prints out the transpose of the array

    //  int m,n,i,j;
    //  printf("Enter the number of rows: ");
    //  scanf("%d",&m);
    //  printf("Enter the number of columns: ");
    //  scanf("%d",&n);

    //   //get the elements of matrix from the user input
     
    //  int matrixA[m][n];

    //  printf("Enter your matrix A:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         scanf("%d",&matrixA[i][j]);
    //     }
    //  }

    //  printf("Your matrix A:\n");
    //  for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         printf("%d ", matrixA[i][j]);
    //     }
    //     printf("\n");
    //  }

    //  //transpose the matrix
    //   printf("Transpose of Matrix A: \n");
    //   for( i = 0 ; i < n ; i++){
    //     for(j = 0 ; j < m ; j++){
    //         printf("%d ",matrixA[j][i]);
    //     }
    //     printf("\n");
    //   }

     // 7. Write a program that reads in a 2D array of integers and checks if it is a symmatric matrix 



    //  int m,n,i,j;

    // // Read the size of the matrix
    // printf("Enter the size of the square matrix (n x n): ");
    // scanf("%d%d",&m,&n);

    // int matrix[m][n];

    // // Read the matrix elements
    // printf("Enter the elements of the matrix:\n");
    // for (i = 0; i < m; i++) {
    //     for (j = 0; j < n; j++) {
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }

    // // Check if the matrix is symmetric
    // int isSymmetric = 1; // Assume the matrix is symmetric initially
    // for (i = 0; i < m; i++) {
    //     for (j = 0; j < n; j++) {
    //         if (matrix[i][j] != matrix[j][i]) {
    //             isSymmetric = 0; // If any element doesn't match its transpose, it's not symmetric
    //             break;
    //         }
    //     }
    //     if (isSymmetric) {
    //         break;
    //     }
    // }

    // // Output the result
    // if (isSymmetric) {
    //     printf("The matrix is symmetric.\n");
    // } else {
    //     printf("The matrix is not symmetric.\n");
    // }

    
    // 8.Write a program that reads in a 2D array of characters and prints out the values of the elements in the array that are vowels
    // char chr;
    // char ch[3][10] = {
    //     "abcdefghij",
    //     "klmnopqrst",
    //     "uvwxyz"
    // };
   

    // Prompt the user to enter a character
    // printf("Enter your character: ");
    // scanf(" %c",&chr);  // Note the space before %c to skip any whitespace

    // // Check if the character is a vowel
    // if(is_vowel(chr)){
    //     printf("this is vowel\n");
    // }else{
    //     printf("this is consonant\n");
    // }
    

    //  char arrays[ROWS][COLS];
    //  int i,j;

    //  //Read the array of characters
    //  printf("Enter %d x %d characters: \n",ROWS,COLS);
    //  for(i = 0; i < ROWS ; i++){
    //     for(j = 0; j < COLS ; j++){
    //         scanf(" %c",&arrays[i][j]);
    //     }
    //  }
      
    //  printf("Vowels of: \n");
    //  for(i = 0; i < ROWS; i++){
    //     for(j = 0; j < COLS ; j++){
    //        if(is_vowel(arrays[i][j])){
    //         printf("%c ",arrays[i][j]);
    //        }
    //     }
    //  }


    // int m,n,i,j;
    // printf("Enter size of characters(i.e.,(3x3): ");
    // scanf("%d%d",&m,&n);
    
    // char chr[m][n];
    // printf("Enter your character: \n");
    // for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //         scanf(" %c",&chr[i][j]);
    //     }
    // }

    // printf("Vowels of: \n");
    // for(i = 0 ; i < m ; i++){
    //     for(j = 0 ; j < n ; j++){
    //        if(is_vowel(chr[i][j])){
    //          printf("%c\t",chr[i][j]);
    //        }
    //     }
    // }

    // 9. write a program that reads in a 2D array of integers and checks if it is a diagonal matrix
    
   
    
    

    

    return 0;
}