#include <iostream>
#include <iomanip>

/************************************Session2********************************** */
//Function Overloading
int func(int x,int y=2);
int func(double x,double y=2.5);
int func(int x,int y)
{
    return x+y;
}
int func(double x,double y)
{
    return x+y;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[2][2]={{1,2},{3,4}};
    int x=10;
    int &ref=x;
    ref=20;
    //std::cout<<ref<<" "<<x<<std::endl;    
    auto var=40;
    auto var2=10.6;
    //std::cout<<var;
    /*//Normal Loop
    for(int i=0;i<5;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }*/
   //Ranged Loop
   /*for(int Value: arr)
   {
        std::cout<<Value<<std::endl;
   }*/
  /*for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        std::cout<<arr2[i][j]<<std::endl;
    }
  }*/

  float num=6.7;
  //std::cout<<"Num="<<(static_cast<int>(num));
  int val=10;
  const int*ptr=&val;
  int *ptr1=const_cast<int*>(ptr);
  int *ptr3=new int(64);
  char*ptr4=reinterpret_cast<char*>(ptr3);


  /*Lambda Expression */
  /*To declera lambda ,there are 3 ways
  **1-auto
  **2-pointer to function
  **3-calling during intialtization
  */
  /*auto func=[](int x,int y)
  {
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
  };
  func(2,3);

  void(*func2)(int,int)=[](int x,int y)
  {
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
  };
  func2(5,6);
  [](int x,int y)
  {
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
  }(9,10);*/

  //Access inside lambda Expression
  int temp=6;
  auto test2=[temp](int num)
  {
    return num+temp;  //temp is read only
  };
  std::cout<<test2(2)<<std::endl;
  auto test=[&temp](int num)
  {
    temp=2;
    return num+temp;  //temp is read only
  };
  std::cout<<test(2)<<std::endl;
  auto test3=[&](int num)  //Capture all by referance
  {
    return num+temp;  //temp is read only
  };
  auto test4=[=](int num)  //Capture all by Value
  {
    return num+temp;  //temp is read only
  };
  auto test4=[=,&temp](int num)  //Capture all by Value except temp by referance
  { 
    return num+temp;  //temp is read only
  };

}
