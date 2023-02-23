/*
Containers can be described as the objects that hold the data of the same type. Containers are used to implement 
different data structures for example arrays, list, trees, etc.
*/

/*
Classification of containers :

Sequence containers : vector, list, deque
Associative containers : set, map
Derived containers : stack, queue, priority queue
*/

/*
ITERATOR
Iterators are pointer-like entities used to access the individual elements in a container.
Iterators are moved sequentially from one element to another element. This process is known as iterating through a container.
5 categories of iterator
1. Input Iterator
2. Output Iterator
3. Forward Iterator
4. BiDirectional Iterator
5. Random Access Iterator
*/

#include <iostream>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <deque>    
using namespace std;

void useList(){
  //list<int>  new_list{1,2,3,4};  
  /*C++ List insert() function inserts a new element just before the specified position. 
  It increases the size of the list container by the number of elements added in the list.
  */
  list<int> li = {1,2,3,4};

  list<int>::iterator itr=li.begin(); 
  itr++; 
  li.insert(itr,5);  

  li.push_back(7);
  
   for(itr=li.begin();itr!=li.end();++itr)  
          cout<<*itr;  
    cout << endl;

   //C++ List pop_front() function removes the first element from the list and therefore, reducing the size of the list by one.
   li.pop_front();
   for(itr=li.begin();itr!=li.end();++itr)  
          cout<<*itr;  
};

void useSet(){
    //Sets are part of the C++ STL (Standard Template Library). Sets are the associative containers that stores sorted key, in which each key is unique and it can be inserted or deleted but cannot be altered.
    // Default constructor  
    set<char> s;
 
    // Range Constructor 
    int evens[] = {2,4,6,8,10}; 
    set<int> myset (evens, evens+5);    
    cout << "Size of set container myset is : " << myset.size(); 

    //Default Constructor  
    std::set<int> s1;  
    s1.insert(5);  
    s1.insert(10);  
  
    cout << "Size of set container s1 is : " << s1.size();  
    
    // Copy constructor  
    set<int> s2(s1);  
    cout << "\nSize of new set container s2 is : " << s2.size();   

    set<int> myset2= {10,50,30,40,20};  
    
    // show content:  
    cout<<"Elements are: "<<endl;  
    set<int>::reverse_iterator rit;  
    for (rit=myset2.rbegin(); rit!=myset2.rend(); rit++)  
        cout << *rit<< '\n';  

}

void useMap(){
 /*  
  Maps are part of the C++ STL (Standard Template Library). Maps are the associative containers that store sorted key-value pair, 
  in which each key is unique and it can be inserted or deleted but cannot be altered. Values associated with keys can be changed.
 */

 map<int, string> Employees;  
   // 1) Assignment using array index notation  
   Employees[101] = "Nikita";  
   Employees[105] = "John";  
   Employees[103] = "Dolly";  
   Employees[104] = "Deep";  
   Employees[102] = "Aman";  
   cout << "Employees[104]=" << Employees[104] << endl << endl;  
   cout << "Map size: " << Employees.size() << endl;  
   cout << endl << "Natural Order:" << endl;  
   for( map<int,string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  
   cout << endl << "Reverse Order:" << endl;  
   for( map<int,string>::reverse_iterator ii=Employees.rbegin(); ii!=Employees.rend(); ++ii)  
   {  
       cout << (*ii).first << ": " << (*ii).second << endl;  
   }  

}

void showsg(queue <int> sg)  
{  
    queue <int> ss = sg;  
    while (!ss.empty())  
    {  
        cout << '\t' << ss.front();  
        ss.pop();  
    }  
    cout << '\n';  
}  

void useQueue(){
    /*
    This data structure works on the FIFO technique, where FIFO stands for First In First Out. 
    The element which was first inserted will be extracted at the first and so on. There is an element called as 'front' 
    which is the element at the front most position or say the first position, also there is an element called as 'rear' 
    which is the element at the last position. In normal queues insertion of elements take at the rear end and 
    the deletion is done from the front.
    */

    queue <int> fquiz;  
    fquiz.push(10);  
    fquiz.push(20);  
    fquiz.push(30);  
  
    cout << "The queue fquiz is : ";  
    showsg(fquiz);  
  
    cout << "\nfquiz.size() : " << fquiz.size();  
    cout << "\nfquiz.front() : " << fquiz.front();  
    cout << "\nfquiz.back() : " << fquiz.back();  
  
    cout << "\nfquiz.pop() : ";  
    fquiz.pop();  
    showsg(fquiz);  

}

void useDQueue(){
   /*
   Deque stands for double ended queue. It generalizes the queue data structure i.e insertion and deletion can be performed 
   from both the ends either front or back.
   */
    cout << "push_front" << endl;
    deque<int> d={200,300,400,500};  
    deque<int>::iterator itr;  
    d.push_front(100);  
    for(itr=d.begin();itr!=d.end();itr++)  
        cout<<*itr<<" ";  

    cout << "pop_back" << endl;
    //deque<int>::iterator itr;  
    d.pop_back();  
    for(itr=d.begin();itr!=d.end();itr++)  
        cout<<*itr<<" ";  

}

int main(){
    //useList();
    //useSet();
    //useMap();
    //useQueue();
    useDQueue();
    return 0;
}

//https://www.javatpoint.com/cpp-stl-components