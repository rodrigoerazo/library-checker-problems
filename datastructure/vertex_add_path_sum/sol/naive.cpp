#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
constexpr ll TEN(int n) { return (n == 0) ? 1 : 10 * TEN(n - 1); }
template <class T> using V = vector<T>;
template <class T> using VV = V<V<T>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;

    assert(ll(n) * q <= TEN(7));

    V<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto g = VV<int>(n);
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    vector<int> depth(n), parent(n);
    auto dfs = [&](auto dfs, int v, int bk) -> void {
        parent[v] = bk;
        for (auto nx: g[v]) {
            if (nx == bk) continue;
            depth[nx] = depth[v] + 1;
            dfs(dfs, nx, v);
        }
    };
    dfs(dfs, 0, -1);

    for (int i = 0; i < q; i++) {
        int ty;
        cin >> ty;
        if (ty == 0) {
            int p; ll x;
            cin >> p >> x;
            a[p] += x;
        } else {
            int u, v;
            cin >> u >> v;
            ll sum = 0;
            while (u != v) {
                if (depth[u] < depth[v]) swap(u, v);
                sum += a[u];
                u = parent[u];
            }
            sum += a[u];
            cout << sum << "\n";
        }
    }
    return 0;
}