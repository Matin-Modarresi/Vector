#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>a{1,2,3,4,5,6};
	
	a.resize(3);
	
	for(auto item:a)
	cout << item << ' ';       //1 2 3
	
	cout << endl;
	///////////////////////////////////////
	a.resize(9);
	
	for(auto item:a)
	cout << item << ' '; // 1 2 3 0 0 0 0 0 0 
	
	cout << endl;
	///////////////////////////////////////
	a.resize(12,45);
	
	for(auto item:a)
	cout << item << ' '; // 1 2 3 0 0 0 0 0 0 45 45 45
}
