#include <stdio.h>

int main()
{
    int n = 1;
    for (int i = 1; i <= 81;i++) {
        int k = 1;
        int test = i % 9;
        if (test == 0) {
            k = 9;
        }
        else {
            k = i % 9;
        }
        printf("%d*%d=%d\t",n,k,n*k);
        if (test == 0) {
            printf("\n");
            n = n + 1 ;
        }
    }

    return 0;
}
