#include<iostream>
using namespace std;

class person
{
    private:
    string name;
    int age;

    public:
    person(string person_name)
    {
        cout<<"Constructor to set name is called:"<<endl;
        name=person_name;
        age=20;
    }

    person(int person_age)
    {
        cout<<"Constructor to set age is called:"<<endl;
        name="student";
        age=person_age;
    }

    person(string person_name,int person_age)
    {
        cout<<"Contructor to both name and age is called:"<<endl;
        name=person_name;
        age=person_age;
    }

    void display()
    {
        cout<<"Name of the current object: "<<name<<endl;
        cout<<"Age of the current object: "<<age<<endl;
    }
};

int main()
{
    person obj1("First person");
    obj1.display();

    person obj2(24);
    obj2.display();

    person obj3("Second person",15);
    obj3.display();
}


/*
----------output----------
Constructor to set name is called:
Name of the current object: First person
Age of the current object: 20
Constructor to set age is called:
Name of the current object: student
Age of the current object: 24
Contructor to both name and age is called:
Name of the current object: Second person
Age of the current object: 15
*/