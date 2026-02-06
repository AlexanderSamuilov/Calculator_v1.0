#include <iostream>
#include <string>
#include <thread>
#include <chrono>
typedef std::string str;



int main()
{

  std::cout<<"######## ALEX'S CALCULATOR ########\n";
  std::cout<<"############v2.5###################\n";

  while(true){
  {
   double answer;
   double n1;        //declaring variables
   double n2;
   char action;


      std::cout<<"########################## "<<'\n';
  
   
   std::cout<<"Number 1 is?  "<<'\n';
  
   
   std::cin>>n1;                         //input for first number
 
   std::cout<<"Action(+,-,*,/)?"<<'\n';

   std::cin>>action;                    //input for the action

   std::cout<<"Number 2 is?  "<<'\n';

   std::cin>>n2;                        //input for secound number
   
  switch(action)
  {
      case '+':
       answer = n1 + n2;
       std::cout<<"Answer is "<<answer<<'\n';
       break;
      case '-':
       answer = n1 - n2;
       std::cout<<"Answer is "<<answer<<'\n';
       break;                                                  //instead of if statements I used switches that do the same thing
      case '*':
       answer = n1 * n2;
       std::cout<<"Answer is "<<answer<<'\n';
       break;
      case '/':
       answer = n1 / n2;
       std::cout<<"Answer is "<<answer<<'\n';
       break;
      default:
       std::cout<<"ERROR\n";
       break;
  }   

   std::cout<<"##########################"<<'\n';
   }
   }
 return 0;
}
