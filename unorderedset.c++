// implementation  of unordered set in c++
// it stores unique elements 
// it it implemented using hash table
// stores elements in random order
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(1);

    for(auto it =s.begin(); it!=s.end();it++){
        cout<<*it<<" "<<endl ;
    }
    return 0;
}