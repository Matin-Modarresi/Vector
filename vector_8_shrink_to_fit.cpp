#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6);
	
	cout << v.size()  << "\n";
	cout << v.capacity() << "\n";
	
	cout << "resize-----------------\n";
    v.resize(3);
    cout << v.size() << "\n";
    cout << v.capacity() << "\n";
    
    cout << "use shrink_to_fit-------------------\n";
    
    v.shrink_to_fit();
    cout << v.size() << "\n";
    cout << v.capacity() << "\n";
    
}
