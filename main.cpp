#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <utility>
#include <string>
#include <math.h>
#include <unordered_set>
#include <unordered_map>
#include <climits>
#include <numeric>
using namespace std;
 
// input
template<class A> void read(vector<A>& v) {
	for (auto& x : v) cin >> x;
}
// debug
template <class c> struct rge { c b, e; };
template <class c> rge<c> range(c i, c j) { return rge<c> {i, j}; }
template <class c> auto dud(c* x) -> decltype(cout << *x, 0);
template <class c> char dud(...);
struct debug {
	~debug() { cout << endl; }
	template <class c> typename enable_if < sizeof dud<c>(0) != 1, debug& >::type operator<<(c i) { cout << boolalpha << i; return * this; }
	template <class c> typename enable_if<sizeof dud<c>(0) == 1, debug&>::type operator<<(c i) { return * this << range(begin(i), end(i)); }
	template <class c, class b> debug & operator << (pair < b, c > d) { return * this << "(" << d.first << ", " << d.second << ")"; }
	template <class c> debug & operator <<(rge<c> d) { *this << "["; for (auto it = d.b; it != d.e; ++it) *this << ", " + 2 * (it == d.b) << *it; return * this << "]";}
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define dbg(x) debug() << imie(x);
// macros
#define FASTIO() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define REP(n) for(int _ = 0; _ < n; _++)
#define ALL(x) x.begin(), x.end()
#define LEN(x) ((int) x.length())
#define SZ(x) ((int) x.size())
#define PB push_back
#define EB emplace_back
#define UM unordered_map
#define US unordered_set
#define LL long long
// constants
const long MOD = 1000000007;
 
struct hash_pair {
	template <class T1, class T2>
	size_t operator()(const pair<T1, T2>& p) const {auto hash1 = hash<T1> {}(p.first); auto hash2 = hash<T2> {}(p.second); return hash1 ^ hash2;}
};
 
// template <typename T>
// void judge(int t, T ans) {
// 	cout << "Case #" << t << ": " << ans << endl;
// }


int main() {
	
}