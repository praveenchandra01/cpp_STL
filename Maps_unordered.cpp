// Unorderd Maps : Data store in Unorderdly ,implement using Hash table ,every key has using hash value.
// we cannot use copmlex  data structurs as keys in unordered_map because their hash function is not defined

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printMap(unordered_map<int, string> &m){
  cout<<m.size()<<endl;
  for(auto &pr: m){
    cout<<pr.first<<" "<<pr.second<<endl;
  }
}
int main()
{
  unordered_map<int, string> m;
  m[1]="abc";  //O(1)
  m[5]="bcd";
  m[3]="efg";
  printMap(m);
  return 0;
}
