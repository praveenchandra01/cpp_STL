#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v){
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  vector<vector<int>> v;
  int N;
  cin>>N;
  for(int i=0;i<N;i++)
  {
    int n;
    cin>>n;
    vector<int> temp;
    for(int j=0;j<n;j++){
      int x;
      cin>>x;
      temp.push_back(x);
    }
    v.push_back(temp);
  }
  v[0].push_back(10);
  v.push_back(vector<int> ());
  for(int i=0;i<v.size();i++){
    printVec(v[i]);
  }
  return 0;
}
