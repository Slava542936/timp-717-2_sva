#include <stdio.h>

 int main(void)
 {
        int n, x, y=0;
        scanf("%d",&n);
        for (int i=0; i<n; i++) {
                scanf("%d",&x);
                if (i%2==0) {
                        y-=x*x;
                }
                else {
                        y+=x*x;
                }
        }
        printf("%d",y);
        return 0;
 }

