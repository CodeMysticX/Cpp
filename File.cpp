#include <fstream>  
#include <iostream>  
using namespace std;  
int main () {  
   string input;
   ofstream os;  
   os.open("testout.txt");  
   cout <<"Writing to a text file:" << endl;  
   cout << "Please Enter your name: ";   
   getline(cin,input);  
   os << input << endl;  
   cout << "Please Enter your age: ";   
   cin >> input;  
   cin.ignore();  
   os << input << endl;  
   os.close();  
   ifstream is;   
   string line;  
   is.open("testout.txt");   
   cout << "Reading from a text file:" << endl;   
   while (getline (is,line))  
   {  
   cout << line << endl;  
   }      
   is.close();  
   return 0;  
}  
