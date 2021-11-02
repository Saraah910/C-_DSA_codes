#include <iostream>
#include<string>
using namespace std;
class Bird{
    int id[100];
    static int count;
    string p;
    public:
        void setData(void){
            
            cout<<"\nFor adding the parrot details, increase the count below."<<endl;
            cin>>id[100];
            count++;
        }
        void getCount(void){
            cout<<"The ID of the parrot is      : "<<count<<endl;
        }
        void getdata1(void){
            cout<<"The name of the parrot is    : BLUE MACOW "<<endl;
            cout<<"The Genre of the parrot is   : Cyanopsitta Bonaparte"<<endl;
            cout<<"The color of the parrot is   : Blue"<<endl;
        }
        void getdata2(void){
            cout<<"The name of the parrot is    : AFRICAN GREY PARROT "<<endl;
            cout<<"The Genre of the parrot is   : Psittacus"<<endl;
            cout<<"The color of the parrot is   : Grey"<<endl;
        }
        void getdata3(void){
            cout<<"The name of the parrot is    : ECLECTUS PARROT "<<endl;
            cout<<"The Genre of the parrot is   : Eclectus"<<endl;
            cout<<"The color of the parrot is   : Emerald Green"<<endl;
        }
        void getdata4(void){
            cout<<"The name of the parrot is    : ROSE-BREASTED COCKATOO "<<endl;
            cout<<"The Genre of the parrot is   : Eolophus"<<endl;
            cout<<"The color of the parrot is   : Bright pink feathers"<<endl;
        }
        void getdata5(void){
            cout<<"The name of the parrot is    : SCARLET MACOW "<<endl;
            cout<<"The Genre of the parrot is   : Ara"<<endl;
            cout<<"The color of the parrot is   : Blue, yellow and scarlet red"<<endl;
        }
        void getdata6(void){
            cout<<"The name of the parrot is    : KAKAPO"<<endl;
            cout<<"The Genre of the parrot is   : Strigopodea"<<endl;
            cout<<"The color of the parrot is   : Blue-green"<<endl;
        }
        void getdata7(void){
            cout<<"The name of the parrot is    : TOUCANS"<<endl;
            cout<<"The Genre of the parrot is   : Aulacorhynchus"<<endl;
            cout<<"The color of the parrot is   : Black, bright yellow"<<endl;
        }
};

int Bird::count=7000;
int main(){
    int i,n;
    string p;
    Bird B1,B2,B3,B4,B5,B6,B7;
    int option;
    cout<<"\t***** WELCOME TO THE CIRCUS *****\n"<<endl;
            
            B1.setData();
            B1.getCount();
            B1.getdata1();
            
            B2.setData();
            B2.getCount();
            B2.getdata2();
    
            B3.setData();
            B3.getCount();
            B3.getdata3();
    
            B4.setData();
            B4.getCount();
            B4.getdata4();
    
            B5.setData();
            B5.getCount();
            B5.getdata5();
            
            B6.setData();
            B6.getCount();
            B6.getdata6();
            
            B7.setData();
            B7.getCount();
            B7.getdata7();
            
            cout<<"\nFor adding the new parrots, press 'p'...";
            cin>>p;
            cout<<"Entre the no. of new parrots: ";
            cin>>n;
            for(i=8; i<8+n; i++){
                cout<<"The ID of newly added parrots is: 700"<<i<<endl;
                }
            
    return 0;
}








