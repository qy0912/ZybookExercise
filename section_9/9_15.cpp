#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;
class Movie{
   public:
      string name;
      string cls;
      vector<string> t;
      Movie();
      Movie(string x, string y, string z)
      {
         t = {};
         name = x;
         cls = y;
         t.push_back(z);
         }
         
      void add_time(string t_s){
         t.push_back(t_s);
         }
};

vector<vector<string>> file_to_words(string filename){
vector<vector<string>> ret;
fstream file (filename, ios::in);
string line;
string word;
if(file.is_open()){
   while(getline(file, line)) {
      vector<string> v = {};
      stringstream X(line);
      while(getline(X,word,','))
      {v.push_back(word);
         }
      ret.push_back(v);
   }
}
return ret;
};

void output(string name, string cls, vector<string> times){
   char name_cache[45];
   name_cache[44] = '\0';
   for(int i = 0; i<44 ;i++){
      name_cache[i] = ' ';
      }
   int len = 0;
   if(name.size()>44){
      len = 44;
   }else{
      len = name.size();
   }
   for(int i = 0; i<len;i++){
      name_cache[i] = name[i];
   }
   string name_out = name_cache;
   
   int dif = 5-cls.size();
   string cls_out ="";
   for(int i = 0; i<dif; i++){
      cls_out += " ";
   }
   cls_out += cls;
   
   string time_out = "";
   for(int i = 0; i<times.size();i++){
      time_out += " ";
      time_out += times.at(i);
   }
   
   cout<<name_cache<<" | "<<cls_out<<" |"<<time_out<<endl;
   }



int main() {

   /* Type your code here. */
   string filename;
   cin>> filename;
   vector<vector<string>> lines = file_to_words(filename);
   vector<string> movie_name={};
   vector<string> movie_cls={};
   vector<vector<string>> movie_time = {};

   for(int i = 0 ; i<lines.size() ; i++ ){
      if(movie_name.size()==0){
         movie_name.push_back(lines[i].at(1));
         movie_cls.push_back(lines[i].at(2));
         vector<string> time_table;
         time_table.push_back(lines[i].at(0));
         movie_time.push_back(time_table);
         
         }
      else{
         
         int cmp = lines[i].at(1).compare(movie_name.back());
         if(cmp!=0){
            movie_name.push_back(lines.at(i).at(1));
            movie_cls.push_back(lines.at(i).at(2));
            vector<string> time_table;
            time_table.push_back(lines.at(i).at(0));
            movie_time.push_back(time_table);
         }else{
            movie_time.back().push_back(lines[i].at(0));
         }
      }
      }
      
   for(int i = 0 ;i < movie_name.size();i++){
      output(movie_name[i],movie_cls[i],movie_time[i]);
      }

   
   return 0;
}
