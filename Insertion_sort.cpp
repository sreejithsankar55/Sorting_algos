//Sreejith
//5/6/18
//Insertion_sort

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
 {	
	  ll n,key,j;
	  cin>>n;
	  vector < ll > v(n);
	  for ( ll i = 0 ; i < n ; i++ )
	  {
		  cin>>v[i];
	  }
	  for ( ll i = 0 ; i < n ; i++ )
	  {
		  key=v[i];
		  j=i-1;
		  while(j>=0 && v[j]>key)
		  {
			  v[j+1]=v[j];
			  j-=1;
			  
		  }
		  v[j+1]=key;
	  }
	  cout<<"Array after sorting \n";
	  for ( ll i = 0 ; i < n ; i++ )
	  {
		  cout<<v[i]<<" ";
	  }
	  
		  

	  return 0;
  }
