#include <stdio.h>
enum Weekend{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    enum Weekend weekend1 = Saturday;
    enum Weekend weekend2 = Sunday;

    printf("%d\n", weekend1);
    printf("%d\n", weekend2);
    return 0;
}