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

auto solve(int n, const std::vector<int64_t> &a) {
  for (int x : a) {
    int ans = 1;
    for (int i = 2; i <= x; ++i) {
      ans *= i;
    }
    cout << ans << endl;
  }
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  // failed to analyze input format
  // TODO: edit here
  int n;
  std::cin >> n;
  std::vector<int64_t> a(n);
  REP(i, n) { std::cin >> a[i]; }
  solve(n, a);
  return 0;
}
