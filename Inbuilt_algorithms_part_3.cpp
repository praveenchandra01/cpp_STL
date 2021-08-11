#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_positive(int x){
  return x>0;
}

int main()
{
  // Lambda Funtion
  auto sum = [](int x, int y){ return x+y; };
  cout<< sum(2,3)<<endl;

  vector<int> v={2,4,6,7};

  cout<<all_of(v.begin(),v.end(),is_positive)<<endl; //saare

  cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl; //saare
  cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; //ek bhi
  cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl; //Ek bhi nahi

  return 0;
}
