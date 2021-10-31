#include <bits/stdc++.h> 
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define deb(x) cerr<<#x<<' '<<'='<<' '<<x<<'\n'
using namespace std;

const ll maxn = 1e5;
const ll inf = 1e9;
const double pi = acos(-1);

void solve(){
ll n;
cin>>n;
ll a[n+1];
ll b[n+1];
ll t[n+1];

for(ll i=1;i<=n;i++){
    cin>>a[i]>>b[i];
}
for(ll i=1;i<=n;i++){
    cin>>t[i];
}
ll curr=a[1]+t[1];
for( ll i=1;i<n;i++){
    ll k=ceil((b[i]-a[i])/(2*1.0));
    curr+=k;
    if(curr>=b[i]){
        curr+=(a[i+1]-b[i]+t[i+1]);
    }else{
        ll diff=b[i]-curr;
        curr+=diff;
        curr+=(a[i+1]-b[i]+t[i+1]);
    }
}
cout<<curr<<endl;



}

int main(){
    FAST
   int t = 0;
   cin >> t;
   while(t--){
       solve();
   }
   return 0;
}