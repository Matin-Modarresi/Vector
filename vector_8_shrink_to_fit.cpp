#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6);
	
	cout << v.size()  << "\n";//6
	cout << v.capacity() << "\n";//6
	
	cout << "resize-----------------\n";
    v.resize(3);
    cout << v.size() << "\n";//3
    cout << v.capacity() << "\n";//6
    
    cout << "use shrink_to_fit-------------------\n";
    
    v.shrink_to_fit();
    cout << v.size() << "\n";//3
    cout << v.capacity() << "\n";//3
    
}
