#include<iostream>
#include<utility>
using namespace std;
int main()
    {
       int n,max=-1000000000,min=100000000;
       //cin>>n;
       int arr[3];
       for(int i=0;i<3;i++) {
       cin>>arr[i];
       if(arr[i]>max) max=arr[i];
       if(arr[i]<min) min=arr[i];
    }
    cout<<min<<" "<<max<<endl;
    }