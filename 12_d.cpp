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