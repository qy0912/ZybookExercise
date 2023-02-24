#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void BubbleSort(int numbers [], int numElements){
   for(int i = 0 ; i < numElements ; i++){
      for(int j = 0 ; j < numElements-1 ; j++){
         if(numbers[j]>numbers[j+1]){
            int temp = numbers[j+1];
            numbers[j+1] = numbers[j];
            numbers[j] = temp;
         }
      }

      for(int k = 0 ; k < numElements ; k++){
         cout<<numbers[k]<<" ";
      }
      cout<<endl;
   }
}

void SelectionSortDescendTrace(int numbers [], int numElements) {
   for(int i = 0 ; i < numElements ; i++){
      int max = numbers[i];
      int index = i;
      for(int j = i+1; j<numElements ; j++){
         if(max>numbers[j]){
            max = numbers[j];
            index = j;
         }
      }
      int temp = numbers[i];
      numbers[i] = max;
      numbers[index] = temp;
      
      if(i!=numElements-1){
         for(int k = 0 ; k < numElements ; k++){
            cout<<numbers[k]<<" ";
         }
         cout<<endl;
      }
   }
}


int main() {
   int input, i = 0;
   int numElements = 0;
   int numbers [10];

   cin>> input;
   while(input!=-1){
      numbers[i] = input;
      i++;
      cin>>input;
   }
   
   BubbleSort(numbers,i);
   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.
   

  return 0;
}