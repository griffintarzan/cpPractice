#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[5] = {3,3,3};
  vector<int> v(5, 5); // {5, 5, 5, 5, 5}
  printf("arr[2] = %d and v[2] = %d\n", arr[2], v[2]);

  iota(arr, arr+5, 0);
  iota(v.begin(), v.end(), 5);
  cout << "Iterating through static arr with iota 0\n";
  for (int i = 0; i<(sizeof(arr)/sizeof(int));i++ ) {
    cout << arr[i] << " ";
  }
  cout <<"\n";
  cout << "Iterating through dynamic vector v with iota 5\n";
  for (auto it : v) {
    cout << it << " ";
  }
  cout << "\n";

  return 0;
}
