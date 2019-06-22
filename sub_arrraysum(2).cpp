#include <iostream>
using namespace std;
int main() {
    //sub array sum
    //using cummulative technique
    int a[10];
    int cs[10];

    int n;
    int csum=0;
    int m_sum=0;
    cin>>n;
    cin>>a[0];
    cs[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cs[i]=cs[i-1]+a[i];
    }
    //generating and summing sub array
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            csum=0;
            csum=cs[j]-cs[i-1];
             
            if(csum>m_sum){
                m_sum=csum;
            }
            
        }
    }
    cout<<m_sum;
}
