#include <stdio.h>

int main()
{
    int t, i, a, b;
    
    scanf("%d", &t);
    
    for (i = 1; i <= t; i++) {
        scanf("%d %d", &a, &b);
        
        a = a + b;
        
        printf("Case %d: %d\n", i, a);
    }
    
    return 0;
}
