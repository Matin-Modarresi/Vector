#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<vector<char> >x;
	
	vector<char> v1{'a','l','i'};
	vector<char> v2{'m','a','t','i','n'};
	
	x.push_back(v1);
	x.push_back(v2);
	
	vector<vector<char> >::size_type i;
//	cout << i << '\n';   unexpected
	
	vector<char>::iterator p; 

    for(i=0 ; i<x.size() ;i++)
    {
    	p = x[i].begin();
    	
    	while(p!=x[i].end())
    		cout << *p++ << ' ';
    		
    	cout << '\n';	
		
	}
}
