// Maps : Store data in key : value pairs in sorted order ,implement using Red black tree(self balancing tree)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printMap(map<int, string> &m){
  cout<<m.size()<<endl;
  for(auto &i: m){ //O(n)
    cout<<i.first<<" "<<i.second<<endl; //O(log n)
  }
}
int main()
{
  map<int, string> m;
  m[1]="abc";  //O(log n)
  m[5]="bcd";
  m[3]="efg"; //m[3] likhne ki he TC O(log n)
  m.insert({4,"pqr"});
  // map<int, string> :: iterator it;
  // for(it=m.begin(); it!=m.end();it++){
    //   cout<<it->first<<" "<<it->second<<endl;
    // }
  printMap(m);
    auto it = m.find(3); //O(lon n)
    // m.erase(it); O(log(n))
    // m.erase(3);
    // if(it==m.end())
    //   cout<<"No Value";
    // else
    //   cout<<it->first<<" "<<it->second;
    m.clear();
    printMap(m);

  return 0;
}
