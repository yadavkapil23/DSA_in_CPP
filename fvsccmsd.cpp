#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    int standard;
    float percentage;
};
class Kapil : public student
{
public:
    Kapil(){};
    Kapil(string n, int r, int s, float p)
    {
        name = n;
        roll = r;
        standard = s;
        percentage = p;
    };
    void display()
    {
        cout << "Name - " << name << endl;
        cout << "Roll No. - " << roll << endl;
        cout << "standard is - " << standard << endl;
        cout << "percentage in previous class - " << percentage << endl;
    }
};
int main()
{
    string name;
    int roll;
    int standard;
    float percentage;
    int x;
    cout << "enter the number of students in the class : ";
    cin >> x;
    Kapil *students = new Kapil[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter the name : " << endl;
        getline(cin, name);
        cout << "Enter the roll number of the student : ";
        cin >> roll;
        cout << "Enter the class of the student : ";
        cin >> standard;
        cout << "enter the percentage in the previous class : ";
        cin >> percentage;
        students[i] = Kapil(name, roll, standard, percentage);
    }
    for (int i = 0; i < x; i++)
    {
        students[i].display();
    }
    return 0;
}