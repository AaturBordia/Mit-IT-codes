#include <iostream>
using namespace std;
int count;
void selection(int arr[],int n){
    for(int i = 0;i<n;i++){
        count ++;
        count++;
        int pos = i;
        for(int j = i;j<n;j++){
            count++;
            count++;
            if(arr[j]<arr[pos]){
                count++;
                pos = j;
            }
        }
        count++;
        count++;
        if(pos!=i){
            count++;
            int temp = arr[pos];
            count++;
            arr[pos] = arr[i];
            count++;
            arr[i] = temp;
        }
    }
    count++;
}
void display(int arr[],int n){
    for(int i = 0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int arr[] = {3,2,1,5,4,9,8,6,7,10,15,11,13,12,10,17,18
        ,20,19,16,25,23,22,21,24,30,29,28,27,26,35,32,33,34,31,40,38,39,36,37,41,43,45,42,44,50,49,48,47,46};

    selection(arr,50);
    cout << "time complexity is " << count<<endl;
    display(arr,50);

}
