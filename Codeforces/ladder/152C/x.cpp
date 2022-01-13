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

constexpr int64_t MOD = 1000000007;
int64_t solve(int n, int64_t m, const std::vector<std::string> &a) {
  int64_t ans = 1;
  unordered_set<int> s;
  for (int i = 0; i < m; i++) {
    for (const auto &c : a) {
      s.insert(c[i]);
    }
    int64_t diff = s.size();
    ans = (ans * diff) % MOD;
    s.clear();
  }
  return ans;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  int64_t k;
  std::cin >> n;
  std::vector<std::string> a(n);
  std::cin >> k;
  REP(i, n) { std::cin >> a[i]; }
  auto ans = solve(n, k, a);
  std::cout << ans << '\n';
  return 0;
}
