#include <bits/stdc++.h>

using namespace std;
int main() {
  int C;
  cin >> C;
  for (int i = 0; i < C; i++) {
    set < int > solved1;
    set < int > solved2;
    set < int > solved3;
    multiset < int > solved_all;
    for (int j = 0; j < 3; j++) {
      int S;
      cin >> S;
      for (int k = 0; k < S; k++) {
        int s;
        cin >> s;
        solved_all.insert(s);
        if (j == 0) {
          solved1.insert(s);
        } else if (j == 1) {
          solved2.insert(s);
        } else {
          solved3.insert(s);
        }
      }
    }
    for (auto it = solved1.begin(); it != solved1.end();) {
      if (solved_all.count( * it) > 1) {
        it = solved1.erase(it);
      } else {
        ++it;
      }
    }
    for (auto it = solved2.begin(); it != solved2.end();) {
      if (solved_all.count( * it) > 1) {
        it = solved2.erase(it);
      } else {
        ++it;
      }
    }
    for (auto it = solved3.begin(); it != solved3.end();) {
      if (solved_all.count( * it) > 1) {
        it = solved3.erase(it);
      } else {
        ++it;
      }
    }

    cout << "Case #" << i + 1 << ":\n";
    if (solved1.size() == solved2.size() && solved1.size() == solved3.size()) {
      cout << "1 " << solved1.size();
      for (auto it: solved1) {
        cout << " " << it;
      }
      cout << "\n";

      cout << "2 " << solved2.size();
      for (auto it: solved2) {
        cout << " " << it;
      }
      cout << "\n";
      cout << "3 " << solved3.size();
      for (auto it: solved3) {
        cout << " " << it;
      }
      cout << "\n";
    } else if (solved1.size() == solved2.size() && solved1.size() > solved3.size()) {
      cout << "1 " << solved1.size();
      for (auto it: solved1) {
        cout << " " << it;
      }
      cout << "\n";

      cout << "2 " << solved2.size();
      for (auto it: solved2) {
        cout << " " << it;
      }
      cout << "\n";
    } else if (solved1.size() == solved3.size() && solved1.size() > solved2.size()) {
      cout << "1 " << solved1.size();
      for (auto it: solved1) {
        cout << " " << it;
      }
      cout << "\n";

      cout << "3 " << solved3.size();
      for (auto it: solved3) {
        cout << " " << it;
      }
      cout << "\n";
    } else if (solved2.size() == solved3.size() && solved2.size() > solved1.size()) {
      cout << "2 " << solved2.size();
      for (auto it: solved2) {
        cout << " " << it;
      }
      cout << "\n";

      cout << "3 " << solved3.size();
      for (auto it: solved3) {
        cout << " " << it;
      }
      cout << "\n";
    } else {
      if (solved1.size() > solved2.size() && solved1.size() > solved3.size()) {
        cout << "1 " << solved1.size();
        for (auto it: solved1) {
          cout << " " << it;
        }
      } else if (solved2.size() > solved1.size() && solved2.size() > solved3.size()) {
        cout << "2 " << solved2.size();
        for (auto it: solved2) {
          cout << " " << it;
        }
      } else {
        cout << "3 " << solved3.size();
        for (auto it: solved3) {
          cout << " " << it;
        }
      }
      cout << "\n";
    }
  }
  return 0;

}
