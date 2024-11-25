#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    int id;
    string lastName;
    string firstName;
    char gender; 
    string birthDate;

public:
 
    Person(int id, string lastName, string firstName, char gender, string birthDate) {
        this->id = id;
        this->lastName = lastName;
        this->firstName = firstName;
        this->gender = gender;
        this->birthDate = birthDate;
    }

   
    void display() {
        cout << "ID: " << id << endl;
        cout << "姓: " << lastName << endl;
        cout << "名: " << firstName << endl;
        cout << "性別: " << (gender == 'M' ? "Male" : "Female") << endl;
        cout << "生日: " << birthDate << endl;
    }
};

int main() {
    Person person(1, "Smith", "John", 'M', "1990-01-01");
    person.display()

    return 0;
}
