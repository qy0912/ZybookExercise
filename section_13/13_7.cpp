#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // to use sort()
using namespace std;

const int NUM_VALUES = 5;

// Input NUM_VALUES of TheType into the vector parameter
template<typename TheType> void Read(vector<TheType>& list) {
   for (int j = 0; j < NUM_VALUES; ++j) {
      cin >> list.at(j);
   }
}

// Output the elements of the vector parameter
template<typename TheType> void Write(vector<TheType>& list) {
   long unsigned int j;
   for (j = 0; j < list.size(); ++j) {
      cout << list.at(j) << " ";
   }
}

// Return the min, median, and max of the vector parameter in a new vector
template<typename TheType> vector<TheType> GetStatistics(vector<TheType>& list) {
   /* Type your code here. */
   // vector<TheType> v = list;
   sort(list.begin(), list.end());
   vector<TheType> output;
   output.push_back(list.at(0));
   output.push_back(list.at(2));
   output.push_back(list.back());

   return output;
}

// Read values into a vector, sort the vector, output the sorted vector,
// then output the min, median, and max of the sorted vector
template<typename TheType> void Run(vector<TheType>& list) {
   /* Type your code here. */
   vector<TheType> v(NUM_VALUES);
   Read(v);
   vector<TheType> stat = GetStatistics(v);
   // sort(v.begin(),v.end());
   Write(v);
   cout<<endl;
   Write(stat);
   cout<<endl;
}

int main() {
   vector<int> integers(NUM_VALUES);
   Run(integers);
   cout << endl;

   vector<double> doubles(NUM_VALUES);
   Run(doubles);
   cout << endl;

   vector<string> strings(NUM_VALUES);
   Run(strings);

   return 0;
}
