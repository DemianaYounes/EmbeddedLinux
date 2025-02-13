#include <iostream>
#include <iomanip>

/************************************Session2********************************** */
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
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        std::cout<<arr2[i][j]<<std::endl;
    }
  }
}
