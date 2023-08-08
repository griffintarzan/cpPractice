#include <bits/stdc++.h>

using namespace std;
int main() {
  int N, C, P;
  while (cin >> N) {
    if (N == 0) {
      continue;
    }
    vector < int > pole(N);
    bool can = true;
    for (int i = 0; i < N; i++) {
      cin >> C >> P;
      if (((i + P) >= 0) && ((i + P) < N)) {
        if (pole[i + P] == 0) {
          pole[i + P] = C;
        } else {
          can = false;
        }
      } else {
        can = false;
      }
    }
    if (can) {
      cout << pole[0];
      for (int i = 1; i < N; i++) {
        cout << " " << pole[i];
      }
    } else {
      cout << -1;
    }
    cout << "\n";

  }

}
