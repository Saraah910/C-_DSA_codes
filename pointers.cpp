#include <iostream>
#include <stack>
#include <string>
 
using namespace std;
int len(char s[])
{
    int cntr = 0;
    while(s[cntr] != '\0')
    {
        cntr++;
    }
    return cntr;
}
 
int plen(char *s)
{
    int cntr = 0;
    while(*s != '\0')
    {
        cntr++;
        s++;
    }
    return cntr;
}
 
string copy(char s[])
{
int cntr = 0;
    char cop[50];
    while(s[cntr] != '\0')
    {
        cop[cntr] = s[cntr];
        
        cntr++;
    }
    cop[cntr] = '\0';
    return cop;
}
 
string pcopy(char *s)
{
int cntr = 0;
    char cop[50];
    while(*s != '\0')
    {
        cop[cntr] = *s;
        cntr++;
        s++;
    }
    cop[cntr] = '\0';
    return cop;
}
 
string concat(char s[],char s0[])
{
    int cntr1 = 0,cntr2 = 0;
    char con[50];
    while(s[cntr1] != '\0')
    {
        con[cntr1] = s[cntr1];
        cntr1++;
    }
    
    while(s0[cntr2] !='\0')
    {
        con[cntr1] = s0[cntr2];
        cntr2++;
        cntr1++;
    }
    con[cntr1] = '\0';
    return con;
}
 
string pconcat(char *s,char *s0)
{
    int cntr1 = 0,cntr2 = 0;
    char con[50];
    while(*s != '\0')
    {
        con[cntr1] = *s;
        cntr1++;
        s++;
    }
    
    while(*s0 !='\0')
    {
        con[cntr1] = *s0;
        s0++;
        cntr1++;
    }
    con[cntr1] = '\0';
    return con;
}
 
void again()
{
   char choice;
        cout << "Do you want to try again (Y/N) ?: ";
        cin >> choice;
        if(choice == 'y' || choice == 'Y'){}
        else if(choice == 'n' || choice == 'N')
        exit(0);
        else
        {
            cout << "Entre your choice (Y/N) !";
            again();
        } 
}
 
string rev(char s[])
{
char revved[50];
int i = 0;
stack<char> st;
while(s[i] != '\0')
{
st.push(s[i]);
i++;
}
i = 0;
while(!st.empty())
{
revved[i] = st.top();
st.pop();
i++;
}
revved[i] = '\0';
return revved;

}
 
string prev(char *s)
{
char revved[50];
int i = 0;
stack<char> st;
while(*s != '\0')
{
st.push(*s);
i++;
s++;
}
i = 0;
while(!st.empty())
{
revved[i] = st.top();
st.pop();
i++;
}
revved[i] = '\0';
return revved;

}
 
string comp(char str1[],char str2[])
{
int i = 0;
while(str1[i] != '\0' && str2[i] != '\0' )
{
if(str1[i] < str2[i])
return str2;
else if(str1[i] > str2[i])
return str1;
}
return str1;
}
 
string pcomp(char *str1,char *str2)
{
while(*str1 != '\0' && *str2 != '\0' )
{
if(*str1 < *str2)
return str2;
else if(*str1 > *str2)
return str1;
str1++;
str2++;
}
return str1;
}
 
int main()
{
    int selected;
    char s1[50],s2[50];
    cout << "Enter string 1: ";
    cin >> s1;
    cout << "Enter string 2: ";
    cin >> s2;
    while(1)
    {
    	int cnt = 0;
    	system("pause");
        system("cls");
        cout << "----Select operation----" << endl;
        cout << "1) Length\n2)Copy\n3)Concat\n4)Compare\n5)Reverse\n6)Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selected;
        switch(selected)
        {
            case 1:
                cout << "Length of s1 is " << len(s1) << " and length of s2 is " << len(s2) << endl;
                cout << "Pointers: Length of s1 is " << plen(s1) << " and length of s2 is " << plen(s2) << endl;
                break;
            
            case 2:
            	cout << "Source string is " << s1 << " copied string is ";
            	while(copy(s1)[cnt] != '\0')
                {
                    cout << copy(s1)[cnt];
                    cnt++;
                }
                cout <<endl;
                cnt = 0;
                cout << "Pointers: Source string is " << s1 << " copied string is ";
            	while(pcopy(s1)[cnt] != '\0')
                {
                    cout << pcopy(s1)[cnt];
                    cnt++;
                }
                cout <<endl;
            	break;
            	
            case 3:
            
                cout << "Concatenated string is ";
                while(concat(s1,s2)[cnt] != '\0')
                {
                    cout << concat(s1,s2)[cnt];
                    cnt++;
                }
                cout <<endl;
                cnt = 0;
                cout << "Pointers: Concatenated string is ";
                while(pconcat(s1,s2)[cnt] != '\0')
                {
                    cout << pconcat(s1,s2)[cnt];
                    cnt++;
                }
                cout <<endl;
                break;
                
            case 4:
            	cout << "Comparing s1: " << s1 << ", and s2: " << s2 << ", Result: ";
            	while(comp(s1,s2)[cnt] != '\0')
                {
                    cout << comp(s1,s2)[cnt];
                    cnt++;
                }
            	cout << endl;
            	cnt = 0;
            	cout << "Pointers: Comparing s1: " << s1 << ", and s2: " << s2 << ", Result: ";
            	while(pcomp(s1,s2)[cnt] != '\0')
                {
                    cout << pcomp(s1,s2)[cnt];
                    cnt++;
                }
            	cout << endl;
                break;
   	
            case 5:
            	cout << "Reverse of string s1: " << s1 << ", is: ";
while(rev(s1)[cnt] != '\0')
                {
                    cout << rev(s1)[cnt];
                    cnt++;
                }
                cout << endl;
                cnt = 0;
                cout << "Pointers: Reverse of string s1: " << s1 << ", is: ";
while(prev(s1)[cnt] != '\0')
                {
                    cout << prev(s1)[cnt];
                    cnt++;
                }
                cout << endl;
            	break;
            	
            case 6:
            	cout << "----Exit----";
exit(0);
            	
            default:
    
            	cout << "Please enter a menu number !" << endl;
        }
        again();
        
    }
    
    return 0;
}

