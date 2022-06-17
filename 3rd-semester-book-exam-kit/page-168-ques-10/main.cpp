#include <iostream>
using namespace std;

class Float
{
    float data;
public:
    Float(){}
    Float(float d)
    {
        data = d;
    }
    Float operator+(Float f1);
    Float operator-(Float f2);
    Float operator*(Float f3);
    Float operator/(Float f4);
    void display();
};

Float Float::operator+(Float f1)
{
    Float temp;
    temp.data = data + f1.data;
    return temp;
}
Float Float::operator-(Float f2)
{
    Float temp;
    temp.data = data - f2.data;
    return temp;
}
Float Float::operator*(Float f3)
{
    Float temp;
    temp.data = data * f3.data;
    return temp;
}
Float Float::operator/(Float f4)
{
    Float temp;
    temp.data = data / f4.data;
    return temp;
}
void Float::display()
{
    cout << data << endl;
}
int main()
{
    Float F1, F2, F3, F4, F5, F6;
    F1 = Float(2.5);
    F2 = Float(3.1);
    F3 = F1 + F2;
    F4 = F1 - F2;
    F5 = F1 * F2;
    F6 = F1 / F2;

    cout << "F1 = ";
    F1.display();
    cout << "F2 = ";
    F2.display();
    cout << "F1 + F2 = ";
    F3.display();
    cout << "F1 - F2 = ";
    F4.display();
    cout << "F1 * F2 = ";
    F5.display();
    cout << "F1 / F2 = ";
    F6.display();

    return 0;
}
