/*-------------------------
Delete Element
Algorithm:
Delete (LA. N, k, Item)
1. Set Item = LA [K]
2. Repeat for J=K to N-1
     [Move J + 1st element upward] 
     set LA [J] = LA [J+1]
3. [Increase counter] J = J+1 [End of loop]
4. [Reset the number N of elements in LA] Set N = N-1
5. Exit
------------------------ */

#include<iostream>
using namespace std;
int main()
{
    int j,n,k;
    int LA[10],item;
    cout<<"How Many ElementS : ";
    cin>>n;
    cout<<"Enter Elements :"<<endl;
    for(j=0;j<n;j++)
    {
        cin>>LA[j];
    }
    cout<<"Which Position Want to Delete : "<<endl;
    cin>>k;
    cout<<"Enter Deleting element : "<<endl;
    cin>>item;
    item = LA[k];
    for(j=k;j<=n-1;j++)
    {
        LA[j] = LA[j+1];
    }
    cout<<" New Elements are : "<<endl;
    for(j=0;j<=n-1;j++)
    {
        cout<<"\t"<<LA[j];
    }
    return 0;
}