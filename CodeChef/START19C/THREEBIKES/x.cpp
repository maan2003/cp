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
template <typename _A, typename _B>
using umap = unordered_map<_A, _B>;
template <typename T>
using v = vector<T>;

template <typename T>
void RD_VC(v<T> &a, int n) {}

auto solve(int a, const std::vector<int64_t> &b, const std::vector<std::vector<int64_t> > &c) {

    // TODO: edit here
}

// generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a;
    std::cin >> a;
    std::vector<int64_t> b(a);
    std::vector<std::vector<int64_t> > c(a, std::vector<int64_t>((b_i)));
    REP (i, a) {
        std::cin >> b[i];
        REP (j, b_i) { std::cin >> c[i][j]; }
    }
    auto ans = solve(a, b, c);
    std::cout << n << '\n';
    REP (i, n) { std::cout << a1[i] << '\n'; }
    return 0;
}
