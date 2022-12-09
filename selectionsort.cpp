#include<iostream>
using namespace std;
void selectionsort(int arr[],int len){
    for(int i=0;i<len;i++){
        int small=i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[small]){
                small=j;
            }
        }
        if(small!=i){
            swap(arr[small],arr[i]);
        }
    }
    cout << "\nafter sorting :";
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }

}
int main(){
    int len;
    cout << " enter the len of array :";
    cin >> len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout << "enter the value of index "<<i<<" :";
        cin >> arr[i];
    }
    cout << "before sorting :";
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
    selectionsort(arr,len);
}