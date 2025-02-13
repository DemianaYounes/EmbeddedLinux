#include <iostream>
#include <iomanip>

/************************************Session1********************************** */
//Task 1
int main() {
    int i;
    std::cout << "ASCII Code Table:"<<std::endl;
    std::cout<<"----------------"<<std::endl;
    std::cout<<"|Dec |Ch |"<<std::endl;
    std::cout<<"----------------"<<std::endl;
    for(i=0;i<127;i++)
    {
        std::cout<<"|"<<std::setw(3)<<i<<"|";
        if(isprint(i))
        std::cout<<std::setw(3)<<(char)i<<"|";
        else
        std::cout<<"NP |";
        std::cout << std::endl;

    }
    return 0;
}

//Task2
int main(){
    int num1,num2,num3,MaxNum;
    std::cout<<"Enter Number1:";
    std::cin>>num1;
    std::cout<<"Enter Number2:";
    std::cin>>num2;
    std::cout<<"Enter Number3:";
    std::cin>>num3;
    MaxNum=num1>num2?(num3>num1?num3:num1):(num3>num2?num3:num2);
    std::cout<<"Maximum Number="<<MaxNum;
}
//Task3
int main(){
    int i,j,Row;
    std::cout<<"Enter the number of rows:";
    std::cin>>Row;
    for(i=0;i<Row;i++)
    {
        for(j=0;j<=i;j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
//Task4
int main(){
    char Letter;
    std::cout<<"Enter the letter: ";
    std::cin>>Letter;
    // Convert to lowercase to handle uppercase input
    Letter=tolower(Letter);
    if(Letter=='a' || Letter=='e' ||Letter=='o' ||Letter=='i' || Letter=='u')
    {
        std::cout<<Letter<<" is a vowel." << std::endl;
    }
    else
    {
        std::cout << Letter << " is a consonant." << std::endl;
    }
}

//Task5
int main(){
    int MulNum,i;
    std::cout<<"Enter Multply Number:";
    std::cin>>MulNum;
    for(i=0;i<=12;i++)
    {
        std::cout<<MulNum<<"*"<<i<<"="<<MulNum*i<<std::endl;
    }
}
//Task6
int main(){
    int Num,rem,SumOfDigit=0;
    std::cout<<"Enter the number:";
    std::cin>>Num;
    while(Num)
    {
        rem=Num%10;
        SumOfDigit=SumOfDigit+rem;
        Num=Num/10;
    }
    std::cout<<"Number of digits="<<SumOfDigit;
}

//Task7
int main(){
    unsigned int Num;
    int i;
    std::cout<<"Enter the number:";
    std::cin>>Num;
    for(i=31;i>=0;i--)
    {
        std::cout<<((Num>>i)&1);
    } 
}


