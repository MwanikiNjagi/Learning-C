#include <stdio.h>

typedef struct Complex{
    float real;
    float imaginary;

} complex;

//defining function prototype
void complexSum();

int main(){

    complex c1, c2, result;

//c1 real
    printf("First Number\n");
    printf("Enter real number: ");
    scanf("%f", &c1.real);
    
//c1 imaginery    
    printf("Enter imaginary number: ");
    scanf("%f", &c1.imaginary);
    
//c2 real
    printf("Second number\n");
    printf("Enter real number: ");
    scanf("%f", &c2.real);
    
//c2 imaginary
    printf("Enter imaginary number: ");
    scanf("%f", &c2.imaginary);
    
    complexSum(c1, c2, &result);
    printf("Result is %0.1f + %0.1fi", result.real, result.imaginary);

    return 0;
    
}

void complexSum(complex c1, complex c2, complex *result){
    result->real = c1.real + c2.real;
    result->imaginary = c1.imaginary + c2.imaginary;
};