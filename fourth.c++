#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int>l;
    l.push_back(2);
    l.push_front(1);

   // printing the list
   for(auto it = l.begin();it!=l.end();it++){
    cout<<*it<<" ";

   } 
    return 0;
}