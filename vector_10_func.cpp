#include <iostream>
#include <vector>

using namespace std;


template <typename T>

void show(const vector<T>& v)
{
	for(auto i=v.rbegin() ; i!=v.rend() ; i++)
	cout << *i << ' ';
}


int main()
{
	vector<string> v{"ali","matin","reza"};
	
	show(v);
	
	cout << endl;
	
	vector<int> w{1,2,3};
	
	show(w);
}
