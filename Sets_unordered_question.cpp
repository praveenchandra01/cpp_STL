// Given N stings and Q queris. In each query you are given a string print yes if the sting is present else no.
// N <= 10^6
// |S| <= 100
// Q <= 10^6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  unordered_set<string> s;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
      string str;
      cin>>str;
      if(s.find(str)==s.end())
        cout<<"NO";
      else
        cout<<"YES";
    }

  return 0;
}
