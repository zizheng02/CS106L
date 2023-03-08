#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    char middleInitial;
    string name;
    
    cout << "Enter your age in years: ";
    cin >> age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your middle initial: ";
    cin >> middleInitial;
    
    cout << "Hi " << name << "! You are " << age 
    << " years old. Your middle initial is " << middleInitial;
    

    return 0;
}

// Instructions: first try as is, then with all getlines, then with all >>
