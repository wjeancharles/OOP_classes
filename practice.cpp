//
// Created by Owner on 1/14/2023.
//

#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

// Creates the student object which takes in the persons name, age, and gender
class Person {
public:
    int age = 0;
    string gender;
    string name;
};

//Global Variable for the purpose of the project
Person student1;

void intro();
void create_person();
void display_person();
void goodbye();

int main(){

    intro();
    create_person();
    display_person();
    goodbye();

    return 0;
}

void intro(){
    cout<<"Welcome to my program. I will need you to input you name, age, and gender to continue."<<endl;
}

void create_person(){
    cout<<"Please enter your first name"<<endl;
    cin>> student1.name;

    cout<<"Please enter your age"<<endl;
    cin>> student1.age;

    cout<<"Please enter your gender. Either an m or an f"<<endl;
    cin>> student1.gender;
}

void display_person(){
    cout<<"Here is your information:"<<endl;
    cout<<"Name = "<< student1.name<<endl;
    cout<<"Age = "<<student1.age<<endl;
    cout<<"Gender = "<<student1.gender<<endl;
}

void goodbye(){
    cout<<"Thank you for using my program. Goodbye!"<<endl;
}