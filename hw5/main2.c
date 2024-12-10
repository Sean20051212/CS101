#include <stdio.h>

int main()
{
    float PI = 0 ;
    int k = 1 ;
    float c = 1.0;
    for (float i = 1; i <= 100000;i++) {
        if (k % 2 == 0) {
            PI = PI - (4.0f/c);
        }
        else {
            PI = PI + (4.0f/c);
        }
        c = c+2;
        k++;
    }
    printf("%.5f",PI);
    return 0;
}