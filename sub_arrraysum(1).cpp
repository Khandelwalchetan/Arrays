#include <iostream>
using namespace std;
int main() {
    //sub array sum
    int a[10];
    int n;
    int csum=0;
    int m_sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //generating and summing sub array
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            csum=0;
            for(int k=i;k<=j;k++){
                csum=csum+a[k];
                
            }
             
            if(csum>m_sum){
                m_sum=csum;
            }
            
        }
    }
    cout<<m_sum;
}
