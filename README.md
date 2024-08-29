# Exp12

# Aim 
To study and implement Constructors and Destructors
# Software 
Visula Studio Code
# Theory
Constructors and destructors are special member functions in C++ that manage initializing and cleaning up objects. For C++ object-oriented programming, they are necessary.

Special member functions known as constructors are triggered automatically upon the creation of a class object. It sets up the data members of the object. Constructors don't have a return type and have the same name as the class.

Constructor Types:
Default Constructor: A parameter-free constructor. The object is configured with default values.

Parameter Construcotr:A constructor that takes arguments and initializes an object with predetermined values at creation is known as a parameterized constructor.

Copy Constructor: Creates an object from another object of the same class using a copy constructor. When we need a duplicate object with the same values, it comes in handy.


Destroyers:

When an object leaves its scope or is deleted directly, a special member function known as a destructor is automatically executed. Its goal is to release any resources the object may have gathered over its existence, such memory. Destructors don't take parameters or return values; instead, they have the same name as the class, prefixed with a tilde (\).

CODES:

1. Defining constructor inside the class
```
#include<iostream>
using namespace std;
class student
{
 int rollno;
 char name[50];
 double fee;
 public:
 student()
 {
 cout<<"Enter the RollNo:";
 cin>> rollno;
 cout<<"Enter the Name:";
 cin>>name;
 cout<<"Enter the Fee:"; cin>>fee; } 
 
void display()
{
 cout<<endl<< rollno <<"\t"<<name<<"\t"<<fee;
 }
};
int main()
{
 student s; 
 s.display();
 return 0;
}

```
O/P:

![image](https://github.com/user-attachments/assets/92112b3b-dd07-4de8-9bfd-a4aab00a72a1)


2. Defining constructor outside the class
```
#include<iostream>
using namespace std;
class student
{
 int rno;
 char name[50];
 double fee;
 public:
 student();
 void display(); };
student::student()
 {
 cout<<"Enter the RollNo:";
 cin>>rno;
 cout<<"Enter the Name:";
 cin>>name;
 cout<<"Enter the Fee:"; 
 cin>>fee;
 } 
 void student::display()
 {
 cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
 }
int main()
{
 student s;
 s.display();
 return 0;
}

```

O/P:

![image](https://github.com/user-attachments/assets/a1866981-f62f-4be9-a048-72bfd50347b8)


3. Default Constructor
```
#include<iostream>
#include<string>
using namespace std;
class Data{
string name;
int roll_no;
char dept[50];
int batch;
public:
Data(){
cout<<"Name: ";
cin>>name;
cout<<"Roll Number: ";
cin>>roll_no;
cout<<"Department: ";
cin>>dept;
cout<<"Batch: ";
cin>>batch;
}
void display(){
cout<<endl<<"DETAILS:"<<endl<<name<<" "<<roll_no<<" "<<dept<<
" "<<batch<<endl;
}
};
int main(){
Data d1;
d1.display();
}
```
O/P:

![image](https://github.com/user-attachments/assets/7645db2e-1b31-4219-a45d-d6a2bd8cb867)


4. Parameterized Constructor
```
#include<iostream>
using namespace std;

class Num{

public:
Num(int c, int d){
if(c>d){
cout<<c<<" is greater";
}
else{
cout<<d<<" is greater";
}
}
};
int main(){
Num n1(11,13);
}
```
O/P:

![image](https://github.com/user-attachments/assets/28922a1d-c306-4471-9a14-2f73df4ab734)


5. Copy Constructor 
```
#include<iostream>
#include<string.h>
using namespace std;
class student
{
 int rno;
 char name[50];
 double fee;
 public:
 student(int,char[],double);
 student(student &t) //copy constructor
 {
 rno=t.rno;
 strcpy(name,t.name);
 fee=t.fee;
 }
 void display();
 
};
 student::student(int no,char n[],double f)
 {
 rno=no;
 strcpy(name,n);
 fee=f;
 } 
 void student::display()
 {
 cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
 }
 
int main()
{
 student s(1001,"Man",10000);
 s.display();
 
 student man(s); 
 man.display();
 
 return 0;
}

```
O/P:

![image](https://github.com/user-attachments/assets/0d8579c0-d8b4-466b-8fc8-851e5ff9fc80)


6. Deconstructor
```
#include<iostream>
using namespace std;
int count=0;
class destruct{
public:
destruct()
{
count++;
cout<<"No. of objects created: "<<count<<endl;
}
~destruct()
{
count--;
cout<<"No. of objects destroyed: "<<count<<endl;
}
};
int main()
{
destruct aa,bb,cc;
{ destruct dd;
}
return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/e9a19680-c97b-42e3-99e8-35726d2b512a)



# Conclusion 
The included codes show you how to use different kinds of C++ constructors and destructors. When an object is formed in the first two cases, member variables are initialized using default constructors that are declared both inside and outside the class. A parameterized constructor that takes parameters and carries out particular operations is demonstrated in the third example. Object copying is made easier by showing how to initialize a new object with the values of an existing object, as demonstrated in the copy constructor example. Lastly, the example of the destructor shows how destructors automatically take care of source removal when objects exit scope. These concepts are fundamental to C++ object lifecycle management.
