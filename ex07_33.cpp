/*ex06_33.cpp*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch(int[], int, int);

int main()
{
   const int arraySize = 100;
   int a[arraySize];
   int searchKey;

   for(int i = 0; i < arraySize; i++)
   {
      a[i] = i * 2;
   }

   cout << "Enter integer search key: ";
   cin >> searchKey;

   int element = linearSearch(a, searchKey, arraySize);

   if(element != -1)
      cout << "Found value in element " << element << endl;
   else
      cout << "Value not found" << endl;
   
   return 0;
}

int linearSearch(int arr[], int key, int sizeOfArray)
{
   if(sizeOfArray == 0)
      return -1;
   else
   {
      if(arr[sizeOfArray - 1] == key)
         return sizeOfArray - 1;
      else
	 return linearSearch(arr, key,  sizeOfArray - 1);
   }
}
