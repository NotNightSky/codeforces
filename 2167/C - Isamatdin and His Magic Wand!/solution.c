#include <stdio.h>
 
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
 
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
 
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
 
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
 
int main(){
  int q;
  scanf("%d", &q);
 
  while (q--){
    int size;
    scanf("%d", &size);
 
    int numbers[size];
    int even_count = 0, odd_count = 0;
 
    for (int i = 0; i < size; i++) {
      scanf("%d", &numbers[i]);
      if (numbers[i] % 2 == 0) {
        even_count++;
      } else {
        odd_count++;
      }
    }
 
    if (even_count > 0 && odd_count > 0) {
      mergeSort(numbers, 0, size - 1);
    }
 
    for (int x = 0; x < size; x++) {
      printf("%d ", numbers[x]);
    }
 
    printf("
");
  }
  return 0;
}