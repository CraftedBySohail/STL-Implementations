// Implementation of pair
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , string> p;
    p = make_pair(2,"Sohail");

    //printing the pair
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}