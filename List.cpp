// List: Implemented using Doubly-linked list
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l;

  // list<int> l2(l); //copy l into l2
  list<int> l2(5,100);
  for(int i: l2){
    cout<<i<<" ";
  }cout<<endl;

  l.push_back(2); //O(1)
  l.push_back(3);
  l.push_front(1); //O(1)
  l.push_front(0);

  list<int> :: iterator it;
  it=l.begin();
  while(it != (l.end())){
    cout<<"List : "<<*it<<'\n';
    it++;
  }

  for(int i: l){
    cout<<i<<" ";
  }cout<<endl;

  l.erase(l.begin()); //l.erase() ->O(n)
  cout<<"after erase :";
  for(int i: l){
    cout<<i<<" ";
  }cout<<endl;

  cout<<"Size of list : "<<l.size();
  cout<<"\nFront Elem : "<<l.front();
  return 0;
}
