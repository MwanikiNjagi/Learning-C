#include <stdio.h>

//structs a collection of variables under a single name 
struct Person{
    double salary;
    int age;
    char *first_name;
    char *second_name;
};

int main(){
    struct Person person1;

    person1.salary = 60000.02;
    person1.age = 24;
    person1.first_name = "Mwaniki";
    person1.second_name = "Njagi";
    
    printf("Person1's Age: %d\n", person1.age);
    printf("Person1's Salary: %0.2lf\n", person1.salary);
    printf("Person1's first_name: %s\n", person1.first_name);//it is possible to print the variable that contains the string using the puts function
    printf("Person1's second_name: %s\n", person1.second_name);

    puts(person1.first_name);
    puts(person1.second_name);
 
    return 0;
}