#include <bits/stdc++.h>
#define TEST_CASES                                                             \
  int __t;                                                                     \
  cin >> __t;                                                                  \
  while (__t--)

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
using i64 = int64_t;
typedef std::vector<int> vi;
template <typename _A, typename _B> using umap = unordered_map<_A, _B>;
template <typename T> using v = vector<T>;

template <typename T> void RD_VC(v<T> &a, int n) {}

i64 cache[1000][1000];

i64 do_it_max(int m, int s) {
  if (s < 0)
    return -1;

  if (s == 0)
    return m == 0 ? 0 : -1;

  if (m < 0)
    return -1;

  if (cache[m][s] != -1)
    return cache[m][s];

  for (int i = min(m, 9); i >= 0; i--) {
    i64 r = do_it_max(m - i, s - 1);
    if (r != -1) {
      // this will be the minimum
      return cache[m][s] = i * pow(10, s - 1) + r;
    }
  }
  return -1;
}

i64 do_it(int m, int s) {
  if (s < 0)
    return -1;

  if (s == 0)
    return m == 0 ? 0 : -1;

  if (m < 0)
    return -1;
  if (cache[m][s] != -1)
    return cache[m][s];

  for (int i = 0; i <= m && i <= 9; i++) {
    i64 r = do_it(m - i, s - 1);
    if (r != -1) {
      // this will be the minimum
      return cache[m][s] = i * pow(10, s - 1) + r;
    }
  }
  return -1;
}

i64 solve_min(int a, int b) {
  REP(i, 1000) {
    REP(j, 1000) { cache[i][j] = -1; }
  }
  // we don't need 0 at first digit
  for (int i = 1; i <= 9; i++) {
    i64 r = do_it(b - i, a - 1);
    if (r != -1) {
      return i * pow(10, a - 1) + r;
    }
  }
  return -1;
}

i64 solve_max(int a, int b) {
  REP(i, 1000) {
    REP(j, 1000) { cache[i][j] = -1; }
  }

  // we don't need 0 at first digit
  for (int i = 9; i >= 1; i--) {
    i64 r = do_it_max(b - i, a - 1);
    if (r != -1) {
      return i * pow(10, a - 1) + r;
    }
  }
  return -1;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int a, b;
  cin >> a >> b;

  SH solve_min(a, b) << " " << solve_max(a, b) LN;
  return 0;
}