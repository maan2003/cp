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

struct Graph {
  int n;
  v<vi> adj;
};

auto solve(int n, int c1, int c2, int c3, v<pair<int, int>> &edges) {
  Graph g;
  g.n = n;
  for (int i = 0; i < n + 1; i++) {
    g.adj.PB(vi());
  }

  for (auto &p : edges) {
    g.adj[p.first].PB(p.second);
    g.adj[p.second].PB(p.first);
  }

  int tg = n;
  int ml = 1;
  int fl = 2;

  vi mdist(n + 1, INT_MAX);
  vi fdist(n + 1, INT_MAX);
  vi tgdist(n + 1, INT_MAX);

  mdist[ml] = 0;
  fdist[fl] = 0;
  tgdist[tg] = 0;

  // BFS
  {

    // ml first
    queue<int> q;
    q.push(ml);
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto &v : g.adj[u]) {
        if (mdist[v] == INT_MAX) {
          mdist[v] = mdist[u] + 1;
          // first visited
          q.push(v);
        }
      }
    }
  }

  {
    // fl
    queue<int> q;
    q.push(fl);
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto &v : g.adj[u]) {
        if (fdist[v] == INT_MAX) {
          fdist[v] = fdist[u] + 1;
          // first visited
          q.push(v);
        }
      }
    }
  }
  {
    // tg
    queue<int> q;
    q.push(tg);
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto &v : g.adj[u]) {
        if (tgdist[v] == INT_MAX) {
          tgdist[v] = tgdist[u] + 1;
          // first visited
          q.push(v);
        }
      }
    }
  }

  int dist = INT_MAX;

  for (int i = 1; i <= n; i++) {
    // assume they meet at i
    int md = mdist[i];
    int fd = fdist[i];
    int td = tgdist[i];

    if (md == INT_MAX || fd == INT_MAX || td == INT_MAX)
      continue;

    if (md * c1 + fd * c2 + td * c3 < dist)
      dist = md * c1 + fd * c2 + td * c3;
  }
  return dist;
}

// generated by oj-template v4.8.1
// (https://github.com/online-judge-tools/template-generator)
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n, m, c1, c2, c3;
  cin >> c1 >> c2 >> c3 >> n >> m;
  v<pair<int, int>> edges;
  REP(i, m) {
    int u, v;
    cin >> u >> v;
    edges.PB({u, v});
  }
  cout << solve(n, c1, c2, c3, edges) LN;
  return 0;
}
