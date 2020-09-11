#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v{1,2,3};
	
	cout << *v.begin(); //1
	cout << v.front();  //1
	cout << v[0];       //1
	cout << v.at(0);    //1
	
	cout << "\n\n";
	
	cout << *(v.end()-1);//3
	cout << v.back();   //3
	cout << v.at(v.size()-1);//3
	cout << v[v.size()-1];//3
}
