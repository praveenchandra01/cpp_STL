#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(deque<int> dq){
  for(auto &i:dq ){
    cout<<i<<" ";
  }
    cout<<endl;
}
int main()
{
  deque<int> dq={2,3,4};

  dq.push_front(1);
  dq.push_back(5);
  print(dq);
  cout<<"front->"<<dq.front()<<endl;
  cout<<"back->"<<dq.back()<<endl;


  dq.pop_back();
  dq.pop_front();
  print(dq);

  dq.erase(dq.begin(),dq.begin()+1);
  print(dq);
  return 0;
}
