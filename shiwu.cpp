#include<iostream>
#include<conio.h>
using namespace std;
class M{
	protected:
		int m;
		public:
			void getm(){
				cout<<"enter the value of m:"<<endl;
				cin>>m;
			}
			void putm(){
				cout<<"the vlaue of m :"<<m<<endl;
			}
};
class N{
	protected:
		int n;
		public:
			void getn(){
				cout<<"enter the value of n:"<<endl;
				cin>>n;
			}
			void putn(){
				cout<<"the vlaue of n :"<<n<<endl;
			}
};
class P:public M,public N {
	int total;
	public:
	
	void display(){
		total=m*n;
		cout<<"the multiplication is "<<total<<endl;
	}
	
};
int main(){
	P p1;
	p1.getm();
	p1.getn();
	p1.putm();
	p1.putn();
	p1.display();
	getch();
	return 0;
}

