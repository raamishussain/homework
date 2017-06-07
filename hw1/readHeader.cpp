#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){

	ifstream inFile("/Users/rhussain/cppBootCamp/homework/hw1/matrixMarket.txt");


//Loop through file
	while(!inFile.eof()){
		 
		string line;
		getline(inFile,line);

		//check if first character of line is %, if not then proceed
		if (line[0]!='%'){

			istringstream iss(line);
			int rows, columns, nonz;

			iss >> rows;
			iss >> columns;
			iss >> nonz;

			cout << "Number of Rows: " << rows << endl;
			cout << "Number of Columns: " << columns << endl;
			cout << "Number of non-zero elements: " << nonz << endl;

			break;
		}
	}

	return 0;
}