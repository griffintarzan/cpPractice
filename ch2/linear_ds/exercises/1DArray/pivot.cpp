#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  int e;
  int max = INT_MIN;
  int min = INT_MAX;
  vector < int > arr(N);
  int count = 0;
  vector < int > res(N);
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < N; i++) {
    e = arr[i];
    if (e > max) {
      max = e;
    }
    if (e >= max) {
      res[i]++;
    }
  }

  for (int i = N - 1; i >= 0; i--) {
    e = arr[i];
    if (e < min) {
      min = e;
    }
    if (e <= min) {
      res[i]++;
    }
  }
  for (int i = 0; i < N; i++) {

    if (res[i] == 2) count++;
  }
  cout << count;
  return 0;
}
