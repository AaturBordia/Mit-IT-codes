#include <iostream>
using namespace std;
int count = 0;
void insertion(int arr[],int n){
    count++;
    for(int i = 1;i<n;i++){
        count++;
        int key = arr[i];
        count++;
        int j = i-1;
        count++;
        while(j>=0 && arr[j]>key){
            count++;
            arr[j+1] = arr[j];
            count++;
            j--;
            count++;
        }
        arr[j+1] = key;
        count++;
    }
}
void display(int arr[],int n){
    for(int i = 0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[] = {3,2,1,5,4,9,8,6,7,10,15,11,13,12,10,17,18
        ,20,19,16,25,23,22,21,24,30,29,28,27,26,35,32,33,34,31,40,38,39,36,37,41,43,45,42,44,50,49,48,47,46};
    insertion(arr,15);
    cout << count<<endl;
    display(arr,50);
}
