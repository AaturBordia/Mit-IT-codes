#include <iostream>
using namespace std;
void insertion(int arr2[],int arr[],int n){
    for(int i = 1;i<n;i++){
        int key = arr[i];
        int key2 = arr2[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            int a= j+1;
            arr[a] = arr[j];
            arr2[a] = arr2[j];
            j--;
        }
        arr[j+1] = key;
        arr2[j+1] = key2;
    }
}
void insertion2(int arr2[],double arr[],int n){
    for(int i = 1;i<n;i++){
        double key = arr[i];
        int key2 = arr2[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            int a= j+1;
            arr[a] = arr[j];
            arr2[a] = arr2[j];
            j--;
        }
        arr[j+1] = key;
        arr2[j+1] = key2;
    }
}
void knapsack(int arr2[],int arr[],int n,int c){
    int arrn[n] , arr3[n],arrx[n];
    double arrd[n];
    int k = c,l=c;
    for(int i = 0;i<n;i++){
        arr3[i]=0;
        arrn[i]=0;
        arrx[i]=0;
    }
    for(int i = 0;i<n;i++){
        if(arr[i]<=c){
            arr3[i] = 1;
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
    cout << endl <<"max no of containers:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    cout << "\n=========================================\n";
    insertion(arr,arr2,n);
    cout << endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]<=k){
            arrn[i] = 1;
            k = k-arr[i];
        }else{
            break;
        }
    }
    cout << endl <<"profit wise:"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arrn[i]<<" ";
    }
    cout << "\n=========================================\n\n";
    for(int i = 0;i<n;i++){
        arrd[i] = (double)arr2[i]/arr[i];
    }
    insertion2(arr,arrd,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0;i<n;i++){
        cout << arrd[i] << " ";
    }
    cout << endl<<"density wise:"<<endl;
    for(int i=n-1;i>=0;i--){
        if(arr[i]<=l){
            arrx[i] = 1;
            l = l-arr[i];
        }else{
            break;
        }
    }
    for(int i = 0;i<n;i++){
        cout << arrx[i] << " ";
    }
}
int main(){
    int capacity;
    int n;
    cout << "enter capacity and number of weights:";
    cin >> capacity >> n;
    int arr[n],arr2[n];
    cout<<"enter elements :";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<"enter profits :";
    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }
    insertion(arr2,arr,n);
    knapsack(arr2,arr,n,capacity);
}

