#include <stdio.h>
 
typedef long long ll;
 
ll findGCDTwo(ll a, ll b) {
  while (b != 0) {
    ll remainder = a % b;
    a = b;
    b = remainder;
  }
  return a;
}
 
int main() {
  int t;
  if (scanf("%d", &t) != 1) return 0;
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
  int num_primes = 17;
 
  while (t--) {
    int n;
    if (scanf("%d", &n) != 1) break;
    ll overall_gcd = 0;
    for (int i = 0; i < n; i++) {
      ll val;
      scanf("%lld", &val);
      if (i == 0) {
        overall_gcd = val;
      } else {
        overall_gcd = findGCDTwo(overall_gcd, val);
      }
    }
 
    ll ans = -1;
    for (int i = 0; i < num_primes; i++) {
      if (overall_gcd % primes[i] != 0) {
        ans = primes[i];
        break;
      }
    }
 
    printf("%lld
", ans);
  }
 
  return 0;
}