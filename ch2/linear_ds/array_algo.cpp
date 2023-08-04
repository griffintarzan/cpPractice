#include <bits/stdc++.h>
using namespace std;

typedef struct {
  int id;
  int solved;
  int penalty;
} team;

bool icpc_cmp(team a, team b) {
  if (a.solved != b.solved) // can use this primary field to decide sorted order
    return a.solved > b.solved;   // sort by descending number of problem solved
  else if (a.penalty != b.penalty)       // a.solved == b.solved, but we can use
                                       // secondary field to decide sorted order
    return a.penalty < b.penalty;       // sort by increasing penalty
  else                        // a.solved == b.solved AND a.penalty == b.penalty
    return a.id < b.id;                      // sort by increasing team ID order
}

int main() {
  int arr[] = {10, 7, 2, 15, 4};
  vector<int> v(arr, arr+5);                     // alternative constructor

  // sort descending with vector
  cout << "Sorting the array {10, 7, 2, 15, 4}"<<"\n";
  sort(v.rbegin(), v.rend());                    // reverse iterator
  for (auto val : v)
    cout << val << " ";                          // access the values
  cout << "\n";
  cout << "==================\n";

  // sort descending with integer array
  sort(arr, arr+5);                              // ascending
  reverse(arr, arr+5);                           // then reverse
  for (int i = 0; i < 5; ++i)
    cout << arr[i] << " ";
  cout << "\n";
  printf("==================\n");

  random_shuffle(v.begin(), v.end()); // shuffle the content
  //shuffle(v.begin(), v.end(), default_random_engine());
  for (auto val : v)
    cout << val << " ";
  printf("\n");
  printf("==================\n");
  
  partial_sort(v.begin(), v.begin()+3, v.end()); // partial_sort from [0, 3)
  for (auto &val : v)
    printf("%d ", val);
  printf("\n");
  printf("==================\n");

  // sort ascending
  sort(arr, arr+5);                              // arr is sorted now
  for (int i = 0; i < 5; ++i)                    // 2, 4, 7, 10, 15
    printf("%d ", arr[i]);
  printf("\n");
  sort(v.begin(), v.end());                      // sort a vector
  for (auto &val : v)                            // 2, 4, 7, 10, 15 too
    printf("%d ", val);
  printf("\n");
  printf("==================\n");

  // multi-field sorting example, suppose we have 4 ICPC teams from Purdue
  vector<team> purdue;
  purdue.push_back(team {1, 1, 10});
  purdue.push_back(team {2, 2, 10});
  purdue.push_back(team {3, 2, 11});
  purdue.push_back(team {4, 1, 10});

  //without sorting
  for (auto it : purdue) {
    cout << "ID: " << it.id << " solved: " << it.solved << " penalty: "<<it.penalty << "\n";
  }

  //with sorting
  cout << "After Sorting: "<<"\n";
  sort(purdue.begin(), purdue.end(), icpc_cmp);
  for (auto it : purdue) {
    cout << "ID: " << it.id << " solved: " << it.solved << " penalty: "<<it.penalty << "\n";
  }
  printf("==================\n");

  // there is a technique for multi-field sorting if the sort order is "standard"
  // use pair (for 2 fields) or tuple (for >= 3 fields) in C++ and put the highest priority in front
  typedef tuple<int, string, string> state;
  state a = make_tuple(10, "steven", "grace");   // old way
  state b = {7, "steven", "halim"};              // C++17 way
  state c = {7, "steven", "felix"};
  state d = {9, "a", "b"};
  vector<state> test;
  test.push_back(a);
  test.push_back(b);
  test.push_back(c);
  test.push_back(d);
  for (auto &[value, name1, name2] : test)
    printf("value: %d, name1 = %s, name2 = %s\n", value, name1.c_str(), name2.c_str());
  printf("==================\n");
  sort(test.begin(), test.end());                // use built-in comparator
  // sorted ascending based on value, then based on name1,
  // then based on name2, in that order!
  for (auto &[value, name1, name2] : test)
    printf("value: %d, name1 = %s, name2 = %s\n", value, name1.c_str(), name2.c_str());
  printf("==================\n");

  // binary search using lower bound
  // you can also use find()
  auto pos = lower_bound(arr, arr+5, 7);         // found
  printf("%d\n", *pos);
  auto j = lower_bound(v.begin(), v.end(), 7);
  printf("%d\n", *j);

  pos = lower_bound(arr, arr+5, 77);             // not found
  if (pos-arr == 5) // arr is of size 5 ->
                    //    arr[0], arr[1], arr[2], arr[3], arr[4]
                    // if lower_bound cannot find the required value,
                    //   it will set return arr index +1 of arr size, i.e.
                    //   the 'non existent' arr[5]
                    // thus, testing whether pos - arr == 5 blocks
                    //   can detect this "not found" issue
    printf("77 not found\n");
  j = lower_bound(v.begin(), v.end(), 77);
  if (j == v.end()) // with vector, lower_bound will do the same:
                    //   return vector index +1 of vector size
                    // but this is exactly the position of vector.end()
                    //   so we can test "not found" this way
    printf("77 not found\n");
  printf("==================\n");

  // useful if you want to generate permutations of set
  next_permutation(arr, arr+5); // 2, 4, 7, 10, 15 -> 2, 4, 7, 15, 10
  next_permutation(arr, arr+5); // 2, 4, 7, 15, 10 -> 2, 4, 10, 7, 15
  for (int i = 0; i < 5; ++i)
    printf("%d ", arr[i]);
  printf("\n");

  next_permutation(v.begin(), v.end());
  next_permutation(v.begin(), v.end());
  for (auto &val : v)
    printf("%d ", val);
  printf("\n");
  printf("==================\n");

  // sometimes these two useful simple macros are used
  printf("min(10, 7) = %d\n", min(10, 7));
  printf("max(10, 7) = %d\n", max(10, 7));

  
  return 0;
}
