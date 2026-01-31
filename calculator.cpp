#include <iostream>
#include <string>
#include <thread>
#include <chrono>
typedef std::string str;

void wait1()
{
  std::this_thread::sleep_for(std::chrono::seconds(1));
}


int main()
{
  std::cout<<"######## ALEX'S CALCULATOR ######## "<<'\n';
  while(true){
  {
   double answer;
   double n1;
   double n2;
   str action;


      std::cout<<"########################## "<<'\n';
  
   
   std::cout<<"Number 1 is?  "<<'\n';
  
   std::cin>>n1;
 
   std::cout<<"Action(+,-,*,/)?"<<'\n';

   std::cin>>action;

   std::cout<<"Number 2 is?  "<<'\n';
   std::cin>>n2;
   if(action == "+")
   {
    answer = n1 + n2;
    std::cout<<"Answer is "<<answer<<'\n';
   }
   else if(action == "-")
   {
    answer = n1 - n2;
    std::cout<<"Answer is "<<answer<<'\n';
   }
   else if(action ==  "*")
   {
    answer = n1 * n2;
    std::cout<<"Answer is "<<answer<<'\n';
   }
   else if(action ==  "/")
   {
    answer = n1 / n2;
    std::cout<<"Answer is "<<answer<<'\n';
   }
   else if(action !=  "+" && "-" && "*" && "/")
   {
    std::cout<<"ERROR"<<'\n';
    
   }
   

  /*std::cout<<"Answer in... "<<'\n';
  std::cout<<"3"<<'\n';
  wait1();
  std::cout<<"2"<<'\n';
  wait1();
  std::cout<<"1"<<'\n';
  wait1();
   */
   std::cout<<"##########################"<<'\n';
   }
   }
 return 0;
}