#include<iostream>
#include<conio.h>
using namespace std;
class value {
	int num,b;
	public:
		value(){
			num=0;
			
		}
		value(int n){
			num=n;
		
			
		}
		void display(){
			cout<<"the number is is "<<num<<endl;
		}
		void operator +( );
		void operator -();
	
};
void value:: operator +(){
	int count;
	
count =num++;
cout<<"the value of num after ++"<<endl<<num<<endl;
}
void value::operator -(){
	int count;
	
	count=num--;
	cout<<"the value of num after --"<<endl<<num;
}
int main ()
{

	int n1;
cout << "enter   number "<<endl;
cin>>n1;
 value v(n1);
 v.display();
 +v;
 -v;
getch();
return 0;


 
}
