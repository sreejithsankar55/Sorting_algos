//Sreejith
//9-6-2018
//Merge Sort
//The following program depicts merge sort using cpp stl
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void mergesort(vector < ll >& v,ll l,ll r);
void merge(vector < ll >& v,ll l,ll m,ll r);
int main()
 {  
	 
	 ll n,b;
	 cin>>n;
	 vector < ll > v(n);
	 for ( ll i = 0 ; i < n ; i++ )
	 {
		 cin>>b;
		 v[i]=b;
	 }
	 mergesort(v,0,n-1);
	 
	 cout<<"After sorting"<<endl;
	 
	 for ( ll i = 0 ; i < n ; i++ )
	 {
		 cout<<v[i]<<" ";
	 }
  
     return 0;
          
 } 	
void mergesort(vector < ll >& v,ll l,ll r)
{
	ll m;
	
	if(l < r)
	{
		
		m=l+(r-l)/2;
		mergesort(v,l,m);
		mergesort(v,m+1,r);
		merge(v,l,m,r);
	}
}
void merge(vector < ll >& v,ll l,ll m,ll r)
{ 
	ll n1,n2;
	n1=m-l+1;
	n2=r-m;
	vector < ll > v1(n1);
	vector < ll > v2(n2);
	for(ll i = 0 ; i < n1 ; i++)
		v1[i]=v[l+i];
	for(ll i = 0 ; i < n2 ; i++)
		v2[i]=v[m+1+i];
	
	ll i=0,j=0,k=l;
	
	while( (i<n1) && (j<n2) )
	{
		if(v1[i]<=v2[j])
			v[k++]=v1[i++];
		else
			v[k++]=v2[j++];
	}
	
	while(i<n1)
		v[k++]=v1[i++];
	while(j<n2)
		v[k++]=v2[j++];
}
	
			

