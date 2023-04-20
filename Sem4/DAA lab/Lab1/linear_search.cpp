#include <iostream>
using namespace std;
int count = 0;
int count1 = 0;
void searchrecursive(int arr[],int n,int pos,int ele){
    if(pos<n){
        count++;
        if(ele==arr[pos]){
            count++;
            cout <<"element at pos:" <<pos;
        }else{
            searchrecursive(arr,n,pos+1,ele);
            count++;
        }
    }else{
        cout << "element not found";
    }
}
void searchiterative(int arr[],int n,int ele){
    int flag = 0;
    count1++;
    for(int i = 0;i < n;i++){
        count1++;
        if(arr[i]==ele){
            count1++;
            flag = 1;
            count1++;
            cout << "element at pos:"<<i;
        }
    }
    if(flag == 0){
        count1++;
        cout <<"element not found";
        count1++;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    searchrecursive(arr,4,0,1);
    cout << endl;
    searchiterative(arr,4,1);
}
