#include <iostream>
#include <vector>

using namespace std;

int mean(int *x , size_t n)
{
	int sum = 0;
	size_t i;
	
	for(i=0 ; i<n ; i++)
	  sum += x[i];
	  
	  return sum/n;
}

int main()
{
   int a[] = {1,2,3};
   vector<int> v(a,a+3);
   
   cout << mean(&v[0],3) << endl;	
}
