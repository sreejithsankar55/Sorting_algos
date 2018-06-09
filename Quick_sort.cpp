//Sreejith
//09-06-1999
//Quick_sort

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void quicksort(vector < ll >& v,ll low,ll high);
ll partition(vector < ll > & v,ll low,ll high);
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
	 quicksort(v,0,n-1);
	 
	 cout<<"After sorting"<<endl;
	 
	 for ( ll i = 0 ; i < n ; i++ )
	 {
		 cout<<v[i]<<" ";
	 }
  
     return 0;
          
 } 	
void quicksort(vector < ll >& v,ll low,ll high)
{
	
	if( low < high )
	{
		ll p=partition(v,low,high);
		quicksort(v,low,p-1);
		quicksort(v,p+1,high);
		
	}

}
ll partition(vector < ll >& v,ll low,ll high)
{
	ll pivot=v[high];
	ll i=low-1;
	
	for(ll j = low ; j <= high-1  ; j++ )
	{
		if(v[j]<=pivot)
		{
			i++;
			swap(v[j],v[i]);
		}
	}
	
	swap(v[i+1],v[high]); //Should not use swap(v[i+1],pivot);
	return (i+1);
}
	
