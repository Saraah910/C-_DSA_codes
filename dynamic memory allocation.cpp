#include<iostream>
#include<string>
using namespace std;

struct Record{
    int Rollno;
};
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
    
int main(){
    
    Record R[5];
    
    int choice;
    int size;
    int *ptr;
    int no;
    cout<<"\n**** WELCOME ****"<<endl;
    while(1){
    
    cout<<"\n1. Add and Display record."<<endl;
    cout<<"2. Search record."<<endl;
    cout<<"3. Delete record."<<endl;
    
    cout<<"\nSelect your choice: ";
    cin>>choice;
        switch(choice){
            case(1):{
                cout<<"Entre the no. of Records to be stored: ";
                cin>>size;
                
                ptr=new int[size];
                
                cout<<"Entre the values to be stored in the Record: "<<endl;
                for(int i=0; i<size; i++){
                    cin>>ptr[i];
                }
                cout<<"The values in the Record are: "<<endl;
                for(int i=0; i<size; i++){
                    cout<<ptr[i]<<endl;
                }
                cout<<"*************";
                }break;
            case(2):{
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
                cout<<"The index of the number "<<key<<" is "<<searchIndex<<"\n";
                cout<<"\n*************";
                }break;
            case(3):{
                int *ptr;
                int size;
                ptr=new int[size];
                
                cout<<"Entre the values to be stored in the Record: "<<endl;
                for(int i=0; i<size; i++){
                    cin>>ptr[i];
                }
                delete ptr;
                cout<<"The memory is deleted."<<endl;
            }
                
                
                
            }
    }
    
    
    
    
    return 0;
}






