#include <bits/stdc++.h>
using namespace std;

int main()
{

    int ia =0, ib = 0;

    int a[3], b[3];

    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<3; i++)
    {
        cin>>b[i];


        if(a[i]>b[i])
        {
            ia +=1;
        }
        else if(a[i]<b[i])
        {
            ib +=1;
        }


    }

    cout<<ia<< " "<<ib<< endl;

    return 0;

}
