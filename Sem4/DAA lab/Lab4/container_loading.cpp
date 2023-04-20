#include <iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void container(int arr[],int n,int c){
    int arr2[n];
    for(int i = 0;i<n;i++){
        arr2[i]=0;
    }
    for(int i = 0;i<n;i++){
        if(arr[i]<=c){
            arr2[i] = 1;
            c = c-arr[i];
        }else{
            break;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
int main(){
    int capacity =100;
    int arr[5] = {20,30,40,50,10};
    int n = 5;
    insertion(arr,n);
    container(arr,n,capacity);
}
