#include <iostream>
using namespace std;
#include "InputControl.h"
#include "QuickSort.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

int main(int argc, char const *argv[])
{
  if(argc > 1)
  {
  	double* ar;


    string inputFile = argv[1]; //grabs second command line argument as a file name
    InputControl input;
    ar = input.getInput(inputFile);
    double* arr = new double[input.getSize()];

    arr = ar;

    
  	QuickSort quick;
  	quick.call(arr, input.getSize());
  	BubbleSort bubble;
  	bubble.call(arr, input.getSize());
  	SelectionSort selection;
  	selection.call(arr, input.getSize());
  	InsertionSort insertion;
  	insertion.call(arr, input.getSize());
  }
  else
  {
    cout<<"Please make sure your file name is your second command line argument"<<endl;
  }
}


