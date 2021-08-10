// MultiSet : In multiset value can be repeated, allows multiple values.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printSet(multiset<string> &s){
  for(string i: s){
    cout<<i<<endl;
  }
}
  int main()
  {
    multiset<string> s;
    s.insert("abc"); //log(n)
    s.insert("efg");
    s.insert("hij");
    s.insert("abc");

    auto it = s.find("abc"); //log(n)
    if(it!=s.end()){
      cout<<"value present or not :"<<*it<<endl;
      s.erase(it);  //only removes particular iterator value
    }
    s.erase("abc"); //removes all the abc values
    printSet(s);
  return 0;
}
