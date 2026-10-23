#include <iostream>
using namespace std;

// 1. SINGLE INHERITANCE : Animal -> Dog
class Animal {
public:
    void eat() { cout << "Animal eats food" << endl; }
};

class Dog : public Animal {          // Dog gets eat() from Animal
public:
    void bark() { cout << "Dog barks" << endl; }
};

// 2. MULTILEVEL INHERITANCE : Grandfather -> Father -> Son
class Grandfather {
public:
    void showGrandfather() { cout << "Grandfather owns the house" << endl; }
};

class Father : public Grandfather {  // Father gets Grandfather's function
public:
    void showFather() { cout << "Father owns the shop" << endl; }
};

class Son : public Father {          // Son gets Father's and Grandfather's functions
public:
    void showSon() { cout << "Son is a student" << endl; }
};

// 3. MULTIPLE INHERITANCE : Writer + Singer -> Artist
class Writer {
public:
    void write() { cout << "Artist writes a song" << endl; }
};

class Singer {
public:
    void sing() { cout << "Artist sings the song" << endl; }
};

class Artist : public Writer, public Singer {   // Artist gets both classes
};

// 4. HIERARCHICAL INHERITANCE : Shape -> Rectangle and Triangle
class Shape {
public:
    int a, b;                        // common data for both shapes
};

class Rectangle : public Shape {
public:
    void area() { cout << "Area of Rectangle = " << a * b << endl; }
};

class Triangle : public Shape {
public:
    void area() { cout << "Area of Triangle = " << a * b / 2 << endl; }
};

// 5. HYBRID INHERITANCE : Student -> Test and Sports -> Result
class Student {
public:
    int rollNo;
};

class Test : virtual public Student {    // virtual = only one copy of Student
public:
    int marks;
};

class Sports : virtual public Student {
public:
    int score;
};

class Result : public Test, public Sports {
public:
    void show() {
        cout << "Roll No      = " << rollNo << endl;
        cout << "Test marks   = " << marks << endl;
        cout << "Sports score = " << score << endl;
        cout << "Total        = " << marks + score << endl;
    }
};

int main() {
    cout << "--- 1. Single Inheritance ---" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << endl << "--- 2. Multilevel Inheritance ---" << endl;
    Son s;
    s.showGrandfather();
    s.showFather();
    s.showSon();

    cout << endl << "--- 3. Multiple Inheritance ---" << endl;
    Artist a;
    a.write();
    a.sing();

    cout << endl << "--- 4. Hierarchical Inheritance ---" << endl;
    Rectangle r;
    Triangle t;
    r.a = 10;  r.b = 5;
    t.a = 10;  t.b = 5;
    r.area();
    t.area();

    cout << endl << "--- 5. Hybrid Inheritance ---" << endl;
    Result res;
    cout << "Enter roll no, test marks and sports score: ";
    cin >> res.rollNo >> res.marks >> res.score;
    res.show();

    return 0;
}