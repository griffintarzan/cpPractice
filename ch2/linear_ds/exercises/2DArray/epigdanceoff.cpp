#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  char dance[2000][2000];
  int count = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> dance[i][j];
    }
  }
  for (int j = 0; j < M; j++) {
    int i = 0;
    while (dance[i][j] == '_' && i < N) {
      i++;
    }
    //cout << i << "\n";
    if (i == N) {
      count++;
    }

  }
  cout << count;
  return 0;
}
