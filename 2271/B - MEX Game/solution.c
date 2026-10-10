#include <stdio.h>
 
int freq[200005];
 
int main() {
    int cases;
    if (scanf("%d", &cases) != 1) return 0;
 
    while (cases--) {
        int num_cards, param;
        scanf("%d %d", &num_cards, &param);
 
    for (int i = 0; i <= num_cards + 1; i++) {
            freq[i] = 0;
    }
 
    for (int i = 0; i < num_cards; i++) {
      int a;
      scanf("%d", &a);
      if (a <= num_cards + 1) {
        freq[a]++;
        }
      }
 
    int m = 0;
    while (freq[m] >= 2 * param) {
      m++;
    }
 
    int condition = (freq[m] == 2 * param - 1);
 
    if (condition) {
      printf("YES
");
    } else {
      printf("NO
");
    }
  }
 
   return 0;
}