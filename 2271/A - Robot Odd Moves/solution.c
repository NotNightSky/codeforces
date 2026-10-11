#include <stdio.h>
 
int main() {
    int cases;
    if (scanf("%d", &cases) != 1) return 0;
 
    while (cases--) {
        int a, b;
        scanf("%d %d", &a, &b);
 
        if (a == 0 && b == 0) {
            printf("0
");
        } 
        else if (b <= a && (a % 2 == b % 2)) {
            printf("%d
", a);
        } 
        else if (b <= a + 1 && ((a + 1) % 2 == b % 2)) {
            printf("%d
", a + 1);
        } 
        else {
            printf("-1
");
        }
    }
    return 0;
}