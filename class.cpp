#include <iostream>
using namespace std;
class Motors
{
public:
    string name;
    float price;
    int models;
    Motors(){};
    Motors(string n, float p, int m)
    {
        name = n;
        price = p;
        models = m;
        cout << "Eicher Motors is an Indian Automobile Company." << endl;
    }
    void getname()
    {
        cout << "Name is : " << name << endl;
        cout << "Price is : " << price << endl;
        cout << "No. of models are : " << models << endl;
    }
};
int main()
{
    Motors Canter("Canter 1546", 1000000, 12);
    Canter.getname();
    Motors RoyalEnfield("Bullet", 350, 190000);
    RoyalEnfield.getname();
}