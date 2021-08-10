#include<iostream>
#include<queue>
using namespace std;
int main()
{
  queue <string> q;
  q.push("abc");
  q.push("efg");
  q.push("hij");
  q.push("klm");
  q.push("nop");
  while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
  }

  return 0;
}
