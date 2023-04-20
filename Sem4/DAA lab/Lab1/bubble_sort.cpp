#include <iostream>
using namespace std;
int count = 0;
void sort(int arr[],int n){
    int temp;
    count++;
    count++;
    for(int i = 0;i<n-1;i++){
        count++;
        for(int j = 0;j<n-i-1;j++){
            count++;
            if(arr[j]>arr[j+1]){
                count++;
                temp = arr[j];
                count++;
                arr[j] = arr[j+1];
                count++;
                arr[j+1] = temp;
            }
        }
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
    sort(arr,50);
    cout << endl << count << endl;
    display(arr,50);
    return 0;
}
