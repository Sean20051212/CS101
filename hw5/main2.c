#include <stdio.h>

int main()
{
    double PI = 4.0 ;
    int k = 1 ;
    long IPI = 0;
    int x = 0;
    for (int i = 3; i <10000000;i+=2) {
        if (k == 0) {
            PI += (4.0/i);
            k++;
        }
        else {
            PI -= (4.0/i);
            k--;
        }
        
        IPI = PI * 100000;
        if (IPI == 314159) {
            x = i ;
            break;
        }
    }
    printf("%d %.5f",x,PI);
    return 0;
}