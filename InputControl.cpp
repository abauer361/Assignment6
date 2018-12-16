#include <iostream>
#include <fstream>
#include <string>
#include "InputControl.h"
using namespace std;

	InputControl::InputControl()
	{

	}

	InputControl::InputControl(string n)
	{
		getInput(n);
	}

	InputControl::~InputControl()
	{

	}

	double* InputControl::getInput(string inputFile)
	{
		string line;
		double temp;
		int i=0;

    	ifstream file;
    	file.open(inputFile);
        if(file.fail())                //checks to make sure file is valid
        {
            cout<<"Invalid File! Please try again."<<endl;
            inputFile = again();
        }

    	getline(file, line);
    	temp = atof(line.c_str());
    	size = temp;
    	arr = new double[size];

    	while(getline(file, line))
    	{
    		
    		temp = atof(line.c_str());
    		arr[i] = temp;
    		i++;
    	}
        file.close();

        return arr;
	}

	int InputControl::getSize()
	{
		return size;
	}

	string InputControl::again()
	{
		string inputFile;
		cout<<"Enter input file name: "<<endl;
	    cin>>inputFile;
	    ifstream file(inputFile);
	    if(file.fail())                //checks to make sure file is valid
	    {
	        cout<<"Invalid File! Please try again."<<endl;
	        inputFile = again();
	    }
	    file.close();
	    return inputFile;
	}