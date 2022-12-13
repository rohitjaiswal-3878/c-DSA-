#include <iostream>
	using namespace std;
	void printArray(int array[],int size){
    		for(int i=0;i<size;i++){
        			cout<<array[i];
    		}
	}
	void bubbleSort(int array[],int size){
    		int pass=0;
    		for(int i=0;i<size-1;i++){
        			for(int j=0;j<size-i-1;j++){
            				if(array[j]>array[j+1]){
                				int temp=array[j];
                				array[j]=array[j+1];
                				array[j+1]=temp;
            				}
        			}
        			pass++;
    		}
    		cout<<"\nNumber of Pass: "<<pass;
	}
	int main() {
            int size;
            cout<<"\nEnter Size of Array: ";
    		cin>>size;
    		int array[size];
    		int element;
    		cout<<"Bubble Sort Algorithm";
    		for(int i=0;i<size;i++){
        			cout<<"\nEnter element: ";
        			cin>>element;
        			array[i]=element;
    		}
    		cout<<"\nUnsorted Array: ";
    		printArray(array,size);
    		bubbleSort(array,size);
    		cout<<"\nSorted Array: ";
    		printArray(array,size);
	}