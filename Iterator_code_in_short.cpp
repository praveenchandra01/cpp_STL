#include<iostream>
#include<bits/stdc++.h>
 using namespace std;
 int main()
 {
   vector<int> v={1,2,3,4,5};
   for(auto it=v.begin();it!=v.end();it++){
     cout<<*it<<" ";   }
   cout<<endl;

   //Range-based for loop
   for(int &value :v){
     value++;
   }
   for(int value :v){
     cout<<value<<" ";
   }
   cout<<endl;
   vector<pair<int, int>> v_p={{1,2},{3,4}};
   for(auto &value : v_p)
   // for(pair<int, int> &value : v_p)
   {
     cout<<value.first<<" "<<value.second<<endl;
   }
   auto a=1.0; //auto is similar as eval in python ,automatically determine datatype of var.
   cout<<a;
   return 0;
 }
