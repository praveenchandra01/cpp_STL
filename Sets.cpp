// Set: set stors unique sorted values , internally implement using Binary Search tree
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSet(set<string> &s)
{
  for(string i: s){
    cout<<i<<endl;
  }
}
int main()
{
  set<string> s;
  s.insert("abc"); //log(n)
  s.insert("efg");
  s.insert("hij");

  auto it = s.find("abc"); //log(n)
  if(it!=s.end()){
    cout<<"value present or not :"<<*it<<endl;
    s.erase(it);
  }
  s.erase("efg");
  printSet(s);
  return 0;
}
