// Priority queue : It is a container that provides constant time lookup of the largest and smallest element. internally implemented using heap.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  // max_heap
  priority_queue<int> max_heap;
  max_heap.push(1);
  max_heap.push(3);
  max_heap.push(2);
  max_heap.push(0);

  while(!max_heap.empty()){
    cout<<max_heap.top()<<" ";
    max_heap.pop();
  }cout<<endl;


  // min_heap
  priority_queue<int,vector<int>, greater<int>> min_heap;
  min_heap.push(5);
  min_heap.push(1);
  min_heap.push(0);
  min_heap.push(4);

  int n = min_heap.size();
  for(int i=0; i<n ;i++){
    cout<<min_heap.top()<<" ";
    min_heap.pop();
  }cout<<endl;

  return 0;
}
