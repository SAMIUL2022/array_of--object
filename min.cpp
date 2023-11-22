#include <bits/stdc++.h>

using namespace std;

class student {
public:
string name;
int roll;
int marks;


};

int main ()

{
  int n;
  cin>>n;
  student * a=new student[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i].name>>a[i].roll>>a[i].marks;
  }

  student min;
  min.marks=INT_MIN;
  for (int i = 0; i < n; i++)
  {
   if(a[i].marks>min.marks)

   min=a[i];
  }
   cout<<min.name<<" "<<min.roll<<" "<<min.marks<<endl;

    return 0;
}