#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int recursions = 0;
int comparisons = 0;

// Read integers from input and store them in a vector.
// Return the vector.
vector<int> ReadIntegers() {
   int size;
   cin >> size;
   vector<int> integers(size);
   for (int i = 0; i < size; ++i) {               // Read the numbers
      cin >> integers.at(i);
      }
   sort(integers.begin(), integers.end());
   return integers;
}

int BinarySearch(int target, vector<int> integers, int lower, int upper) {
   recursions ++;
   int mid = (lower + upper)/2;
   if(integers.at(mid) == target){
      comparisons ++;
      return mid;
   }else if(lower == upper){
      comparisons +=4;
      return -1;
   }
   else if(integers.at(mid) < target){
      comparisons +=1;
      return BinarySearch(target,integers,mid+1,upper);
   }
   else{
      comparisons +=2;
      return BinarySearch(target,integers,lower,mid-1);
   }
}

int main() {
   int target;
   int index;

   vector<int> integers = ReadIntegers();

   cin >> target;

   index = BinarySearch(target, integers, 0, integers.size() - 1);
   printf("index: %d, recursions: %d, comparisons: %d\n",
          index, recursions, comparisons);

   return 0;
}
