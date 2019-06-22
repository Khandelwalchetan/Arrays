#include <iostream>
using namespace std;
int main() {
    int n;
    int cs=0;
    int ms=0;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //KADANE's algorithm
    for(int i=0;i<n;i++){
        cs=cs+a[i];
        if(cs<0){
            cs=0;
        }
        ms=max(cs,ms);
    }
    cout<<ms;
    return 0;
}
