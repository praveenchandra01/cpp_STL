// Vector:array's with dynamic size
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
  // cout<<"size:"<<v.size()<<endl;
  for(int &i : v){
    cout<<i<<" ";
  }
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<" ";
  // }
  // v.push_back(2);
  cout<<endl;
}
int main()
{
  vector<int> v;
  v.push_back(1);
  cout<<"Capacity->"<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Capacity->"<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity->"<<v.capacity()<<endl;

  cout<<"Element at index 2->"<<v.at(2)<<endl;
  cout<<"Front Element->"<<v.front()<<endl;
  cout<<"Back Element->"<<v.back()<<endl;

  v.pop_back();
  v.pop_back();
  v.pop_back();
  cout<<"Empty or not : "<<v.empty()<<endl;

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
  printVec(v);

//   vector<int> v;
//   int n ;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     int e;
//     cin>>e;
//     // printVec(v);
//     v.push_back(e); //O(1)
//   }
// printVec(v);

  // vector<int> v(10); //size->10,by_default initialise with 0
  // vector<int> v(10,3); //prefill with 3
  // vector<int> v(3); //prefill with 3
  // vector<int> v;
  // v.push_back(7);
  // v.push_back(8); //O(1)
  // printVec(v);
  // v.pop_back(); //O(1)
  // printVec(v);

  // vector<int> v2 = v; //O(n) : copy each elemnt one by one
  // vector<int> v2(v); //O(n) : copy each elemnt one by one
  // vector<int> &v2=v; //v2 and v is same
  // v2.push_back(5);
  // printVec(v);
  // printVec(v);
  // printVec(v2);

//   vector<string> v;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     string s;
//     cin>>s;
//     v.push_back(s);
//   }
// printVec(v);
  return 0;
}
