#include<iostream>
#include<cmath>
#include<string>
#include<vector>

using namespace std;



class AREA
{
  public:

float rectangle(float l , float b)
{
    float Area = l*b;
    return(Area);
}

float square(float l)
{
    float Area = pow(l,2);
    return(Area);
}

float triangle(float b , float h)
{
    float Area = 0.5*b*h;
    return(Area);
}
float sphere(float r)
{
    float Area = 4*3.146*pow(r,2);
    return(Area);
}

float cube(float l)
{
    float Area =  6*l*l;
    return(Area);
}

float cuboid(float l , float b, float h)
{
    float Area = 2*(l*b+ b*h + h*l);
    return(Area);
}
float cone(float h , float r)
{
    float Area = 3.146*r*(r+ pow((h*h+r*r), 0.5));
    return(Area);
}
 float cylinder(float h , float r)
{
    float Area =2*3.146*r*(h+r) ;
    return(Area);
}

 };

  class VOLUME
 {
    public:

  float sphere(float r)
  {
      float Vol = 3.146*pow(r,3);
      return(Vol);
  }
  float cube(float l)
  {
      float Vol = pow(l,3);
      return(Vol);
  }

  float cuboid(float l, float b , float h)
  {
      float Vol = l*b*h;
      return(Vol);
  }
  float cylinder(float h, float r)
  {
      float Vol =3.146*r*r*h;
      return(Vol);
  }
   float cone(float h, float r)
  {
      float Vol =(3.146*r*r*h)/3;
      return(Vol);
  }

};

class PERIMETER
{
    public:
float rectangle(float l, float b)
{
    float per = 2*(l+b);
    return(per);
}
float square(float l)
{
    float per = 4*l;
    return(per);
}

float triangle(float s1, float s2, float s3)
{
    float per = (s1+s2+s3);
    return(per);
}

};




int main()

{
 float Area = 0; 
 float Volume = 0;
 float Perimeter = 0;
 int User_input1 = 0;;
 int User_input2 = 0;;
 float l= 0; 
 float r= 0;
 float b = 0;
 float h= 0;
 float s1 = 0;
 float s2= 0;
 float s3 = 0;
 AREA obja;
 VOLUME objv;
 PERIMETER objp;


   


 cout<<"Enter the attribute you want to calculate"<<endl;
 cout<<"1.Area"<<endl;
 cout<<"2.Volume"<<endl;
 cout<<"3.Perimeter"<<endl;

cin>>User_input1;

   switch(User_input1)
   {      
       
       
    case 1: cout<<"Enter the shape for which you want to calculate "<<endl;
            cout<<"1.Square"<<endl;
            cout<<"2.Rectangle"<<endl;
            cout<<"3.cube"<<endl;
            cout<<"4.cuboid"<<endl;
            cout<<"5.sphere"<<endl;
            cout<<"6.cone"<<endl;
            cout<<"7.cylinder"<<endl;
            cout<<"8.triangle"<<endl;

           cin>>User_input2;

       switch (User_input2)
       {
       case 1:
                cout<<"Enter the length "<<endl;
                cin>>l;
                cout<<"your calculated Area is:  ";
                cout<< obja.square(l)<<endl;  
                break;

      case 2 :
               cout<<"Enter the length and breadth  respectively"<<endl;
               cin>>l>>b;
               cout<<"your calculated Area is:  ";
               cout<< obja.rectangle(l,b)<<endl;
               break;
      case 3 :
               cout<<"Enter the length "<<endl;
               cin>>l;
               cout<<"your calculated Area is:  ";
               cout<< obja.cube(l)<<endl;
               break;
      case 4 :
               cout<<"Enter the length , breadth and height respectively "<<endl;
               cin>>l>>b>>h;
               cout<<"your calculated Area is:  ";
               cout<< obja.cuboid(l,b,h)<<endl;
               break;
      case 5 :
               cout<<"Enter the radius "<<endl;
               cin>>r;
               cout<<"your calculated Area is:  ";
               cout<< obja.sphere(r)<<endl;
               break;                    
     case 6 :
               cout<<"Enter the height and redius respectively "<<endl;
               cin>>h>>r;
               cout<<"your calculated Area is:  ";
               cout<< obja.cone(h,r)<<endl;
               break; 
      case 7 :
               cout<<"Enter the height and redius respectively "<<endl;
               cin>>h>>r;
               cout<<"your calculated Area is:  ";
               cout<< obja.cylinder(h,r)<<endl;
               break; 
       case 8 :
               cout<<"Enter the base and height "<<endl;
               cin>>b>>h;
               cout<<"your calculated Area is:  ";
               cout<< obja.triangle(b,h)<<endl;
               break;  
       default:
       cout<<"Invalid input pls try again!"<<endl;
           break;
       }
   
    break;
   

     case 2:
    

       cout<<"Enter the shape for which you want to calculate "<<endl;
          cout<<"1.cube"<<endl;
          cout<<"2.cuboid"<<endl;
          cout<<"3.sphere"<<endl;
          cout<<"4.cone"<<endl;
          cout<<"5.cylinder"<<endl;
          cin>>User_input2;

        switch(User_input2)
    {
        case 1: cout<<"Enter the length"<<endl;
                  cin>>l;
                  cout<<"Your calculated Volume is:   ";
                  cout<<objv.cube(l)<<endl;
              break;

        case 2: cout<<"Enter the length ,breadth and height respectively"<<endl;
                  cin>>l>>b>>h;
                  cout<<"Your calculated Volume is:   ";
                  cout<<objv.cuboid(l, b , h)<<endl;
              break;   

         case 3: cout<<"Enter the radius"<<endl;
                  cin>>r;
                  cout<<"Your calculated Volume is:   ";
                  cout<<objv.sphere(r)<<endl;
              break;    

         case 4: cout<<"Enter the height and radius"<<endl;
                  cin>>h>>r;
                  cout<<"Your calculated Volume is:   ";
                  cout<<objv.cone(h,r)<<endl;
              break;  

          case 5: cout<<"Enter the height and radius" <<endl;
                  cin>>h>>r;
                  cout<<"Your calculated Volume is:   ";
                  cout<<objv.cylinder(h,r)<<endl;
              break;   

          default:
           cout<<"Invalid input pls try agin!"<<endl; 
           break;                               
    }
    

 break;
  

    
 
  case 3:
    cout<<"Enter the shape for which you want to calculate "<<endl;
    cout<<"1.rectangle"<<endl;
    cout<<"2.square"<<endl;
    cout<<"3.triangle"<<endl;
    cin>>User_input2;

      switch(User_input2)
      {
          case 1:  cout<<"Enter the length and breadth"<<endl;
                   cin>>l>>b;
                   cout<<"Your calculated perimeter is:  ";
                   cout<<objp.rectangle(l,b)<<endl;
                   break;
          case 2:  cout<<"Enter the length "<<endl;
                   cin>>l;
                   cout<<"Your calculated perimeter is:  ";
                   cout<<objp.square(l)<<endl;
                   break;
         case 3:  cout<<"Enter the lengths of 3 sides"<<endl;
                   cin>>s1>>s2>>s3;
                   cout<<"Your calculated perimeter is:  ";
                   cout<<objp.triangle(s1,s2,s3)<<endl;
                   break;                   
      }
          break;
 }     

 
  
    return 0;

}