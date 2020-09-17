#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>v1;
	vector<int>v2;
	
   v1.push_back(9);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(6);
   
   v2.assign(5,7);
   
   if(v1>v2)
   cout << "vector1 is bigger than vector2";
   
   else if(v2>v1)
   cout << "vector2 is bigger than vector1";
   
   else cout << "vector2 is equal vecotr1";
}
