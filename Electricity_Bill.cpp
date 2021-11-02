#include <iostream>
using namespace std;

int main()
{
    int charges,units,svrg,Total;
    cout<<"The units consumed are: ";
    cin>>units;
    if(units<=100){
        charges=units*2;
    }
    else if(units>=101 && units<=300){
        charges=units*3.7;
    }
    else if(units>=301 && units<=500){
        charges=units*5;
    }
    else if(units>=501 && units<=600){
        charges=units*5.7;
    }
    else if(units>=601){
        charges=units*7;
    }
    svrg=charges*0.2;
    Total=svrg+charges;
    cout<<"The Total electricity bill of the current month is: "<<Total<<endl;
    return 0;
}
