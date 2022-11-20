/*------------------------ 
Traversing Element In LA
Algorithm:
1.	[Initialize counter] set K=LB.
2.	Repeat steps 3 and 4 while K ≤ UB
3.	[visit element] Apply process to A[K]
4.	[Increase counter] Set K = K+1 
[End of step 2 loop]
5.	Exit
------------------------ */

#include<iostream>
using namespace std;
int main()
{
    int A[6],k,lb,ub,i,n;
    cout<<"How many Elements : " <<endl;
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Lower Bound : "<<endl;
    cin >> lb;
    cout<<"Enter Upper Bound : "<<endl;
    cin>>ub;
    cout<<"Show Element : "<<"\t"<<endl;
    for(k=lb;k<=ub;k++)
    {
        cout<<A[k]<<"\t";
    }
    return 0;
}