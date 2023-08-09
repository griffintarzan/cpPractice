#include <bits/stdc++.h>

using namespace std;
int main() {
  int S, B;
  while (cin >> S >> B) {
    int L, R;
    int left[100001];
    int right[100001];
    if (S == 0 && B == 0) {
      break;
    }
    iota(left + 2, left + S + 1, 1);
    left[0], left[1] = 0;
    iota(right + 1, right + S + 1, 2);
    right[0] = 0;
    for (int i = 0; i < B; i++) {
      cin >> L >> R;
      left[right[R]] = left[L];
      right[left[L]] = right[R];
      if (left[L] > 0) {
        cout << left[L] << " ";
      } else {
        cout << "* ";
      }
      if (right[R] <= S) {
        cout << right[R];
      } else {
        cout << "*";
      }
      cout << "\n";
    }
    cout << "-\n";
  }
  return 0;

}
