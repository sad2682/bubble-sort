#include<iostream>
using namespace std;
int main()
{
    int a[]={4,3,2,5,3,9,49};
    int i,j,tmp;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
        
    }
    cout<<"====SORTED ARRAY====="<<endl;
        for(i=1;i<7;i++)
        {
            cout<<a[i]<<" ";
        }
}