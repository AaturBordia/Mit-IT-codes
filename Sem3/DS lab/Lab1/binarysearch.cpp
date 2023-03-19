#include <iostream>
using namespace std;
//binary search
int main(){
    int lst[20],n,i,key,pos,low,high,mid;
    bool flag = false;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements in ascending order:" << endl;
    for(i=0;i<n;i++){
        cin >> lst[i];
    }
    cout << "enter the element to search for:";
    cin >> key;
    low=0;
    high=n-1;
    while(low<=high){
        mid = (low + high)/2;
        if(key == lst[mid]){
            flag = true;
            pos = mid;
            break;
        }else if(key < lst[mid]){
            high = mid-1;
        }else if(key > lst[mid]){
            low = mid+1;
        }
    }
    if(flag == true){
        cout << "element is at index " << pos << endl;
    }else{
        cout << "element is not present";
    }
    return 0;
}
