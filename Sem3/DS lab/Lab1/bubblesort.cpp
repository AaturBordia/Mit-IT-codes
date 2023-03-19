#include <iostream>
using namespace std;
//bubble sort
int main(){
    int lst[20],n,i,j,temp;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements :" << endl;
    for(i=0;i<n;i++){
        cin >> lst[i];
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(lst[j]>lst[j+1]){
                temp = lst[j];
                lst[j] = lst[j+1];
                lst[j+1] = temp;
            }
        }
    }
    cout << "the sorted list is :\n";
    for(i=0;i<n;i++){
        cout << lst[i] << " ";
    }
}
