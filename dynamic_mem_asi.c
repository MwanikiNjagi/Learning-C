#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ages;
    int n;
    int i;

//Input of the number of elements the pointer array is going to have
    printf("Input number of values:\n");
    scanf("%d", &n);

    printf("Expected number of values in pointer array are: %d\n", n);
    if (ages == NULL){
        printf("Error!");
        exit(0);
    }
    ages = (int*) malloc(n * sizeof(int));
//Input all four values
    printf("Input 4 values:\n");
    for(i = 0; i<n; ++i){
        scanf("%d", ages + i);
    }

//Print all four values
    printf("The values are:\n");
    for (i = 0; i < n; ++i){
        printf("%d\n", *(ages + i));
    }
//resizing the array using realloc
    printf("Input the number of new array elements you desire:\n");
    scanf("%d", &n);
    ages = realloc(ages, n * sizeof(int));
    ages[4] = 32;
    ages[5] = 59;

//Print all 6 array elements
    printf("The 6 values are:\n");
    for(i = 0; i<n; ++i){
        printf("%d\n", *(ages + i));
    }
    free(ages);
    return 0;
}