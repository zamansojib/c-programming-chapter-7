#include<stdio.h>
#include<string.h>
#define MAX 50
int main(void){

   // Strings are used for storing text/characters.
   // For example, "Hello World" is a string of characters
   //Unlike many other programming languages, C doesn't have a string type to easily create string variables. instead, you must use the char type and create an array of characters to make a string in C.
   
//    char greetings[] = "Hello World";
//    printf("%s\n", greetings);
//    printf("%c\n",greetings[3]); // Note that we have to use the %c format specifier to print a single character.

//    greetings[0] = 'j'; // Modify String
//    printf("%s\n\n",greetings);
    

//    // Loop Through a String 
//    char carName[] = "Volvo";
//    for(int i = 0 ; i < 5 ; i++){
//     printf("%c\t",carName[i]);
//    } 

      // character length
//    char name[] ="bangladesh";
//    int length = sizeof(name) / sizeof(name[0]);
//     for(int i = 0 ; i < length ; i++){
//         printf("%c\n",name[i]);
//     }

    //Another way of creating Strings
    // char greeting[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    // printf("%c",greeting[3]);

   // c String Functions
   // C also has many useful string functions, Which can be used to perform certain operations on strings.
   // to use them, you must include the <string.h> header file in your program (#include<string.h>)
    
    // String length
    /*for example, to get the length of a string, you can use the strlen() function*/

    // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // int length = strlen(alphabet);
    // int length2 = sizeof(alphabet) / sizeof(alphabet[0]);
    // printf("%d\n",length);  // output - 26
    // printf("%d\n",length2); // output - 27

    // We used sizeof to get the size of a string/array. Note that sizeof and strlen behaves differently, as sizeof also includes the '\0' character when counting.
    //It is also important that you know that sizeof will always return the memory size(in bytes), and not the actual string length.
   
    //  char Alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //  int length1 = strlen(Alphabet);
    //  int length2 = sizeof(Alphabet) / sizeof(Alphabet[0]);
    //  printf("%d\n",length1);
    //  printf("%d\n",length2);


     // Concatenate String:
     /*To concatenate (combine) two strings, you can use the strcat() function*/
    //  char str1[20] = "Hello ";
    //  char str2[] = "World";
    //  //Concatenate str2 to str1 (result is stored in str1)
    //  strcat(str1,str2);
    //  printf("%s\n",str1);

     //Copy String:
     /*To copy the value of one string to another, you can use the strcpy() function*/
    //  char str1[20] = "Hello World";
    //  char str2[20];
    //  //copy str1 to str2
    //  strcpy(str2 , str1);
    //  printf("%s",str2);

 
     // Compare String:
     /*To compare two strings, you can use the strcmp() function. It returns 0, if the two strings are equal,Otherwise a value that is not 0*/
    //  char str1[] = "Hello";
    //  char str2[] = "Hello";
    //  char str3[] = "Hi";
    //  printf("%d\n",strcmp(str1 , str2)); // return 0
    //  printf("%d\n",strcmp(str1 , str3)); // return -1

     // Read a string input from the user:
    //  char str[50]; //declaring string
    //  printf("Enter your string: ");
    //  scanf("%s",str); //reading string
    //  printf("Expected output- %s\n",str);

      // How to read a string separated by whitespaces in C:
      /*We can use multiple methods to read a string separated by spaces in C. The two of the common ones are:
      1. We can use the fgets() function to read a line of string and gets() to read characters from the standard input (stdin) and store them as a C string until a newline character or the End-of-file(EOF) is reached.
      2. We can also scanset characters inside the scanf() function
      */
 
      // 1. Example of string input using gets()
      //  char str[MAX];
      //  printf("Enter your string: ");
      //  fgets(str, MAX, stdin);
      //  printf("String is: \n");
      //  puts(str);
      
       // 2. Example of string input using scanset
        // char str[20];
        // printf("Enter your string: ");
        // scanf("%[^\n]s", str);
        // printf("%s",str);

       // 3. Using gets
        char str[MAX];
        printf("Enter your string: ");
        gets(str);
        printf("String is: \n");
        puts(str);
        



    return 0;
}