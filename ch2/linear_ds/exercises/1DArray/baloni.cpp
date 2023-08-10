#include <bits/stdc++.h>

using namespace std;
int shots[1000001];
int main() {

  int N;
  cin >> N;
  int height;
  for (int i = 0; i < N; i++) {
    cin >> height;
    //cout << "shots[" << height << "] : ";
    shots[height]++;
    //cout << shots[height] << "\n";
    if (shots[height + 1] != 0) {
      //cout << "count --\n";
      shots[height + 1]--;
    }
  }
  int sum = 0;
  for (int i = 0; i < 1000001; i++) {
    sum += shots[i];
  }
  cout << sum;
  return 0;

}
