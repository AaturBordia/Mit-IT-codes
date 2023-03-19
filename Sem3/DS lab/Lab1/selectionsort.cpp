#include <iostream>
using namespace std;
//selection sort
int main(){
    int lst[20],n,i,j,temp,pos,small;
    bool flag = false;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements :" << endl;
    for(i=0;i<n;i++){
        cin >> lst[i];
    }
    for(i=0;i<n-1;i++){
        pos = i;
        for(j=i+1;j<n;j++){
            if(lst[j]<lst[pos]){
                pos=j;
            }
        }
        if(pos!=i){
            temp = lst[i];
            lst[i] = lst[pos];
            lst[pos] = temp;
        }
    }
    cout << "the sorted list is :\n";
    for(i=0;i<n;i++){
        cout << lst[i] << " ";
    }
}
