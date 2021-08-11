#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  // int a[n];
  vector <int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  // sort(a,a+n)
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
   cout<<v[i]<<" ";
 }
//The DATA Structure must be sorted for binary_search, lower_bound, upper_bound,TC: O(log(n))
 cout<<"Binary Search -> "<<binary_search(v.begin(),v.end(),8)<<endl;

 // lower_bound: returns the value if presents otherwise returns greater value or
 // if greater elem does not presents it will return next to last element.
 auto it = lower_bound(v.begin(), v.end(), 4);
 if(it != v.end())
 cout<<"Lower Bound -> "<<(*it)<<endl;
 else
 cout<<"Not found"<<endl;

 // upper_bound: returns greater value or if greater elem does not presents it will return next to last element
 auto it2 = upper_bound(v.begin(), v.end(), 7);
 if(it2 != v.end())
 cout<<"Upper Bound -> "<<(*it2)<<endl;
 else
 cout<<"Not found"<<endl;
  return 0;
}
// 6
// 2 3 1 6 7 6
// 7
// 6 4 5 5 25 7 8
