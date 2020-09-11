#include <iostream>
#include <vector>
using namespace std;


class c{
	
	int x;
	
	public:
		c(int i=7):x(i){}
		
		int f(){return x;}
};


int main()
{
	c m(3);
	vector<c> v{1,2};
	
	v.insert(v.end(),m);
	
	for(auto item:v)
	cout << item.f() << ' ' ;
}
