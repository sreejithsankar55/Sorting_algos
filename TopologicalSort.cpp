#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define cf cout.flush()
#define INF LLONG_MAX
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
vector < ll > adj[1002];
bool vis[1002]={0};
stack < ll > st;
void topsort(ll v) 
{ 
	vis[v]=true;
	for( auto i : adj[v] )
	{
		if(!vis[i])
			topsort(i);
	}
	st.push(v);
} 
  
int main() {
	
	ll u,v,n,edges;
	cin>>n>>edges;
	for ( ll i = 0 ; i < edges ; i++ )
	{
		cin>>u>>v;
		adj[u].pb(v);		
	}
	for(ll i = 0 ; i < n ; i++)
	{
		if(!vis[i])
			topsort(i);
	}
	while(!st.empty())
	{
		cout<<(ll)st.top()<<" ";
		st.pop();
	}
	
	return 0;
}
