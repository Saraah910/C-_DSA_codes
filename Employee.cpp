#include <iostream>
#include<string>
using namespace std;
class Employee
{
    public:
    string Emp_id;
    char name[15];
    float sal;
    string DOB;
    string add;
    string p;
    int dd,mm,yyyy;
    int i=1;
    public:
        void getData(){
            getline(cin,Emp_id);
            cout<<"Employee Id is: ";
            getline(cin,Emp_id);
            cout << "Enter Employee's name: ";
            cin.getline(name,15);
            cout<<"Employee's Salary: ";
            cin>>sal;
            while (1){
            cout<<"Entre Employee's phone no: ";
            cin>>p;
            if (p.length()!=10){
                cout<<"Entre valid phone no\n";
            }
            else {
                break;
            }
            }
            cout<<"Employee's DOB (in the form of DD<space>MM<space>YYYY): ";
            cin>>dd>>mm>>yyyy;
            if((2021-yyyy)>24){
                getline(cin,add);
                cout<<"Employee's Adress: ";
                getline(cin,add);
            }
            else{
                cout<<"\n********SORRY !! NO JOB FOR CANDIDATES BELOW 24 YEARS OF AGE********"<<endl;
                getline(cin,add);
            }
            
        }
        void displayData(){
            cout<<"\n******** Employee details are: ********"<<endl;
            cout<<"ID               :       "<<Emp_id<<endl;
            cout<<"Full name        :       "<<name<<endl;
            cout<<"Salary           :       "<<sal<<endl;
            cout<<"Phone no         :       "<<p<<endl;
            cout<<"DOB              :       "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
            cout<<"Adress           :       "<<add<<endl;
            cout<<".......................................\n";
        }
        void deleteData(){
            cout<<"\tYour Data of Employee ID "<<Emp_id<<" has been deleted sucessfully";
        }
        // void updateData(){
        //     cout<<""
        // }
        
};
int main(){
    int const cnt=15;
    int n;
    string a;
    int var=0;
    Employee e[cnt];
    for(int var=0; var<15; var++){
    while(1){
        cout<<"\n*** MENU ***";
        cout<<"\n 1.Enter and Display Record:";
        cout<<"\n 2.Search Record";
        cout<<"\n 3.delete Record";
        cout<<"\n\n Enter Your Choice : ";
        cin>>n;
        cout<<"\n";
        if(n==1){
                for(int i=0;i<15;i++){
                    e[i].getData();
                    e[i].displayData();
                    break;
            }
        }
        if(n==2){
            int i;
            cout<<"Entre the Employee ID: ";
            cin>>a;
            for(int i=0;i<15;i++){
                if(e[i].Emp_id==a){
                    e[i].displayData();
                    break;
                }
                if(e[i].Emp_id!=a){
                    cout<<"\n********No record found for ID no :"<<a<<"********";
                break;
                }
            }   
                
        }
        if(n==3){
            int i;
            cout<<"Entre the Employee ID: ";
            cin>>a;
            for(int i=0;i<15;i++){
                if(e[i].Emp_id==a){
                    e[i].deleteData();
                    break;
                }
                if(e[i].Emp_id!=a){
                    cout<<"\n********No record found for ID no :"<<a<<"********";
                break;
                }
            }   
                
        }
        
    }
    }
    
}






