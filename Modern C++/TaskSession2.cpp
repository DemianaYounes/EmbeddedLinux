#include <iostream>
#include <vector>
#include <algorithm> 

/**************************Task1************************* */
/*C style */
/*int FindMaxNum(int*arr,int size);
int main()
{
    int arr[5]={10,4,11,9,17};
    int Max=FindMaxNum(arr,5);
    std::cout<<Max<<std::endl;
}
int FindMaxNum(int*arr,int size)
{
    int i,j,Max;
    Max=arr[0];
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]>Max)
            {
                Max=arr[j];
            }
        }
    }
    return Max;
}*/
/*C++ style */
/*int FindMaxNum(const int*arr,const int size);
int main()
{
    int arr[5]={100,4,110,9,17};
    int Max=FindMaxNum(arr,5);
    std::cout<<Max<<std::endl;
}
int FindMaxNum(const int*arr,const int size){
    // Using ranges to find the maximum element
    return *std::max_element(arr, arr + size);
}*/


/**************************Task2************************* */
//C style
/*int SearchForNumber(const int*Copy_u32Arr,const int Copy_u32Siza,const int Copy_u32SearchNum);
int main()
{
    int Local_s32arr[5]={10,4,11,9,17};
    int Local_s32SearchNum,Local_s32Index;
    std::cout<<"Please Enter Serach Number:";
    std::cin>>Local_s32SearchNum;
    Local_s32Index=SearchForNumber(Local_s32arr,5,Local_s32SearchNum);
    if(Local_s32Index!=-1)
    {
        std::cout<<"Num "<<Local_s32SearchNum<<" is found at index "<<Local_s32Index<<std::endl;
    }
    else
    {
        std::cout<<"Num "<<Local_s32SearchNum<<" is not found"<<std::endl;
    }
}
int SearchForNumber(const int*Copy_s32Arr,const int Copy_s32Siza,const int Copy_s32SearchNum)
{
    int Local_s32Iterator,Local_s32Index=-1;
    for(Local_s32Iterator=0;Local_s32Iterator<Copy_s32Siza;Local_s32Iterator++)
    {
        if(Copy_s32Arr[Local_s32Iterator]==Copy_s32SearchNum)
        {
            Local_s32Index=Local_s32Iterator;
            break;
        }
    }
    return Local_s32Index;
}*/
/*int SearchForNumber(int*Copy_u32Arr,const int Copy_u32Siza,const int Copy_u32SearchNum);
int main()
{
    int Local_s32arr[5]={10,4,11,9,17};
    int Local_s32SearchNum,Local_s32Index;
    std::cout<<"Please Enter Serach Number:";
    std::cin>>Local_s32SearchNum;
    Local_s32Index=SearchForNumber(Local_s32arr,5,Local_s32SearchNum);
    if(Local_s32Index!=-1)
    {
        std::cout<<"Num "<<Local_s32SearchNum<<" is found at index "<<Local_s32Index<<std::endl;
    }
    else
    {
        std::cout<<"Num "<<Local_s32SearchNum<<" is not found"<<std::endl;
    }
}
int SearchForNumber(int*Copy_u32Arr,const int Copy_u32Siza,const int Copy_u32SearchNum)
{
    int Local_s32Index=-1;
    int*found=std::find(Copy_u32Arr,Copy_u32Arr+Copy_u32Siza,Copy_u32SearchNum);
    return (found!=Copy_u32Arr+Copy_u32Siza?(found-Copy_u32Arr):-1);
}*/

/**************************Task3************************* */
//C style
/*void DeletNum(int*arr,int size,int DelNum);
void SwapTwoNum(int*num1,int*num2);
void PrintArray(int*arr,int size);
int main()
{
    int Local_s32arr[7]={1,10,3,4,5,4,7};
    PrintArray(Local_s32arr,7);
    DeletNum(Local_s32arr,7,10);
    PrintArray(Local_s32arr,6);
}
void DeletNum(int*arr,int size,int DelNum)
{
    int i,index,j,temp;
    for(i=0;i<size;i++)
    {
        if(arr[i]==DelNum)
        {
            for(j=i;j<size-1;j++)
            {
                SwapTwoNum(&arr[j],&arr[j+1]);
            }
        }
    }
}
void SwapTwoNum(int*num1,int*num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/

//C++ Style
/*int DeletNum(int*arr,int size,int DelNum);
void PrintArray(int*arr,int size);
int main()
{
    int Local_s32arr[7]={1,10,3,4,5,4,7};
    int NewSize;
    PrintArray(Local_s32arr,7);
    NewSize=DeletNum(Local_s32arr,7,4);
    PrintArray(Local_s32arr,NewSize);
}
int DeletNum(int*arr,int size,int DelNum)
{
    int*newEnd=std::remove(arr,arr+size,DelNum);
    return (newEnd-arr);
}

void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/

/**************************Task4************************* */
//C style
/*int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2);
void PrintArray(int*arr,int size);
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int*NewArr=MergeTwoArray(arr1,5,arr2,5);
    PrintArray(NewArr,10);
}
int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2)
{
    int NewSize=size1+size2;
    int i;
    static int*NewArr=(int*)malloc(NewSize*sizeof(int));
    for(i=0;i<NewSize;i++)
    {
        if(i<size1)
        {
            NewArr[i]=arr1[i];
        }
        else
        {
            NewArr[i]=arr2[i-size2];
        }
    }
    return NewArr;
}
void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/

//C++ Style
/*int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2);
void PrintArray(int*arr,int size);
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int*NewArr=MergeTwoArray(arr1,5,arr2,5);
    PrintArray(NewArr,10);
}
int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2)
{
    int NewSize=size1+size2;
    int i;
    static int*NewArr=(int*)malloc(NewSize*sizeof(int));
    for(i=0;i<NewSize;i++)
    {
        if(i<size1)
        {
            NewArr[i]=arr1[i];
        }
        else
        {
            NewArr[i]=arr2[i-size2];
        }
    }
    return NewArr;
}
void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/

//C++ Style
/*int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2);
void PrintArray(int*arr,int size);
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int*NewArr=MergeTwoArray(arr1,5,arr2,5);
    PrintArray(NewArr,10);
}
int* MergeTwoArray(int*arr1,int size1,int*arr2,int size2)
{
    int NewSize=size1+size2;
    static int*NewArr=(int*)malloc(NewSize*sizeof(int));
    std::copy(arr1,arr1+size1,NewArr);
    std::copy(arr2,arr2+size2,NewArr+size1);
    return NewArr;
}
void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/

/**************************Task5************************* */
//C & C++ Style
/*void EvenAndOddNumbers(int*arr,int size,int*EvenArr,int*OddArr,int*EvenSize,int*OddSize);
void PrintArray(int*arr,int size);
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int Even[6];
    int Odd[6];
    int even,odd;
    EvenAndOddNumbers(arr,6,Even,Odd,&even,&odd);
    PrintArray(Even,even);
    PrintArray(Odd,odd);
}
void EvenAndOddNumbers(int*arr,int size,int*EvenArr,int*OddArr,int*EvenSize,int*OddSize)
{
    int i;
    *EvenSize=0;
    *OddSize=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            EvenArr[*EvenSize]=arr[i];
            (*EvenSize)++;
        }
        else
        {
            OddArr[*OddSize]=arr[i];
            (*OddSize)++;
        }
    }
}
void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}*/



/**************************Task6************************* */

/*int main()
{
    int res;
    //By using auto method
    auto Square=[](int num)
    {
        return num*num;
    };
    res=Square(5);
    std::cout<<res<<std::endl;
    //By using pinter to function method
    int (*Sqr)(int)=[](int num)
    {
        return num*num;
    };
    res=Square(4);
    std::cout<<res<<std::endl;
    //By calling during intialtization
    res=[](int num)
    {
        return num*num;
    }(3);
    std::cout<<res<<std::endl;
}*/

/**************************Task7************************* */
/*void PrintArray(int*arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        std::cout<<arr[i]<<"  ";
    }
    std::cout<<std::endl;
}
int main()
{
    int arr[5]={5,3,2,4,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    //c style algorithm
    auto BinarySort=[&arr,size]()
    {
        int i,j,temp,flag=0;
        for(i=0;i<size;i++)
        {
            flag=0;
            for(j=0;j<size-1;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        PrintArray(arr,size);
    };
    BinarySort();
    //c++ style
    std::sort(arr,arr+size,[](int a,int b){return a<b;} );
    PrintArray(arr,size);
}*/


/**************************Task8**************************/
const int MAX_CONTACTS = 100;
typedef struct {
    std::string name;
    std::string PhoneNum;
}contact_t;

void AddContact(contact_t*contacts,int&size);
void UpdateContact(contact_t*contacts,int size);
void SearchContact(contact_t*contacts,int size);
void PrintContacts(contact_t*contacts,int size);
void DeleteContacts(contact_t*contacts,int &size);
int main()
{
    contact_t contacts[MAX_CONTACTS];
    int choice;
    int count = 0;
    do{
        std::cout << "\nAddress Book Menu\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Update Contact\n";
        std::cout << "3. Search Contact\n";
        std::cout << "4. Print All Contacts\n";
        std::cout << "5. Delete Contact\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1: AddContact(contacts, count); break;
            case 2: UpdateContact(contacts, count); break;
            case 3: SearchContact(contacts, count); break;
            case 4: PrintContacts(contacts, count); break;
            case 5: DeleteContacts(contacts, count);break;
            case 6: std::cout << "Exiting program...\n"; break;
            default: std::cout << "Invalid choice! Try again.\n";
        }
    }while(choice!=6);
}
void AddContact(contact_t*contacts,int&size)
{
    if(size>MAX_CONTACTS)
    {
        std::cout << "Address book is full!\n";
        return ;
    }
    std::cout<<"Enter your name: ";
    std::cin.ignore();  //Clears any leftover newline characters from previous inputs.
    std::getline(std::cin,contacts[size].name);
    std::cout<<"Enter phone number: ";
    std::getline(std::cin,contacts[size].PhoneNum);
    size++;
    std::cout << "Contact added successfully!\n";
}

void UpdateContact(contact_t*contacts,int size)
{
    std::string SearchName;
    int i,Flag=0;
    std::cout<<"Enter Your name: ";
    std::cin.ignore();
    std::getline(std::cin,SearchName);
    for(i=0;i<size;i++)
    {
        if(SearchName==contacts[i].name)
        {
            std::cout<<"Enter new phone number: ";
            std::getline(std::cin,contacts[i].PhoneNum);
            std::cout << "Contact updated successfully!\n";
            Flag=1;
            break;
        }
    }
    if(Flag==0)
    {
        std::cout << "Contact not found.\n";
    }
}
void SearchContact(contact_t*contacts,int size)
{
    std::string SearchName;
    int i,flag=0;
    std::cout<<"Enter the name to search: ";
    std::cin.ignore();
    std::getline(std::cin,SearchName);
    for(i=0;i<size;i++)
    {
        if(SearchName==contacts[i].name)
        {
            std::cout << "Contact found:\n";
            std::cout << "Name: " << contacts[i].name << "\n";
            std::cout << "Phone: " << contacts[i].PhoneNum << "\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        std::cout << "Contact not found.\n";
    }
}

void PrintContacts(contact_t*contacts,int size)
{
    int i;
    if(size==0)
    {
        std::cout<<"No contacts avilable.\n";
    }
    else
    {
        std::cout << "Contact List:\n";
        for(i=0;i<size;i++)
        {
            std::cout<<i+1<<"-Name:"<<contacts[i].name<<", Phone:"<<contacts[i].PhoneNum<<std::endl;
        }
    }
}

void DeleteContacts(contact_t* contacts, int& size)
{
    std::string SearchName;
    std::cout << "Enter the name to delete: ";
    std::cin.ignore();
    std::getline(std::cin, SearchName);

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (contacts[i].name == SearchName) {
            // Shift contacts left to overwrite the deleted one
            for (int j = i; j < size - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            size--; // Reduce size after deletion
            std::cout << "Contact deleted successfully!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Contact not found.\n";
    }
}