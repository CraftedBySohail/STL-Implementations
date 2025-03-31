// List
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    list <int>l;

    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(1);


    cout<<"The elements of the list are :"<<endl;
    for(auto i:l){

        cout<<i<<" ";
    }
    return 0;
}