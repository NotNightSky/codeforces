#include <stdio.h>
 
int main() {
  int t;
  if (scanf("%d", &t) != 1) return 0;
 
  while (t--) {
    int n;
    int k;
 
    scanf("%d %d", &n, &k);
 
    int max_money = (1 << (n - k + 1)) + 2 * (k - 1);
 
    printf("%d
", max_money);
  }
  return 0;
}