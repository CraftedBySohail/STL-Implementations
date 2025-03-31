// implementation of set
#include<iostream>
#include<set>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(400);
    s1.insert(2);


    for(auto it = s1.begin();it!=s1.end();it++){
        cout<<*it<<" ";

    }
    return 0;
}