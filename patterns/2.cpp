#include<iostream>
using namespace std;

// B
// BC
// BCA

int main()
{
    char i, j;
    for (i = 66; i <= 68; i++)
    {
        for (j = 66; j <= i; j++)
        {
            if (j == 68)
            {
                cout<<"A";
            }
            else
            {
				cout<<j;            }
        }
        cout<<endl;
}
}