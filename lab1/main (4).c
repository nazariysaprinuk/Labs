#include <stdio.h>

int main(){

    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    a > b ? printf("%d\n%d", a, b) : printf("%d\n%d", b, a);

return 0;
}