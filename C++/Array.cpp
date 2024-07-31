#include<iostream>
using namespace std;

int main(){

    int arr[3] = {1,2,3};
    int num[10];
    int first[100] = {0};
    for(int i = 0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    int size = sizeof(arr)/sizeof(int);
    cout<<"\nSize of arr is:"<<size<<endl;
    cout<<"Everything is fine";
}
