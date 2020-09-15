#include <iostream>
#include <vector>

using namespace std;

int main()
{
   
   vector<string>v;
   vector<string>::size_type i;
   v.reserve(5);
   
   v.push_back("Hello");

   v.insert(v.end(),{"how" , "are" , "you" , "?" , "Matin"});

   for( i=0 ; i < v.size(); i++)
       cout << v[i] << " ";

   cout << endl;
   cout << v.capacity() << "\n";//6
   cout << v.size() << "\n";    //6

   swap(v[1],v[3]);

   v.back() = '!';

   for(i=0 ; i<v.size() ; i++)
       cout << v[i] << ' ';
   cout << endl;
   
   v.pop_back();
   for(i=0 ; i<v.size() ; i++)
     cout << v[i] << ' ';
     cout << endl;
     
     cout << v.capacity() << '\n';//6
     cout << v.size() ;          //5
}
