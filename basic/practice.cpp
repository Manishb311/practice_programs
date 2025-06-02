/*using setw() function with iomanip header file......
it can put the output element in a data field....

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string name;
   cin>>name;
   int age;
   cin>>age;

   cout<<setw(10)<<"my name is"<<setw(10)<<name<<endl;
   cout<<setw(9)<<"my age is"<<setw(11)<<age;
    
}

//sqrt() function......

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int number;
    cin>>number;
    cout<<"sqrt is "<<sqrt(number);
  return 0;
}

//cube of numbers 1 - 10 using loop
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int num;
for (num=1;num<=10;num++){
  int cube =num*num*num;
  cout<<setw(4)<<num<<setw(8)<<cube<<endl;
  
}
return 0;
}
*/

 #include <iostream>
 using namespace std;
 #include <conio.h>            //for getche()
 int main()
 {
 int chcount=0;             //counts non-space characters
 int wdcount=1;             //counts spaces between words
 char ch = 'a';             //ensure it isn’t ‘\r’
 cout << "Enter a phrase: ";
 while( ch != '\r' )        //loop until Enter typed
 {
 ch = getche();          //read one character
 if( ch== ' ' )           //if it’s a space
 wdcount++;              //count a word
 else                    //otherwise,
 chcount++;              //count a character
 }                       //display results
 cout << "\nWords=" << wdcount << endl
 << "Letters=" << (chcount-1) << endl;
 return 0;
 }









