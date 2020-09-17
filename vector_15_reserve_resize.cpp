#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

#define CAPA_SIZE  cout << v.capacity() << "\n";\
cout << v.size() << "\n";


int main()
{
	std::vector<int>v;
	
	v.reserve(15);
	v.resize(16);
	
	cout << v.size() << "\n";     // 16 
	cout << v.capacity() << "\n"; //16
	
	v.reserve(16); 
	v.resize(15);
	
	cout << v.size() << "\n";       //15
	cout << v.capacity() << "\n";  //16
	
	v.resize(0);         // size = 0 
	v.shrink_to_fit();  // capacity = 0
	
	v.reserve(3);      // size=0 , capacity=3
	
	v.push_back(8);   //  size=1 , capacity=3
	
	v.resize(5);     //  8 0 0 0 0
	cout << v.size() << "\n"; //5
	cout << v.capacity() << "\n"; //5
	
    v.push_back(9);                 // 8 0 0 0 0 9
    cout << v.size() << "\n";      // 6
    cout << v.capacity() << "\n"; // 10
    
    v.reserve(1); // do nothing
    
    v.resize(3);                    // 8 0 0
    cout << v.size() << "\n";      // 3
    cout << v.capacity() << "\n"; // 10 
    
    v.resize(6,1);                   // 8 0 0 1 1 1
     cout << v.size() << "\n";      // 6
    cout << v.capacity() << "\n";  //10

}
