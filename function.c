#include <stdio.h>

float average(float x, float y, float z) {
    return (x + y+ z)/3;
}
int main () {
    float a, b , c;
    
    printf("enter the no;\n");
    scanf("%f %f %f, &a, &b, &c");
    
    
    printf("average of the three numbers = %3f\n",average(a, b ,c));
    return 0;
}