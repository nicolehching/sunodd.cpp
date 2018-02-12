#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0, A, B;
    
    cout<<"Please input value: \n";
    cin>>a;
    
    cout<<"Please input value: \n";
    cin>>b;
    A = a;
    for (int c = 0;a%2==c || b%2==c; c++){
      if(a%2==c&&b%2!=c)
      {
          A=(a+1);
          B=(b+1);
      }
    else if(a%2!=c)
    {
        A=(a+1);
    }
    else{
        B=(b+1);
    }
    }
    if (a>b)
    {
        sum=((a+b)/2)*((a-b)/2+1);
        cout<<"Sum of odd integers from"<<b<<"to"<<a<<"is"<<sum<<endl;
    }
    if (a<b)
    {
        sum=((b+a)/2)*((b-a)/2+1);
        cout<<"Sum of odd integers from"<<a<<"to"<<b << " is " << sum <<endl;
    }
    
    return 0;
}
