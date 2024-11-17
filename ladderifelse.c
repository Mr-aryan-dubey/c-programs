#include <stdio.h>
int main () {
    int age ;
    printf("enter the age:");
    scanf("%d",&age);
    if (age <= 15){
        printf("%d can drink alcohol.\n",age);
    } else if (age <= 21 ) {
        printf("%d can have weed  . \n", age);
    }
     else {
        printf("%d can  have  weed and alcohol. \n", age);
    }
    return 0;
}