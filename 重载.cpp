#include <bits/stdc++.h>
using namespace std;

class f1{
	
public:
	f1(int x){
		n=x;
		a.resize(n);
	}
	
	void in();
	void out();
	double avg();
	
	friend 	 istream& operator>>(istream& is,f1 &c){
			for(int i=0;i<c.a.size();++i)
				{
					int s;
					is>>s;
					c.a[i]=s;
				}
			return is;
	}
	friend   ostream& operator<<(ostream& os,const f1 & c){

			for(auto l:c.a)
			os<<l<<" ";
			os<<endl;
			return os;
	}
	double operator() () const{
		double res=0;
		for(auto c:a)
		res+=c;
		return res/n;
	}
	
private:
	int n;
	vector<int> a;

};

void f1::in(){
	for(int i=0;i<a.size();++i)
	cin>>a[i];
}
void f1::out(){
	for(auto l:a)
	cout<<l<<" ";
	cout<<endl;
}
double f1::avg(){
	double res=0;
	for(auto c:a)
	res+=c;
	return res/n;
}

char * fun1(char ss[],int n){
	char *res=new char[n+1];
	strcpy(res,ss);
	return res;
}

int main() 
{
	
/*{
int a=8,*p=&a;
char c='a';
char *d=&c;
double f=5.5;
double *k=&f;

cout<<a<<endl;
cout<<&a<<endl;
cout<<*p<<endl;
cout<<p<<endl;
cout<<&p<<endl;

cout<<sizeof(d)<<endl;
cout<<sizeof(k)<<endl;
cout<<sizeof(d)<<endl;
cout<<sizeof(k)<<endl;

	}
*/


{
	int x;
	cin>>x;
	f1 a(x);
	
	cin>>a;
	cout<<a;
    cout<<a()<<endl;
}


 /*{
 	int n;
	cin>>n;
	char cc[n];

	for(int i=0;i<n;++i)
	cin>>cc[i];

	char *p=fun1(cc,n);

	cout<<p<<endl;
	cout<<hex<<(int*)(p)<<endl;
 }
 */
 
return 0;
}

