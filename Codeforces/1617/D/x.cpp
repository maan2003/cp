#include <bits/stdc++.h>
#include <vector>
#define REP(i, n) for (int i = 0; (i) < (int)(n); ++(i))
#define REP3(i, m, n) for (int i = (m); (i) < (int)(n); ++(i))
#define REP_R(i, n) for (int i = (int)(n)-1; (i) >= 0; --(i))
#define REP3R(i, m, n) for (int i = (int)(n)-1; (i) >= (int)(m); --(i))
#define PB push_back
#define SH std::cout <<
#define LN << '\n'
#define RD std::cin >>
#define va std::vector<auto>

using namespace std;
typedef std::vector<int> vi;
template <typename _A, typename _B> using umap = unordered_map<_A, _B>;
template <typename T> using v = vector<T>;

template <typename T> void RD_VC(v<T> &a, int n) {}

auto solve(int n) {
  vector<int> a(n + 1, -1);
  bool all_ones = true;
  bool all_zeros = true;
  for (int i = 3; i <= n; i++) {
    cout << "? 1 2" << i << endl;
    int x;
    cin >> x;
    if (x == 0) {
      all_zeros = false;
      a[i] = 1;
    } else if (x == 1) {
      all_ones = false;
      a[i] = 0;
    } else {
      abort();
    }
  }
  if (all_zeros) {
    a[1] = 0;
    a[2] = 0;
  } else if (all_ones) {
    a[1] = 1;
    a[2] = 1;
  } else {
      
  }
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int testcases;
  std::cin >> testcases;
  while (testcases--) {
    int n;
    cin >> n;
    solve(n);
  }
  return 0;
}
