#include <bits/stdc++.h>
#include <unordered_set>
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

int solve(vi &a) {
  unordered_set<int> s;
  int n = a.size();
  REP(i, a.size()) { s.insert(i + 1); }
  REP(i, a.size()) {
    if (s.find(a[i]) == s.end()) {
      // if it was already removed
      // let it be in a
    } else {
      int val = a[i];
      swap(a[i], a[a.size() - 1]);
      a.pop_back();
      s.erase(val);
      i--;
    }
  }

  sort(a.begin(), a.end());
  int j = 0;
  for (int i = 1; i <= n; i++) {
    // if i is found, i.e. not found in a
    if (s.find(i) == s.end())
      continue;

    if (a[j] - i <= i) {
      return -1;
    }

    j++;
  }
  return j;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi a(n);
    REP(i, n) { cin >> a[i]; }
    cout << solve(a) LN;
  }
  return 0;
}
