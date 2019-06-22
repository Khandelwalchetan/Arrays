#include <iostream>
using namespace std;
int main() {
    //linear search algo
    int a[10];
    int i,n;
    
    for(i=0;i<=9;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched";
    cin>>n;

    //searching..
    for(i=0;i<=9;i++){
        if(n==a[i]){
            cout<<endl;
            cout<<"Element found at "<<i<<" position";
            break;

        }
    }
    if(i==10){
        cout<<"\n"<<"Element not found";

    }


}
