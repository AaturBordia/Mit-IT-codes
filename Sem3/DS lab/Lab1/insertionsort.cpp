#include <iostream>
using namespace std;
//insertion sort
int main(){
    int lst[20],n,i,j,key;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements :" << endl;
    for(i=0;i<n;i++){
        cin >> lst[i];
    }
    for(i=1;i<n;i++){
        key = lst[i];
        j=i-1;
        while(j >= 0 && lst[j] > key){
            lst[j+1]=lst[j];
            j=j-1;
        }
        lst[j+1] = key;
    }
    cout << "the sorted list is :\n";
    for(i=0;i<n;i++){
        cout << lst[i] << " ";
    }
}
