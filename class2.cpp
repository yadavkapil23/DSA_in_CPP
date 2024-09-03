// // classes
// #include <iostream>
// using namespace std;
// class Bike //bike is base class.
// {
// public:
//     string name;
//     int units;
//     float price;
//     string color;
//     Bike() {};
//     Bike(string n, int u, float p, string c)
//     {
//         name = n;
//         units = u;
//         price = p;
//         color = c;
//         cout << "this is the parametrised constructor" << endl;
//     }
//     void getname() //getname is method.
//     {
//         cout << "The Bike Name is : " << name << endl;
//         cout << "The units produced are : " << units << endl;
//         cout << "The price of the Bike is : " << price << endl;
//         cout << "The color of the Bike is : " << color << endl;
//     }
// };
// int main()
// {
//     Bike Hero("Splendor+", 9999512, 79999, "Black");
//     Hero.getname();
//     Bike TVS("Sport", 783641, 72899, "All Black");
//     TVS.getname();
//     Bike Bajaj("Pulsar", 578641, 105999, "Red with Black");
//     Bajaj.getname();
//     Bike RoyalEnfield("Bullet", 3484966, 175999, "Black");
//     RoyalEnfield.getname();
// }









#include<iostream>
 using namespace std;
 class Motors{
public:
 void display(){
    cout<<"This is a Motors class"<<endl;
 }
 };
 class Bike:public Motors{
    public:
    string name;
    string color;
    float price;
    int units;
    void info(){
        cout<<"Bike Name: "<<name<<endl;
        cout<<"Bike Color : "<<color<<endl;
        cout<<"Bike Price : "<<price<<endl;
        cout<<"Bike Units produced : "<<units<<endl;
    }
 };
 int main(){
    Bike Hero;
    Hero.name="Splendor+";
    Hero.color="Red";
    Hero.price=79999;
    Hero.units=9999512;
    Hero.display();
    Hero.info();
    return 0;
 }