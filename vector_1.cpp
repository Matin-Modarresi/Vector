#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v;
	int sum(0);
	
	v.push_back(12);
	v.push_back(2);
	v.push_back(8);
	v.push_back(7);
	v.push_back(4);
	
	cout << v.front() << endl; //12
	cout << v.back() << endl;  //4
	cout << v.size() << endl; //5
	
	while(!v.empty())
	{
		sum+=v.back();
		v.pop_back();
	}
	
	cout << sum;//33
}
