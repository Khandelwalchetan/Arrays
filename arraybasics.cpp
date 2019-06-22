#include<iostream>
using namespace std;
int main(){
    int i;
    // int a[3]={1 , 2 , 3}; //array declaration and assigning values
    // for(i=0;i<=2;i++){
    //      cout<<a[i];
    // }

    int a[5];
    for(i=0;i<=4;i++){ //input array
        cin>>a[i];
    }
    for(i=0;i<=4;i++){  //print array
        cout<<a[i]*a[i];
    }

}

