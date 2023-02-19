#include "MileageTrackerNode.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
   // References for MileageTrackerNode objects
   MileageTrackerNode* headNode;
   MileageTrackerNode* currNode;
   MileageTrackerNode* lastNode;

   double miles;
   string date;
   int i;

   // Front of nodes list
   headNode = new MileageTrackerNode();
   lastNode = headNode;

   // TODO: Read in the number of nodes
   cin>> i;
   cin>>miles;
   cin>>date;
   
   for(int count = 0 ; count < i ; count++){
      MileageTrackerNode* node = new MileageTrackerNode(miles,date);
      lastNode->InsertAfter(node);
      lastNode=lastNode->GetNext();
      cin>>miles;
      cin>>date;
   }
   
   currNode = headNode->GetNext();
   while(currNode!=NULL){
      currNode->PrintNodeData();
      currNode = currNode->GetNext();
   }

   // TODO: For the read in number of nodes, read
   //       in data and insert into the linked list

   // TODO: Call the PrintNodeData() method
   //       to print the entire linked list

   // MileageTrackerNode Destructor deletes all
   //       following nodes
   delete headNode;
}