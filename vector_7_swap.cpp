#include <iostream>
#include <vector>
using namespace std;


int main()
{
	
	vector<bool>v;
   	
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);

    vector<bool>w;
    w.push_back(false);
    w.push_back(false);
    
    //v 1 0 1 1
    //w 0 0
    
    w.swap(v.back(),w.front()); //v : 1 0 1 0     w : 1 0     
    v.swap(v[3],w[1]);//v : 1 0 1 0       w : 1 0
    v.swap(v[0],v[1]);//v : 0 1 1 0       w : 1 0
    w.swap(v);//v : 1 0      w : 0 1 1 0
    
    cout << boolalpha;
    
    for(auto item:w)
    cout << item << " ";
    
    cout << endl;
    
	for(auto item:v)
	cout << item << " ";
	
}

