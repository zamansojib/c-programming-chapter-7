#include<stdio.h>

int main(void){

   /*
    in C, an array of strings is a 2D array where each row contains a sequence of characters terminated by a '\0' NULL character (strings).It is used to store multiple strings in a single array
   */

//    char arr[3][20] = {
//     "asikuzzaman",
//     "zaman",
//     "sojib"
//    };

//    for(int i = 0 ; i < 3 ; i++){
//       printf("%s\n", arr[i]);
//    }

//   for(int i = 0 ; i < 3 ; i++){
//     for(int j = 0 ; j < 20  ; j++){
//         printf("%c\t", arr[i][j]);
//     }
//     printf("\n");
//   }


   //Reading and displaying 2d array of strings in C:
    /*
     The two-dimensional array of strings can be read by using loops. To read we can use scanf(), gets(), fgets() or any other methods to read the string.
    */
   // reading strings using for loop  
   
   /*
    for(i=0;i<n;i++)
      {
  scanf("%s[^\n]",name[i]);
      }

      Or,

// reading strings using while loop
      int i=0;
      while(i<n)
    {      
  scanf("%s[^\n]",name[i]);
  i++;
      }
   */
     

   /*
    The two-dimensional array of strings can be displayed by using loops. To display we can use printf(), puts(), fputs() or any other methods to display the string.
   */

   /*
    // displaying strings using for loop
for(i=0;i<n;i++)
{
  puts(name[i]);
}

Or,

// displaying strings using while loop
int i=0;
while (i<n)
{
  puts(name[i]);
  i++;
}
   */

   //Sample program to read the 2D array of characters or array of String in C
    
   //declaring and initializing 2D string
//    char languages[5][10] = {
//     "C",
//     "C++",
//     "Java",
//     "Python",
//     "JavaScript"
//    };
//    //Displaying Strings
//    printf("Languages are: \n");
//    for(int i = 0 ; i < 5 ; i++){
//      puts(languages[i]);
//    }

   // Write a program to read and display a 2D array of strings in C language.
   char name[10][50];
   int i,n;
   printf("Enter the number of strings <10: ");
   scanf("%d",&n);
   printf("Enter the strings: \n");
   for(i = 0 ; i < n ; i++){
    scanf("%s[^\n]",name[i]);
   }
   printf("\n");

   printf("Your entered strings are: \n");
   for(i = 0 ; i < n ; i++){
    puts(name[i]);
   }



    return 0;
}