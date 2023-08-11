#include <bits/stdc++.h>

using namespace std;

int main() {

  int N;
  cin >> N;
  int g;
  int count = 0;
  int max = 0;
  vector < int > GIS;
  for (int i = 0; i < N; i++) {
    cin >> g;
    if (g > max) {
      GIS.push_back(g);
      count++;
      max = g;
    }
  }
  cout << count << "\n";
  cout << GIS[0];
  for (int i = 1; i < count; i++) {
    cout << " " << GIS[i];
  }

  return 0;

}
