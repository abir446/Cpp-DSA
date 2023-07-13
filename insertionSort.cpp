#include <any>
#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

  for (int i = 0; i < n - 1; i++) {
    int current = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] > current) {
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev+1]=current;
  }
}

int main() {
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);
  insertionSort(arr, n);
  for (auto x : arr) {
    cout << x << " ";
  }
  return 0;
}
