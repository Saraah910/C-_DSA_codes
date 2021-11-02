#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size ,int key){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main()
{

    int size;
    cout<<"Entre the Size of array: ";
    cin>>size;
    
    int arr[size];
    cout<<"Entre the values to be stored: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Entre the number to be searched: ";
    cin>>key;
    
    int searchIndex=BinarySearch(arr,size,key);
    cout<<"The index of the number "<<key<<" is "<<searchIndex;

    return 0;
}

