#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  int min = *min_element(v.begin(),v.end()); //returns iterator
  cout<<min<<endl;

  int max = *max_element(v.begin(),v.end());
  cout<<max<<endl;

  int sum = accumulate(v.begin(),v.end(),0);
  cout<<sum<<endl;

  int ct = count(v.begin(),v.end(),6);
  cout<<ct<<endl;

  auto it = find(v.begin(),v.end(),9);
  if(it != v.end())
    cout<<(*it)<<endl;
  else
    cout<<"Element not found"<<endl;

  // auto it = find(a,a+n,9); //In case of arrays
  // if(it != a+n)
  //   cout<<(*it)<<endl;
  // else
  //   cout<<"Element not found"<<endl;

  reverse(v.begin(),v.end());
  for(int i : v){
    cout<<i<<" ";
  }cout<<endl;
  return 0;
}
// 6
// 2 3 1 6 7 6
