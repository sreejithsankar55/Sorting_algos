#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
using namespace std;
void fast(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main()
{	
   fast();
   ll n,b,j=0,k;
   cin>>n;
   k=n-1;
   vector < ll > v;
   for ( ll i = 0 ; i < n ; i++ )
   {
	   cin>>b;
	   v.pb(b);
	   
   }
   while(j<k)
   {
	   if(v[j]==1&&v[k]==0)
	   {
		   swap(v[j],v[k]);
		   j++;
		   k--;
	   }
	   else if(v[j]==v[k])
	   {
		   if(v[j]==1)
		   k--;
		   else
		   j++;
	   }
	   else
	   {
		   j++;
		   k--;
	   }
	   
   }
   for ( ll i = 0 ; i < n ; i++ )
   {
	   cout<<v[i]<<" ";
   }
   return 0;     
 } 	   
