#include<iostream>
using namespace std;
void insertionsort(int arr[],int len){
    for(int i=1;i<len;i++){
        int val=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>val){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
    }

    cout <<"\nafter sorting :";
    for(int i=0;i<len;i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int len;
    cout << "enter the length of array :";
    cin >> len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout << "enter the value of index "<<i<<" :";
        cin >> arr[i];
    }
    cout << "before sorting :";
    for(int i=0;i<len;i++){
        cout << arr[i]<<" ";
    }
    insertionsort(arr,len);
    return 0;
}