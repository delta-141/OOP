#include<iostream>
#include<map>
using namespace std;

int main()
{
    string nm;
    long int pop;
    map<string,long int>m1;
    /* m1[Maharshtra]=100000
    m1[Goa]=100000
    m1[TamilNadu]=100000
    m1[Bengal]=100000
    m1[Madhyapradesh]=100000 */
    
    for(int i=0;i<=4;i++)
    {
        cout<<"\n Enter Name : ";
        cin>>nm;
        cout<<"\n Enter Population : ";
        cin>>pop;
        m1[nm]=pop;
    }
    
    for(map<string,long int>::iterator p=m1.begin(); p != m1.end();p++)
    {
        cout<<"\n"<<p->first<<"\t"<<p->second<<"\n";
    }
    
    cout<<"\n Enter The Name To Search : ";
    cin>>nm;
    auto it = m1.find(nm);
    if(it!=m1.end())
    {
        cout<<"\n Population is : "<<it->second;
    }
    else
    {
        cout<<"\n Not Found! ";
    }
    
    return 0;
}