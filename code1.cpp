#include<iostream>
using namespace std;

  int sum(int x,int y)//<---funtion declaration
    {
        int ans = x+y;  //<--defined fn
        return ans;
    }

    int mult(int x,int y)//<---funtion declaration
    {
        int ans = x * y; //<--defined fn
        return ans;
    }

int main()
{
  int a,b;
  cout<<"Enter two Number : ";
  cin>>a>>b;

  cout<<"Addition ans is : "<<sum(a,b);
  cout<<endl;

  cout<<"Multiplication ans is :"<<mult(a,b);
  cout<<endl;
}
