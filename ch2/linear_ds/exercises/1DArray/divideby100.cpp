#include <bits/stdc++.h>

using namespace std;

int main() {
  string N, M;
  cin >> N >> M;
  int move = M.size() - 1;
  bool noDot = true;
  int trailingCnt = 0;
  if (move >= N.size()) {
    string leading = "0.";
    for (int i = 0; i < move - N.size(); i++) {
      leading += "0";
    }
    for (int i = N.size() - 1; i >= 0; i--) {
      if (N[i] != '0') {
        break;
      }
      trailingCnt++;
    }
    cout << leading + N.substr(0, N.size() - trailingCnt);
  } else {
    string b = N.substr(N.size() - move);
    string a = N.substr(0, N.size() - move);
    string dot = ".";
    for (int i = b.size() - 1; i >= 0; i--) {
      if (b[i] != '0') {
        noDot = false;
        break;
      }
      trailingCnt++;
    }
    if (noDot) {
      // When past the dot is all zeros. ex: 123.0000
      cout << a + b.substr(0, b.size() - trailingCnt);
    } else {
      cout << a + dot + b.substr(0, b.size() - trailingCnt);
    }

  }
  return 0;
}
