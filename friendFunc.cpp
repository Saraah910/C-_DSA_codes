#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        void setData(int n1,int n2){
            a = n1;
            b = n2; 
        }
        void getData(){
            cout<<"The complex no is:"<<a<<" + "<<b<<"i"<<endl;
        }

};
int main(){
    complex c1,c2;
    c1.setData(5,2);
    c2.setData(8,7);
    c1.getData();
    c2.getData();
    return 0;
}