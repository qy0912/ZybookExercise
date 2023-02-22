#include "IntNode.h"

using namespace std;

// Constructor
IntNode::IntNode(int value) {
   this->dataVal = value;
   this->nextNodeRef = NULL;
}

// Insert a new node after the current node
void IntNode::InsertAfter(IntNode* nodeLoc) {
   IntNode* tmpNext;
   tmpNext = this->nextNodeRef;
   this->nextNodeRef = nodeLoc;
   nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef
IntNode* IntNode::GetNext() {
   return this->nextNodeRef;
}

// Print node's data
void IntNode::PrintData() {
   cout << this->dataVal << ", ";
}
