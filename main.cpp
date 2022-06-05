#include <bits/stdc++.h>
using namespace std;
#define n_l '\n'
#define dbg(...) cout << "[" << #__VA_ARGS__ << "]: "; cout << to_string(__VA_ARGS__) << endl
template <typename T, size_t N> int SIZE(const T (&t)[N]){ return N; } template<typename T> int SIZE(const T &t){ return t.size(); } string to_string(const string s, int x1=0, int x2=1e9){ return '"' + ((x1 < s.size()) ? s.substr(x1, x2-x1+1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } string to_string(const char c){ return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1=0, int x2=1e9){ string t = ""; for(int __iii__ = min(x1,SIZE(b)),  __jjj__ = min(x2, SIZE(b)-1); __iii__ <= __jjj__; ++__iii__){ t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1=0, int x2=1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if(l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2-x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if(e != l){ if(rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else{ t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if(l_v_l_v_l == 0) res += n_l; return res; } void dbgm(){;} template<typename Heads, typename... Tails> void dbgm(Heads H, Tails... T){ cout << to_string(H) << " | "; dbgm(T...); } 
#define dbgm(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cout << endl

template<typename...T>
void read(T&... args)
{
  ((cin>>args), ...);
}

template<typename...T>
void write(T... args)
{
  ((cout<<args), ...);
}

#define ll long long int
#define ull unsigned long long int
#define input for(long long i=0;i<n;i++)
#define output for(long long i=0;i<n;i++)cout<<a[i]<<" "
#define vll vector<long long>
#define sll set<long long>
#define pll pair<long long,long long>
#define pb push_back
#define mp make_pair
#define ump unordered_map<ll,ll> 
#define ummp unordered_multimap<<ll,ll> 
#define F first
#define S second 
#define vvll vector<vector<ll>>
#define vpll vector<pair<ll,ll>>
#define vsll vector<sll>
#define pq priority_queue<ll>
#define min_pq priority_queue<ll,vll,greater<ll>>
#define PI 3.1415926535897932384626
#define lb lower_bound
#define ub upper_bound
#define sasc sort(a.begin(),a.end())
#define rasc sort(a.begin(),a.end(),greater<>())
#define mpl map<ll,ll> 
#define mpc map<char,ll>
#define fo(i,k,n,inc) for(i=k;i<n;i+=inc)
#define FO(i,k,n,dec) for(i=k;i>=n;i+=dec)
#define all(x) auto it=x.begin();it!=x.end();it++
#define sortall(x) sort(x.begin(),x.end())
const ull modulo=1e9+7;

long long expo(int base, int exp) {
  base %= modulo;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % modulo;
    base = ((ll)base * base) % modulo;
    exp >>= 1;
  }
  return result;
}




int32_t main()
{
    ios_base::sync_with_stdio(false);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cin.tie(NULL);

    int t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        ll n,m,i,j,count=0,x,ans=0,c1=0,c2=0,y,kk;
        bool flag=true;
        vll a,b;
        string s;
        
        cout<<endl;
    }
    return 0;
}

