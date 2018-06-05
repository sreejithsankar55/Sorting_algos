//Sreejith
//5/6/18
//Selection sort

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {	
	  ll n,min_ind;
	  cin>>n;
	  vector < ll > v(n);
	  for ( ll i = 0 ; i < n ; i++ )
	  {
		  cin>>v[i];
	  }
	  for ( ll i = 0 ; i < n-1 ; i++ )
	  {
		  min_ind = i;
		  for ( ll j = i+1 ; j < n ; j++ )
		  {
			  if(v[j] < v[min_ind])
			  min_ind=j;
			  
		  }
		  swap(v[min_ind],v[i]);
	  }
	  cout<<"Array after sorting \n";
	  for ( ll i = 0 ; i < n ; i++ )
	  {
		  cout<<v[i]<<" ";
	  }
	  
		  

	  return 0;
  }
