#include <iostream> 

using namespace std;
int main () { 
int x= 2;
int y= 2;
int z= x-y;
int j= x+y;
int k= x*y;
int u= x/y;
string palabra;

cout<<"Escriba su nombre: ";
cin>>palabra;
cout<<"\n valor de x: ";
cin>>x;
cout<<"\n valor de y: ";
cin>>y;


z= x-y;
j= x+y;
k= x*y;
u= x/y;

cout<<"\n la resta de x - y = " << z ; 
cout<<"\n la suma de x - y = " << j ;
cout<<"\n la multiplicacion de x * y = " << k;
cout<<"\n la division de x / y =" << u;
 
 
}
