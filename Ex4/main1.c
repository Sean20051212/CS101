

#include <stdio.h>

int main()
{
    int n = 7;
    int s = n;
    for (int i = 1; i <= n ;i++) {
        
        for (int k = 1; k <= s+i ;k++) {
            if (k<=s) {
                printf(" ");
            }
            else {
                printf("%d ",i);
            }
        }
        printf("\n");
        s--;
    }
    return 0;
}