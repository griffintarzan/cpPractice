#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  while (cin >> N) {
    if (N == 0) break;
    vector < string > cardarr(N);
    string card, spelling;
    int cnt;
    int idx = -1;
    for (int i = 0; i < N; i++) {
      cin >> card >> spelling;
      cnt = spelling.size();
      // for (int j = 0; j < cnt; j++) {
      //     if (!cardarr[(idx+j)%N].empty()) {
      //         cnt++;
      //     } else {
      //         if (j == cnt-1) idx = (idx+j)%N;
      //     }
      // }
      // replaced messy for loop with while loop.
      while (cnt) {

        idx = (idx + 1) % N;
        if (cardarr[(idx) % N].empty()) {
          cnt--;
        }
      }
      cardarr[idx] = card;
      //idx = (idx+1)%N; used for for loop
    }
    cout << cardarr[0];
    for (int i = 1; i < N; i++) {
      cout << " " << cardarr[i];
    }
    cout << "\n";
  }
  return 0;

}
