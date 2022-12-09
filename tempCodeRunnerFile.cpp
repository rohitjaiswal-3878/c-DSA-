#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "enter the length of the array : ";
    cin >> len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout << "enter the element at index "<<i<<" :";
        cin >> arr[i];
    }
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}