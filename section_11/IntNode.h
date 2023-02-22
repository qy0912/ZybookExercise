#include "iostream"

class IntNode {
   private:
      int dataVal;
      IntNode* nextNodeRef; // Reference to the next node
   
   public:
      // Constructor
      IntNode(int value);
   
      // Insert a new node after the current node
      void InsertAfter(IntNode* nodeLoc);
   
      // Get location pointed by nextNodeRef
      IntNode* GetNext();
   
      // Print node's data
      void PrintData();
};
