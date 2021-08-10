// unordered set: set stors unordered unique values, internally implement using hash table.
// we cannot use copmlex data structurs as keys in unordered_set because their hash function is not defined

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSet( unordered_set<string> &s)
{
  for(string i: s){
    cout<<i<<endl;
  }
}
int main()
{
  unordered_set<string> s;
  s.insert("abc"); // O(1)
  s.insert("efg");
  s.insert("hij");

  auto it = s.find("abc"); //O(1)
  if(it!=s.end()){
    // cout<<"value present or not :"<<*it<<endl;
    // s.erase(it);
  }
  // s.erase("efg");
  printSet(s);
  return 0;
}
