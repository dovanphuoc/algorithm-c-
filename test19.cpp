#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define eb emplace_back
#define all(x) (x.begin()), x.end()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int main() {
	fastio();
	int n; cin >> n;
	vector<string> v(n);
	vector<pair<string, int>> v1;
	map<int, int> mp;
	for (int i = 0; i < (int)v.size(); ++i)
		cin >> v[i];
	for (int i = 0; i < (int)v.size(); ++i) {
		v1.emplace_back(v[i], v[i].size());
	}
	for (auto it : v1) {
		mp[it.second]++;
	}
	int ma = INT_MIN, res = -1;
	for (auto it : mp) {
		ma = max(ma, it.second);
	}
	for (auto it : mp) {
		if (it.second == ma) {
			res = it.first;
			break;
		}
	}
	for (int i = 0; i < (int)v1.size(); i++) {
		if (v1[i].second == res) {
			cout << v1[i].first << ' ';
		}
	}
}