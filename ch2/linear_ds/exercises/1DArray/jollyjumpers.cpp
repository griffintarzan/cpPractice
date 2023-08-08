#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  while (cin >> n){
    vector<int> seq;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x; 
      seq.push_back(x);
    }
    vector<bool> jolly(n-1);
    for (int i = 0; i < n-1; i++) {
      if (abs(seq[i] - seq[i+1]) >=1 && abs(seq[i]-seq[i+1]) < n) {
        jolly[abs(seq[i]-seq[i+1])-1] = true;
      }
    }
    bool res = true;

    for (auto it : jolly) {
      if (it == false) {
        res = false;
          break;
        }
      }
    if (res == true) {
      cout << "Jolly";
    } else {
      cout << "Not jolly";
    }
    cout << "\n";
  }

}
