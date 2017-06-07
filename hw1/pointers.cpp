#include <iostream>

using namespace std;

int main(){

//pointer to character
char  myChar='a';
char* pointy = &myChar;

//array of 10 integers
int myArr[10];
for(int i=0;i<10;i++){myArr[i]=1;}

//pointer to array of 10 integers
int* point = &myArr[0];

//pointer to array of 10 characters
char  charArr[10];
for(int i=0;i<10;i++){charArr[i] = 'r';}

char* pointy2 = &charArr[0];

//pointer to a pointer to a character
char dude = 'd';
char* pointyDude = &dude;
char**  pointierDude = &pointyDude;

//integer constant
const int bigNum = 1000000;

//pointer to integer constant
const int* bigPoint = &bigNum;

//constant pointer to integer
int someInt = 10;
int* const constPoint = &someInt;;

/////Part 2 of problem 1.10.2//////

//array on stack
int array[] = {1, 2, 3, 4, 5};

//array on heap
int* array2 = new int[5];

for(int i=0; i<5; i++){
array2[i] = i*i;;
}

delete[] array2;
}
