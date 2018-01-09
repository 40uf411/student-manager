#include <iostream>
#include <fstream>
using namespace std;
typedef struct{
string name;
string lname;
int id;
int grade;
}student;
int main()
{
    cout<<"how maney students you hav got: ";
    int i,mn=0,mm=0,mx=0,xx=0;
    cin>> i;
    student t[i];
    cout<<endl;
    int co;
    for(co=0;co<i;co++){
     cout<<"enter the name of student N "<<co<<" : ";
     cin>>t[co].name;
     cout<<"enter the last name of student N "<<co<<" :";
     cin>>t[co].lname;
     cout<<"enter the grad of student N "<<co<<": ";
     cin>>t[co].grade;cout<<endl;
     t[co].id=co;
     if(t[co].grade<mm ){mn=t[co].id;}
     if(t[co].grade>xx ){mx=t[co].id;}
    }
    ofstream out;
    out.open("marks.txt",ios::out | ios::trunc);
    out<<"you have "<<co<<"students"<<endl;
    out<<"the best one is "<<t[mn].name<<" "<<t[mn].lname<<endl;
    out<<"the lowest is "<<t[mx].name<<" "<<t[mx].lname<<endl;
    out<<"name\t\tLName\t\tid\t\tmark"<<endl<<endl;
    for(int co=0;co<i;co++){
     out<<t[co].name<<"\t\t";
     out<<t[co].lname<<"\t\t";
     out<<t[co].id<<"\t\t";
     out<<t[co].grade<<"\t\t"<<endl;
    }
    out.close();
    cout<<"done!";
    return 0;
}
