#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v){
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
}
int main()
{
  // vector of pair
  // vector<pair<int, int>> v={{1,2},{3,4}};
  vector<pair<int, int>> v;
  printVec(v);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
  }
  printVec(v);
  // swap(v[0],v[2]);
  // printVec(v);
  return 0;
}
