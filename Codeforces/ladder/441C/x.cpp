#include <bits/stdc++.h>
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

auto solve(int a, int b, int k) {
  // generate the zig zag pattern
  v<pair<int, int>> zz;
  for (int i = 1; i <= a; i++) {
    if (i % 2 == 1) {
      for (int j = 1; j <= b; j++) {
        zz.PB({i, j});
      }
    } else {
      for (int j = b; j >= 1; j--) {
        zz.PB({i, j});
      }
    }
  }

  int i = 0;
  REP(_, k - 1) {
    cout << 2 << ' ';
    REP(_, 2) {
      cout << zz[i].first << ' ' << zz[i].second << ' ';
      i++;
    }
    cout LN;
  }
  cout << zz.size() - i << ' ';
  REP3(j, i, zz.size()) { cout << zz[j].first << ' ' << zz[j].second << ' '; }
  cout LN;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t a, b, c;
  std::cin >> a >> b >> c;
  solve(a, b, c);
  return 0;
}
