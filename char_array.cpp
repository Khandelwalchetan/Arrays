#include <iostream>
using namespace std;
int main() {
    //character arrays
    //always terminated by null
    char a[]={'a','b','c','d','\0'};//always terminate it with null because it can take garbage value
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;

    char b[]="hello";
    cout<<b<<endl;
    cout<<sizeof(b)<<endl;//size is 6 because of null

    // char c[100];
    // cin>>c;
    // cout<<c;

    //when space or any special character is encountered
    // char c[100];
    // cin.getline(c,100);
    // cout<<c;
    char para[100];
    cin.getline(para,100,'.');
    cout<<para;

}
