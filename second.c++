// Nested pairing
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , pair<string,char>> p;

    // //First method
    // p.first = 1;
    // p.second.first = "Sohail";
    // p.second.second = 'A';


    //Second method
    p = make_pair(1,make_pair("sohail",'A'));

    // printing the pair
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    return 0;
}