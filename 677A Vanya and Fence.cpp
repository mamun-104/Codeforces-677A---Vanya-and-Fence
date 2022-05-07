#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int w[n];
    int i,result=0;
    for(i=0;i<n;i++)
    {
        cin>>w[i];

        if(w[i]<=h){result++;}
        else{
            if(w[i]%h>0){result=result+(w[i]/h)+1;}
            else {result=result+(w[i]/h);}
        }
    }

    cout<<result<<endl;


    return 0;
}

