#include <bits/stdc++.h>
#define int long long int
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
using str = std::string;
typedef std::vector<int> vi;
template <typename _A, typename _B>
using umap = unordered_map<_A, _B>;
template <typename _A>
using uset = unordered_set<_A>;
template <typename T>
using v = vector<T>;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vll = v<ll>;
using ii = std::pair<int, int>;
using iii = std::tuple<int, int, int>;

template <typename T>
void RD_VC(v<T> &a, int n) {
    a.resize(n);
    REP (i, n)
        RD(a[i]);
}

auto solve(str s, int k) {
    int n = s.length();
    vi ps(n + 1);
    ps[0] = 0;
    REP3 (i, 1, n + 1) {
        ps[i] = ps[i - 1];
        ps[i] += s[i - 1] - '0';
    }
    int elems = n - k + 1;
    int cnt = 0;
    REP (dig, k) {
        if ((ps[dig + elems] - ps[dig]) % 2 == 1) cnt++;
    }
    return cnt;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    std::cin >> a;
    while(a--) {
        str s;
        int n, k;
        cin >> n >> k;
        cin >> s;
        cout << solve(s, k) << endl;
    }
    return 0;
}
