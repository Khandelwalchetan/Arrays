#include <iostream>
using namespace std;
int main() {
    //two D array
    int x[3][2]={1,2,3,4,5,6};
    //printing
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<x[i][j]<<' ';
        }
        cout<<endl;
    }
    //another way
    int a[3][2] = {{1,2}, {3,4}, {5,6}};

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    


}
