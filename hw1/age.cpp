#include <iostream>
#include <fstream>

using namespace std;

int main(){

int      age;
ofstream myFile("age.txt");

cout << "What is your age?" << endl;
cin >> age;

myFile << age << endl;

cout << age << endl;

return 0;
}
