#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class InputControl{
public:
	InputControl();
	InputControl(string n);
	~InputControl();
	double* getInput(string inputFile);
	string again();
	int getSize();

	double* arr;

private:
	int size;
};