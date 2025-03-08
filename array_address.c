#include<stdio.h>

int main(void){

    int my_array[5];
    my_array[0] = 80;
    my_array[1] = 82;
    my_array[2] = 90;
    my_array[3] = 85;
    my_array[4] = 92;

    printf("%u\n",(unsigned int)&my_array);
    printf("%u\n",(unsigned int)&my_array[0]);
    printf("%u\n",(unsigned int)&my_array[1]);
    printf("%u\n",(unsigned int)&my_array[2]);
    printf("%u\n",(unsigned int)&my_array[3]);
    printf("%u\n",(unsigned int)&my_array[4]);



    return 0;
}

