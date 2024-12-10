
#include <stdio.h>

int main()
{
    int i = 1234;
    if (i >= 10000) {
        int th = (i % 10000)/1000;
        int g = (i % 10);
        i = i - (1000*th) + (1000*g) -g +th;
        printf("%d ",i);
    }
    else {
        int g = (i % 10);
        i = i - g + (g*1000);
        printf("%d ",i);
    }
    
    return 0;
}
