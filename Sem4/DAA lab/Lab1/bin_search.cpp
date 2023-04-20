#include <iostream>
using namespace std;
int count = 0;
void searchrecursive(int arr[],int high,int low,int ele){
    if(high>=low){
        count++;
        int mid = (high+low)/2;
        count++;
        if(arr[mid]==ele){
            count++;
            cout << "index is " << mid;
        }else if(arr[mid]>ele){
            count++;
            searchrecursive(arr,mid-1,low,ele);
        }else{
            count++;
            searchrecursive(arr,high,mid+1,ele);
        }
    }else{
        cout << "element not found";
    }
}
void searchiterative(int arr[],int high,int low,int ele){
    int mid;
    int flag = 0;
    count++;
    while(high>=low){
        count++;
        mid = (high+low)/2;
        count++;
        if(arr[mid]==ele){
            count++;
            flag = 1;
            count++;
            cout << "index is " << mid;
            break;
        }else if(arr[mid]>ele){
            count++;
            high = mid-1;
            count++;
        }else{
            low = mid+1;
            count++;
        }
    }
    if(flag == 0){
        count++;
        cout <<"element not found";
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};
    //searchrecursive(arr,49,0,1);
    searchiterative(arr,49,0,1);
    cout << endl <<count <<endl;



}
