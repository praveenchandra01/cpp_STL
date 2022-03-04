#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
  if(a.first!=b.first){
    if(a.first<b.first) return false; // swap krna hai to return false
    return true;
  }
  return (a.second>b.second); // trick: jo chaiye vohi return krdo
}

int main()
{
  int n;
  cin>>n;
  vector<pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<v[i].first<<' '<<v[i].second<<'\n';
  }
  return 0;
}
