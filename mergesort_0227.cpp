#include <iostream>
using namespace std;

// create main array & teamporary array 
int arr[20], B[20];
// n is array input size 
int n;

void input()
{ 
    while (true)
    {
    cout << "Masukan panjang element array : ";
    cin >> n;

    if (n <= 20)
    {
        break;
    }
    else
    {
        cout << "\nMaksimal panjnag array adalah 20" ;
    }
}