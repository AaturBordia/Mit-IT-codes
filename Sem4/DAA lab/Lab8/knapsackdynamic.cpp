#include <iostream>
using namespace std;
int max_profit;
int pickprof(int w[10],int p[10],int n,int c){
    int prof = 0;
    for(int i =n;i>=0;i--){
        if(w[i]<=c){
            c = c-w[i];
            prof+=p[i];
        }
    }
    return prof;
}
void ksdynamic(int w[10],int p[10],int n,int c){
    int arr[n][c];
    int ar[n];
    for(int i = 0;i<n;i++){
        ar[i] = 0;
    }
    for(int i = 0;i < n;i++){
        for(int j = 1;j < c+1;j++){
            arr[i][j-1] = pickprof(w,p,i,j);
        }
    }
    for(int i = 0;i < n;i++){
        for(int j = 1;j < c+1;j++){
            cout << arr[i][j-1] << " ";
        }
        cout<< "\n";
    }
    max_profit = arr[n-1][c-1];
    int a=c-1;
    int k = max_profit;
        for(int i = n-1;i >=0;i--){
            if(k == arr[i-1][a]){
                continue;
            }
            ar[i] = 1;
            k=k-p[i];
            for(int j = 0;j<c;j++){
                a = c-i-j;
                if(arr[i-1][a]==k){
                    break;
                }
            }
            if(k==0)
                break;
        }
        for(int i =0;i < n;i++){
            cout << ar[i] << " ";
        }
        cout << "\nmax profit :" << max_profit;
}
int main(){
    int c,n;
    n = 3;
    int w[10] = {2,3,4};
    int p[10] = {1,2,5};
    c = 6;
    ksdynamic(w,p,n,c);
}
