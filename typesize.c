#include<stdio.h>

int main(void){
    printf("Тип char має розмір %zd Байт.\n\n", sizeof(char));
    
    printf("Тип int має розмір %zd Байт.\n", sizeof(int));
    printf("Тип short int має розмір %zd Байт.\n", sizeof(short));
    printf("Тип long int має розмір %zd Байт.\n", sizeof(long));
    printf("Тип long long int має розмір %zd Байт.\n\n", sizeof(long long));

    printf("Тип float має розмір %zd Байт.\n", sizeof(float));
    printf("Тип double має розмір %zd Байт.\n", sizeof(double));
    printf("Тип long double має розмір %zd Байт.\n", sizeof(long double));

    return 0;
}