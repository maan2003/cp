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

void solve(int n, int a, int b) {
  switch (a - b) {
  case 0:
  case 1:
  case -1:
    break;
  default:
    cout << "-1";
    return;
  }

  int possible = (n + 1) / 2 - 1;
  if (a > possible || b > possible) {
    cout << "-1";
  }

  int start = 0;
  int need = 0;
  int end = 0;

  if (a == b) {
    start = 2;
    end = n - 1;
    need = a;
    cout << 1 << " ";
  } else if (a > b) {
    start = 3;
    end = n;
    need = a;
    cout << 1 << " " << 2 << " ";
  } else {
    start = 1;
    end = n - 2;
    need = b;
  }
  int i;
  for (i = start + 1; i <= end; i += 2) {
    if (need > 0) {
      cout << i << " ";
      cout << i - 1 << " ";
      need--;
    } else {
      cout << i - 1 << " ";
      cout << i << " ";
    }
  }
  for(; i <= n; i++) {
    cout << i << " ";
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
    int n, a, b;
    std::cin >> n >> a >> b;
    solve(n, a, b);
    cout LN;
  }
  return 0;
}
