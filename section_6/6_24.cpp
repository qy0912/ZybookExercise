#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* Define your function here */
void SortVector(vector<int>& myVec){
   sort(myVec.begin(), myVec.end(), greater<int>());
}

int main() {
   /* Type your code here */
   int count;
   cin>>count;
   vector<int> v(count);
   for(int i = 0 ; i < count ; i++){
      cin>>v.at(i);
   }
   SortVector(v);
   for(int i = 0 ; i < count ; i++){
      cout<<v.at(i)<<",";
   }
   cout<<endl;
   
   return 0;
}
