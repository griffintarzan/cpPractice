#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  //int time[1000][1000];
  vector<vector<int>> time;
  time.resize(N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int temp;
      cin >> temp;
      time[i].push_back(temp);
    }
  }

  for (int j = 1; j < M; j++) {
    time[0][j] += time[0][j - 1];

  }
  cout << time[0][M - 1] << " ";
  for (int i = 1; i < N; i++) {

    for (int j = 0; j < M; j++) {
      if (j == 0)
        time[i][j] += time[i - 1][j];
      else {
        if (time[i][j - 1] < time[i - 1][j]) {
          time[i][j] += time[i - 1][j];
        } else {
          time[i][j] += time[i][j - 1];
        }
      }
    }
    cout << time[i][M - 1] << " ";
  }
  return 0;
}
