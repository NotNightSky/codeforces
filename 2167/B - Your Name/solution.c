#include <stdio.h>
 
int main() {
  int q;
 
  if (scanf("%d", &q) != 1) return 0;
 
  while (q--) {
    int n;
    scanf("%d", &n);
 
    char s[25];
    char t[25];
    scanf("%s %s", s, t);
 
    int counts[26] = {0};
 
    for (int i = 0; i < n; i++) {
      counts[s[i] - 'a']++;
      counts[t[i] - 'a']--;
    }
 
    int possible = 1;
 
    for (int i = 0; i < 26; i++) {
      if (counts[i] != 0) {
        possible = 0;
        break;
      }
    }
 
    if (possible) {
      printf("YES
");
    } else {
      printf("NO
");
    }
  }
 
  return 0;
}