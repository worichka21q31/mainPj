#include <iostream>
#include <Windows.h>

int main()
{
using namespace std;
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
// 1 Задача:

    int luckyNum = 0;
    int num1,num2,num3;
    for(int i = 100;i<=999;i++)
    {
        num1 = i/100; 
        num2 = i%10; 
        num3 = (i%100)/10;
        if(num1==num2 || num2==num3||num3==num1) luckyNum++;
    }
    cout << "Всего таких чисел " << luckyNum << "\n";
// 2 Задача:

    int noLuckyNum = 0;
    int nnum1,nnum2,nnum3;
    for(int i = 100;i<=999;i++)
    {
        nnum1 = i/100; 
        nnum2 = i%10; 
        nnum3 = (i%100)/10;
        if(nnum1==nnum2 || nnum2==nnum3||nnum3==nnum1);
        else noLuckyNum++;
    }
    cout << "Всего таких чисел " << noLuckyNum << "\n";  
// 3 Задача:   
    int num;
    int numbez=0, check=1;
    
    cout << "Введите число: ";
    cin >> num;

    for(;num!=0;num/=10)
    {
        if(num % 10!=3 && num % 10 !=6)
        {
            numbez=numbez+check*(num%10);
            check*=10;
        }
        
    }
    
    cout<<"Число без 3 и 6 " << numbez <<"\n";

// 4 Задача: 
    int num10;
    cout << "Введите число: ";
    cin >> num10;
    for(int i = num10; i != 0; i--)
    {
        if(num10 % (i * i) == 0 && num10 % (i * i * i) != 0)
        {
            cout << i << "1 ";
        }
    }
// 5 Задача: 
    int num6;
    cout << "\nВведите число: ";
    cin >> num6;
    if (num6*num6 == num6*num6*num6)
    {
       cout << "Куб числа равен квадрату числа \n"; 
    }    
    else
    {
       cout << "Куб числа не равен квадрату числа \n"; 
    }
// 6 Задача: 
    int num8;
    cout << "\nВведите число: ";
    cin >> num8;
    for(int i = 1; i != num8+1; i++)
    {
     if(num8 % i == 0)
     {
        cout << i << " ";
     }
    }
// 7 Задача:
    int num80;
    int num81 ;
    cout << "\nВведите число 1: ";
    cin >> num80;
    cout << "\nВведите число 2: ";
    cin >> num81;
    if(num80 > num81)
    {
        for(int i = 1; i != num80+1; i++ )
        {
         if(num80 % i == 0 && num81 % i == 0)
         {
            cout << i << " ";
         }     
        } 
    }
    else
    {
        for(int i = 1; i != num81+1; i++)
        {
         if(num80 % i == 0 && num81 % i == 0)
         {
            cout << i << " ";
         }     
        }         
        
    }
    
    return 0;
}
