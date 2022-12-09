#include <iostream>
using namespace std;
 
// A utility function to get maximum value in arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void countsort(int arr[],int len,int pos){
    int k=10;
    int count[k]={0};
    int b[len];
    for(int i=0;i<len;i++){
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<k;i++){
        count[i]+=count[i-1];
    }
    for(int i=len-1;i>=0;i--){
        b[--count[(arr[i]/pos)%10]]=arr[i];
    }

    for(int i=0;i<len;i++){
        arr[i]=b[i];
    }
    
}
void print(int arr[],int len){
    for(int i=0;i<len;i++){
        cout << arr[i] << " ";
    }
}
 
void radixsort(int arr[],int len){
    int max=getMax(arr,len);
    for(int pos=1;(max/pos)>0;pos=pos*10){
        countsort(arr,len,pos);
    }
}
int main() {
    int len;
    cout << "enter the length of array : ";
    cin >> len;
    int arr[len];
    for(int i=0;i<len;i++){
        cout << "enter value of index "<<i<<" :"; 
        cin >> arr[i];
    }
    radixsort(arr,len);
    print(arr,len);
  

    return 0;
}