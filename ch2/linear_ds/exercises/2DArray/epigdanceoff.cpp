#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  //char dance[2000][2000];
  // using a 1D vector string can also work as a 2D char array, saves time. 
  vector < string > dance(N);
  int count = 1;
  for (int i = 0; i < N; i++) {
    cin >> dance[i];
  }

  for (int j = 0; j < M; j++) {
    int i = 0;
    //Need to check for i<N prior or else you will get index out of bounds for the array
    while (i < N && dance[i][j] == '_') {

      i++;
    }

    if (i == N) {
      count++;
    }

  }
  cout << count;
  return 0;
}
