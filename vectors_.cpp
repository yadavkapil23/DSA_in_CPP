#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(56);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    for (auto element : v)
    { // Loops through each element of vector v using a range-based for loop.
        cout << element << endl;
    }
    v.pop_back();
    vector<int> v2(3, 50); //creates a new vector with 3 elements of 50.
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << "the v2 vector is : ";
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << "The vectors v and v2 after swapping are : " << endl;
    swap(v, v2);
    cout << "your v is : ";
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << "your v2 is : " << endl;
    for (auto element : v2)
    {
        cout << element << " ";
    }
}



















#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(76);
    v.push_back(34);
    v.push_back(95);
    cout<<"Your vector is : ";
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<endl;
    }
    vector<string> v2;
    v2.push_back("Kapil");
    v2.push_back("Neha");
    v2.push_back("Raj");
    v2.push_back("Alina");
    cout<<"your vector v2 is : "<<endl;
    vector<string> :: iterator it;
    for(it =v2.begin() ; it!=v2.end() ; it++){
        cout<<*it<<endl;
    }
    v.pop_back();
    for(auto element : v){
        cout<<element<<endl;
    }
    return 0;
}