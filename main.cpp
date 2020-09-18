#include <bits/stdc++.h>
using namespace std;

// debug
template < class c > struct rge { c b, e; };
template < class c > rge<c> range(c i, c j) { return rge<c> {i, j}; }
template < class c > auto dud(c* x) -> decltype(cerr << *x, 0);
template < class c > char dud(...);
struct debug {
	~debug() { cerr << endl; }
	template < class c > typename \
	enable_if < sizeof dud<c>(0) != 1, debug& >::type operator<<(c i) {
		cerr << boolalpha << i;
		return * this;
	}
	template < class c > typename \
	enable_if<sizeof dud<c>(0) == 1, debug&>::type operator<<(c i) {
		return * this << range(begin(i), end(i));
	}
	template < class c, class b > debug & operator << (pair < b, c > d) {
		return * this << "(" << d.first << ", " << d.second << ")";
	}
	template < class c > debug & operator <<(rge<c> d) {
		*this << "[";
		for (auto it = d.b; it != d.e; ++it)
			*this << ", " + 2 * (it == d.b) << *it;
		return * this << "]";
	}
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
#define DEBUG(x) cerr << #x << ": " << x << endl;
// macros
#define FASTIO() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(n) for(int _ = 0; _ < n; _++)
#define forn(i, a, b, x) for(int i = a; i != b; i += x)
#define iter(it, target) for(auto it = target.begin(); it != target.end(); it++)
#define all(x) x.begin(), x.end()
#define sz(x) ((int) x.size())
#define um unordered_map
#define us unordered_set
// constants
const long MOD = 1000000007;

int main() {

}
