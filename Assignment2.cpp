#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int n)
{
    if(n<=1)
  {
    return 0;
  }
    for(int i=2;i<=sqrt(n);i++)
{
    if(n%i==0)
    {
        return 0;
    }
}
        return 1;
}
int Reverse(int n)
{
    int reversed=0;
    while(n>0)
    {
        int digit=n%10;
        reversed =reversed *10+digit;
        n=n/10;
    }
        return reversed;
    }

bool Palindrome(int n)
{
if(n<0)return false;
return n==Reverse(n);
}

int Factorial(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        num=num*i;
    }
    return num;
}
void Fibonacci(int n)
{
    if(n<=0)
    {
    cout<<"Number should be greater than 0";
    return;
    }
    int first=0;
    int second =1;
    for(int i=1;i<=n;i++)
    {
        cout<<first<<" ";
        int next=first+second;
        first=second;
        second=next;
    }
}
int GCD(int a,int b)
{
    while(b!=0)
    {
        int n=a%b;
        a=b;
        b=n;
    }
    return a;
    }
int LCM(int a,int b)
{
    return(a*b)/GCD(a,b);
}

int main()
{
int choice,n;
while(true)
{
cout<<"\n1.Prime\n2.Palindrome\n3.Factorial\n4.Fibonacci\n5.Reverse\n6.GCD & LCM\n\n Enter your choice : ";
cin>>choice;
        if(choice==1)
{
        cout<<"Enter the number for cheking prime!";
        cin>>n;
        if(Prime(n))
    {
        cout<<n<<" is a Prime number\n ";
    }
        else
{
        cout<<n<<" is NOT Prime number\n";
        }
}

else if(choice==2)
{
    cout<<"Enter the number";
    cin>>n;
      if(Palindrome(n))
    {
        cout<<n<<"is a Palindrome\n";
    }
    else
    {
        cout<<n<<"is not Palindrome\n";
    }
}
else if(choice==3)
{
    cout<<"Enter positive no";
    cin>>n;
    if(n<0)
    {
        cout<<"Negative number!!INVALID";
    }
    else
    {
        cout<<Factorial(n)<<endl;
    }
}
else if(choice==4)
{
    cout<<"Enter the number";
    cin>>n;
    Fibonacci(n);
    cout<<endl;
    }
else if(choice==5)

{
    cout<<"Enter number to reverse";
    cin>>n;
    cout<<Reverse(n)<<endl;
}
else if(choice==6)
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"GCD is: "<<GCD(a,b)<<endl;
    cout<<"LCM is: "<<LCM(a,b)<<endl;
}
else if(choice ==7)
{
    break;
}
else
{
    cout<<"Invalid choice!!";
}

}
return 0;
}
