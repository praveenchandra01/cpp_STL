// Given N strings, print unique string in lexical order
// N <= 10^5
// |S| <=10000

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  set<string> s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);
    }
    cout<<endl;
    for(auto i: s){
      cout<<i<<endl;
  }


  return 0;
}
