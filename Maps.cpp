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


// RANGE BASED LOOP
    // unordered_map<string, string> m;
    // m["name"]="praveen";
    // m["sal"]="30000";
    // m["Id"]="13075";

    // for(auto i : m){
    //   m.insert({1,2});
    // }
    // for(auto i : m){
    //   cout<<i.first<<" "<<i.second<<endl;
    // }

// NORMAL LOOP WITH ITERATOR
    // map<int, string> m;
    // m[1]="abc";
    // m[5]="bcd";
    // m[3]="efg";
    // m.insert({4,"pqr"});
    // // map<int, string> :: iterator it;
    // for(auto it=m.begin(); it!=m.end();it++){
    //     // cout<<it->first<<" "<<it->second<<endl;
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    //     }

// NORMAL LOOP - not use bcoz sometimes it gives qwrong answer
    // unordered_map<int, int> m;
    // for(int i=1;i<6;i++){
    //   m[i]++;
    // }
    // for(int i=1;i<6;i++){
    //   cout<<i<<" "<<m[i]<<endl;
    // }
  return 0;
}
