#include <iostream>
using namespace std;
//linear search
int main(){
    int lst[20],n,i,key,pos;
    bool flag = false;
    cout << "enter the number of elements :";
    cin >> n;
    cout << "enter the elements :" << endl;
    for(i=0;i<n;i++){
        cin >> lst[i];
    }
    cout << "enter the element to search for:";
    cin >> key;
    for(i=0;i<n;i++){
        if(key==lst[i]){
            pos = i;
            flag = true;
            break;
        }
    }
    if(flag == true){
        cout << "element is at index " << pos << endl;
    }else{
        cout << "element is not present";
    }
    return 0;
}
