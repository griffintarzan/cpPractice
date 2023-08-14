#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  string C, G;
  cin >> N;
  cin >> C >> G;
  int colors[N];
  int s = 0;
  int r = 0;

  for (int i = 0; i < N; i++) {
    if (C[i] == G[i]) {
      s++;
      G[i] = '_';
      C[i] = '-';

    }
  }
  for (int i = 0; i < N; i++) {
    if (G.find(C[i]) != -1) {
      r++;
      G[G.find(C[i])] = '_';
    }
  }

  cout << s << " " << r;
  return 0;
}
