// Writer: Asif Iqubal
#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define pp pop_back
#define loop(i, a, b) for (int i = a; i < b; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define INF 2e18
int mod = 1000000007;
#define ff first
#define ss second
#define input(vct, n) loop(i, 0, n) cin >> vct[i];
#define output(vct)                      \
  for (auto it : vct) cout << it << " "; \
  cout << "\n";
#define start() \
  int t;        \
  cin >> t;     \
  while (t--)
void speed() {
  cin.tie(nullptr);
  cout.tie(nullptr);
  ios_base::sync_with_stdio(0);
}

int computeXOR(int n) {
  if (n % 4 == 0) return n;
  if (n % 4 == 1) return 1;
  if (n % 4 == 2) return n + 1;
  return 0;
}

bool isPalindrome(string S) {
  string P = S;
  reverse(P.begin(), P.end());
  if (S == P) {
    return true;
  } else {
    return false;
  }
}

int calculateMex(unordered_set<int> st) {
  int value = 0;
  while (st.find(value) != st.end()) value++;
  return (value);
}

string LongestPalindromicPrefix(string str) {
  string temp = str + '?';
  reverse(str.begin(), str.end());
  temp += str;
  int n = temp.length();
  int lps[n];
  fill(lps, lps + n, 0);
  for (int i = 1; i < n; i++) {
    int len = lps[i - 1];
    while (len > 0 && temp[len] != temp[i]) {
      len = lps[len - 1];
    }
    if (temp[i] == temp[len]) {
      len++;
    }
    lps[i] = len;
  }
  return temp.substr(0, lps[n - 1]);
}

int is_prime[1000001];
void seive() {
  int maxi = 1000000;
  for (int i = 1; i <= maxi; i++) is_prime[i] = 1;
  is_prime[0] = 0;
  is_prime[1] = 0;
  for (int i = 2; i * i <= maxi; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= maxi; j = j + i) {
        is_prime[j] = 0;
      }
    }
  }
}

long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}

// can be used to move all -ive element in front of array
void Rearrange(int arr[], int n) {
  stable_partition(arr, arr + n, [](int x) { return x < 0; });
}

// sorting string of numbers
// sort(v.begin(), v.end(), [](const string &a, const string &b) {
// return ((a+b) > (b+a));
// });

// ____
/*--- debuger --- */
void __print(int32_t x) { cerr << x; }
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void __print(const pair<T, V> &x) {
  cerr << '{';
  __print(x.first);
  cerr << ',';
  __print(x.second);
  cerr << '}';
}
template <typename T>
void __print(const T &x) {
  int f = 0;
  cerr << '{';
  for (auto &i : x) cerr << (f++ ? "," : ""), __print(i);
  cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v) {
  __print(t);
  if (sizeof...(v)) cerr << ", ";
  _print(v...);
}

#ifndef ONLINE_JUDGE
#define debug(x...)             \
  cerr << "[" << #x << "] = ["; \
  _print(x)
#else
#define debug(x...)
#endif

// __________________________________________________________________________________________________
// for(auto it: vct)cout<<it<<" ";
// cout<<endl;
void build(int vct[], int low, int high, int orr, int seg[], int ind) {
  if (low == high) {
    seg[ind] = vct[low];
    return;
  }
  int mid = low + high / 2;
  build(vct, low, mid, !orr, seg, 2 * ind);
  build(vct, mid + 1, high, !orr, seg, 2 * ind + 1);
  if (orr)
    seg[ind] = seg[2 * ind] | seg[2 * ind + 1];
  else
    seg[ind] = seg[2 * ind] ^ seg[2 * ind + 1];
}
void update(int vct[], int low, int high, int orr, int seg[], int ind, int i,
            int trget) {
  if (low == high) {
    seg[ind] = trget;
    vct[low] = trget;
    return;
  }
  int mid = low + high / 2;
  if (i <= mid)
    update(vct, low, mid, !orr, seg, 2 * ind, i, trget);
  else
    update(vct, mid + 1, high, !orr, seg, 2 * ind + 1, i, trget);
  if (orr)
    seg[ind] = seg[2 * ind] | seg[2 * ind + 1];
  else
    seg[ind] = seg[2 * ind] ^ seg[2 * ind + 1];
}
void Asif() {
  int n, q;
  cin >> n >> q;
  vi vct(n), vc(q);
  input(vct, n);
  input(vc, q);
  sort(all(vct));

  vi ans;
  for (int i = 0; i < q; i++) {
    int x = upper_bound(all(vct), vc[i]) - vct.begin();
    ans.pb(x);
  }
  output(ans);
}

int32_t main() {
  speed();

  // start() {
  Asif();
  // }
}
