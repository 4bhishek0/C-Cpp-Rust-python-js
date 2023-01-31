#include <iostream>
#include <vector>
using namespace std;


struct student {
    char name[50];
    int Age;
    long Phone_number;
};

int main(){

    struct student info;
    cout << "Enter the name :";
    cin >> info.name;

    cout << "Enter the Age: ";
    cin >> info.Age;

    cout << "Enter the Phone Number:";
    cin >> info.Phone_number;

    vector<student> info;
}