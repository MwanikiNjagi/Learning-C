#include <stdio.h>

typedef struct Complex{
    float real;
    float imaginary;

} complex;

//defining function prototype
void complexSum();
void complexSubtraction();

int main(){

    complex c1, c2, c3, result;

//c1 real
    printf("First Number\n");
    printf("Enter real and imaginary number: \n");
    scanf("%f, %f", &c1.real, &c1.imaginary);
    
//c2 real and imaginary
    printf("Second number\n");
    printf("Enter real and imaginary number: \n");
    scanf("%f, %f", &c2.real, &c2.imaginary);
    

//c3 real
    printf("Third Number\n");
    printf("Enter real and imaginary number: \n");
    scanf("%f, %f", &c3.real, &c3.imaginary);

//functions for complex arithmetic calculations of complex numbers
    complexSum(c1, c2, c3, &result);
    printf("Result is %0.1f + %0.1fi\n", result.real, result.imaginary);
    complexSubtraction(c1, c2, c3, &result);
    printf("Result is %0.1f - %0.1fi", result.real, result.imaginary);

    return 0;
    
}

void complexSum(complex c1, complex c2, complex c3, complex *result){
    result->real = c1.real + c2.real + c3.real;
    result->imaginary = c1.imaginary + c2.imaginary + c3.imaginary;
}

void complexSubtraction(complex c1, complex c2, complex c3, complex *result){
    result->real = c1.real - c2.real - c3.real;
    result->imaginary = c1.imaginary - c2.imaginary - c3.imaginary;
}