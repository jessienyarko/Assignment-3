#include <iostream>

using namespace std;
int main()
{
    int grade;
    cout<<"Enter the number of your grade";
    cin>>grade;
    switch (grade)
    {
case 1:
    if (grade >=80 && grade <=100)
        cout<<"you get A"<<endl;
        break;
case 2:
    if (grade >=70 && grade <=79)
        cout<<"you get B"<<endl;
    break;
case 3:
    if (grade >=60 && grade <=69);
    cout<<"you get C"<<endl;
    break;
case 4:
    if (grade >=50 && grade <=59);
    cout<<"you get D"<<endl;
    break;
case 4:
    if (grade >=40 && grade <=49);
    cout<<"you get E"<<endl;
    break;
case 5:
    if (grade >=0 && grade <=39);
    cout<<"you get F"<<endl;
    }
return 0;
}
