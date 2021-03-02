//Har Har Mahadev
using namespace std;
#include <bits/stdc++.h>
#define booga cout << "booga" << endl
#define ll long long int
#define pb push_back
#define mp make_pair
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

template <typename A, typename B>
	string to_string(pair<A, B> p);
 
template <typename A, typename B, typename C>
	string to_string(tuple<A, B, C> p);
 
template <typename A, typename B, typename C, typename D>
	string to_string(tuple<A, B, C, D> p);
 
string to_string(const string& s) {
	return '"' + s + '"';
}

string to_string(char c) {
	string s;
	s += c;
	return s;
}

string to_string(const char* s) {
	return to_string((string) s);
}
 
string to_string(bool b) {
	return (b ? "true" : "false");
}
 
string to_string(vector<bool> v) {
	bool first = true;
	string res = "{";
	for (int i = 0; i < static_cast<int>(v.size()); i++) {
	if (!first) {
		res += ", ";
	}
	first = false;
	res += to_string(v[i]);
	}
	res += "}";
	return res;
}
 
template <size_t N>
string to_string(bitset<N> v) {
	string res = "";
	for (size_t i = 0; i < N; i++) {
		res += static_cast<char>('0' + v[i]);
	}
	return res;
}
 
template <typename A>
string to_string(A v) {
	bool first = true;
	string res = "{";
	for (const auto &x : v) {
		if (!first) {
			res += ", ";
		}
		first = false;
		res += to_string(x);
	}
	res += "}";
	return res;
}
 
template <typename A, typename B>
string to_string(pair<A, B> p) {
	return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
 
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
	return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
 
template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
	return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}
 
void debug_out() { cerr << endl; }
 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}
ofstream myfile;


void testcase(){
	int n = (rand() % 10),m = rand() % 15;
	//int n = 5,m = 6;
	cout << m << " " << n << endl;
	vector<int> a,b;
	set<int> all;
	multiset<int> yet;
	for(int i = 0; i < m; i++){
		int x = rand() % 102;
		a.pb(x);
		all.insert(x);
		yet.insert(x);
	}
	for(int i = 0; i < n; i++){
		int x = rand() % 104;
		b.pb(x);
		all.insert(x);
		yet.insert(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	for(int i = 0; i < m; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
	int siz;
	cin >> siz;
	assert(siz == (int)all.size());
	for(int i = 0; i < siz; i++){
		int x;
		cin >> x;
		assert(yet.count(x) != 0);
		yet.erase(yet.find(x));
	}
	
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	myfile.open("test_details.txt");
	int t = 1;
	while(t--){
		testcase();
	}
	return 0;
}
//python croupier.py "./A" "./test"
