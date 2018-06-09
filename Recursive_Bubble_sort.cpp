//Sreejith
//09-06-2018
//Rescursive Bubble sort

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void bubblesort(vector < ll >& v,ll n);
int main()
 {  
	 ll n,b;
	 cin>>n;
	 vector < ll > v(n);
	 for ( ll i = 0  ; i < n ; i++ )
		{
			cin>>b;
			v[i]=b;
		}
	 bubblesort(v,n-1);
	 
	 cout<<"After sorting "<<endl;
	 
	 for( ll i = 0 ; i < n ; i++ )
	 {
		 cout<<v[i]<<" ";
	 }	 
 }
void bubblesort(vector < ll >& v,ll n)
{
	if(n==1)
		return;
		
	for(ll i = 0 ; i < n-1 ; i++ )
		if(v[i]>v[i+1])
			swap(v[i],v[i+1]);
			
	bubblesort(v,n-1); //As the return type is void should not use return fn call
}
