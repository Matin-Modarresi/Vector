#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int>a;
	vector<int>::size_type k;
	
	k=a.capacity();//0
	
	for(int i=0 ; i<50 ; i++)
	{
		a.push_back(i);
		if(k!=a.capacity())
		{
			k=a.capacity();
			cout << k << endl;
		}
	}
}
