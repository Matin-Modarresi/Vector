#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//template <typename T>

int main()
{
	vector <int> v;
	
	istream_iterator <int> a(cin);
	
    v.push_back(*a);
	a++;
	
	v.push_back(*a);
	a++;
	
	v.push_back(*a);
	
	
	vector<int>::iterator iter = v.begin();
  
     while(iter != v.end())
     {
     	cout << *iter++ << ' ';
	 }
  
}
