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

int solve(int n, int k, string &s) {
  int ans = 0;
  int free = 0;

  REP(i, n) {
    if (s[i] == '0') {
      free++;
      if (free == k) {
        ans++;
        free = 0;
      }
    } else if (s[i == '1']) {
      free = 0;
    }
  }
  return ans;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int a;
  std::cin >> a;
  REP(i, a) {
    int n, k;
    std::cin >> n >> k;
    string schedule;
    cin >> schedule;
    SH solve(n, k, schedule) LN;
  }
  return 0;
}
