/* template.cpp(shinobu_menkoi) {{{ */
#include <bits/stdc++.h>
using namespace std;

// clang-format off
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define rep(...) GET_MACRO(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rep1(n) rep2(_, n)
#define rep2(i, n) rep3(i, 0, n)
#define rep3(i, a, n) rep4(i, a, n, 1)
#define rep4(i, a, n, s) for (lint i = (a); i < (lint)(n); i += (s))
#define rrep(...) GET_MACRO(__VA_ARGS__, rrep4, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define rrep1(a) rrep2(_, a)
#define rrep2(i, a) rrep3(i, a, 0)
#define rrep3(i, a, n) rrep4(i, a, n, 1)
#define rrep4(i, a, n, s) for (lint i = (a); i >= (lint)(n); i -= (s))
#define each(i, ctn) for (auto &&i : (ctn))

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define all(v) begin(v), end(v)
#define debug(x) cerr << (x) << " (L:" << __LINE__ << ")" << '\n'
#define TEMP_T template <class T>
#define TEMP_TU template <class T, class U>

TEMP_T using vec = vector<T>;
TEMP_T using heap = priority_queue<T>;
TEMP_T using minheap = priority_queue<T, vec<T>, greater<T>>;
using lint = long long;
using ulint = unsigned long long;
using ld = long double;
using vi = vec<int>;
using vvi = vec<vi>;
using vvvi = vec<vvi>;
using pii = pair<int, int>;
using vs = vec<string>;

TEMP_TU ostream &operator<<(ostream &os, const pair<T, U> &p) { return os << p.fi << " " << p.se; }
TEMP_TU istream &operator>>(istream &is, pair<T, U> &p) { return is >> p.fi >> p.se; }

const int INF{1001001001};
const lint LINF{1001001001001001001ll};
const int MOD{(int)1e9 + 7};
const double EPS{1e-9};
const double PI{acos(-1)};
const int dx[]{0, 1, 0, -1, 1, -1, 1, -1}, dy[]{1, 0, -1, 0, 1, -1, -1, 1};

inline bool inside(int y, int x, int h, int w) { return y >= 0 && x >= 0 && y < h && x < w; }
TEMP_T inline bool chmin(T &a, const T &b) { if (a > b) a = b; return a > b; }
TEMP_T inline bool chmax(T &a, const T &b) { if (a < b) a = b; return a < b; }
TEMP_T inline void print(const T &x) { cout << x << '\n'; }
TEMP_T inline void print(const vec<T> &v, string d = "\n") { rep(i, v.size()) cout << v[i] << (i == v.size() - 1 ? "\n" : d); }
template <class T = int> inline T in() { T x; cin >> x; return x; }
template <class T = string> vec<T> split(const string &s, char d = ',') {
  vec<T> v; stringstream ss(s); for (string b; getline(ss, b, d); ) {
    stringstream conv(b); T t; conv >> t; v.eb(t); } return v;
}
struct pre_ { pre_() { cin.tie(nullptr); ios::sync_with_stdio(false); cout << fixed << setprecision(12); } } pre__;
// clang-format on
/* }}} */

signed main() {
  <+CURSOR+>
}
