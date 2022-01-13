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

int64_t solve(int64_t n, int64_t p, std::string c) {
  int mn = INT_MAX;
  int mx = INT_MIN;
  p = min(p - 1, n - p);
  int op = 0;
  for (int i = 0; i < n / 2; i++) {
    if (c[i] != c[n - i - 1]) {
      int diff = abs(c[i] - c[n - i - 1]);
      op += min(diff, 26 - diff);
      mn = min(mn, i);
      mx = max(mx, i);
    }
  }

  if (op == 0) {
    return 0;
  }
  int mnpdiff = abs(p - mn);
  int mxpdiff = abs(p - mx);
  if (p > mn && p < mx) {
    op += mnpdiff + mxpdiff + min(mnpdiff, mxpdiff);
  } else {
    op += max(mnpdiff, mxpdiff);
  }
  return op;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int64_t a, b;
  std::string c;
  std::cin >> a >> b >> c;
  auto ans = solve(a, b, c);
  std::cout << ans << '\n';
  return 0;
}
