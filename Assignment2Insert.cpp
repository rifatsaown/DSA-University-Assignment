/*-------------------------
Insert Element
Algorithm:
Insert (LA. N. K. Item) position in LA.
1. [Initialize counter] set J=N.
2. Repeat steps 3 and 4 while (J >= K) [Move Jth element downward] set LA [J+1] = LA [J].
3. [Decrease counter] set J = J – 1 [End of Step 2 loop].
4. [Insert element] set LA [K] = Item
5 [Reset N] set N = N+1
6. Exit.
---------------------------*/

#include <iostream>
using namespace std;
int main()
{
    int j, n, k;
    int LA[10], item;
    cout << "How Many Elements You Want to Insert : " << endl;
    cin >> n;
    cout << "Enter Elements : " << endl;
    for (j = 0; j < n; j++)
    {
        cin >> LA[j];
    }
    cout << "Which Position : ";
    cin >> k;
    cout << "Enter The insert Element : ";
    cin >> item;
    for (j = n; j >= k; j--)
    {
        LA[j + 1] = LA[j];
    }
    LA[k] = item;
    cout << "Show New Elements : " << endl;
    for (j = 0; j < n + 1; j++)
    {
        cout << LA[j] << "\t";
    }
    return 0;
}