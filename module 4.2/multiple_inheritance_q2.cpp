#include <iostream>
using namespace std;
class Student
{
protected:
    int Roll;

public:
    void get_Number(int);
    void put_Number();
};
void Student::get_Number(int R)
{
    Roll = R;
}
void Student::put_Number()
{
    cout << "Roll Number:  " << Roll << "\n";
}
class Test : public Student
{
protected:
    float Sub1;
    float Sub2;

public:
    void get_Marks(float, float);
    void put_Marks(void);
};
void Test::get_Marks(float x, float y)
{
    Sub1 = x;
    Sub2 = y;
}
void Test::put_Marks()
{
    cout << "Marks in Subject1= " << Sub1 << endl;
    cout << "Marks in Subject2= " << Sub2 << endl;
}
class Result : public Test
{
    float Total;

public:
    void display();
};
void Result::display()
{
    Total = Sub1 + Sub2;
    put_Number();
    put_Marks();
    cout << "Total= " << Total << endl;
}
int main()
{
    Result Student1;
    Student1.get_Number(55);
    Student1.get_Marks(50, 40);
    Student1.display();
    return 0;
}