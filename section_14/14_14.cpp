#include <iostream>
#include <vector>
#include <set>
using namespace std;

void PrintNums(vector<int> nums, int size) {
   for (int i = 0; i < size; ++i) {
      cout << nums.at(i) << " ";
   }
}


int retries;

vector<int> UniqueRandomInts(unsigned int howMany, int maxNum) {
   
   int nextRand;
   retries = 0;
   set<int> alreadySeen;
   vector<int> nums;

   /* Type your code here. */
   while(nums.size()<howMany){
      nextRand = rand()%(maxNum);
      if(!(alreadySeen.count(nextRand))){
         nums.push_back(nextRand);
         alreadySeen.insert(nextRand);
      }else{
         retries++;
      }
   }
   return nums;

}

int main() {
   unsigned int howMany;
   unsigned int maxNum;

   cin >> howMany;
   cin >> maxNum;
   vector<int> uniqueInts;

   srand(641);                      // Seed random number generator for testing

   uniqueInts = UniqueRandomInts(howMany, maxNum);
   PrintNums(uniqueInts, howMany);
   cout << "  [" << retries << " retries]" << endl;
   
   return 0;
}
