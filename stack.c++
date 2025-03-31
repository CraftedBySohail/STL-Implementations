#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"size of stack: "<<s.size()<<endl;

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
   
    return 0;
}