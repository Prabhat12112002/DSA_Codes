#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;


// // <---HALLOW SQUARE PATTERN--->
//     int i = 0;
//     while (i < n)
//     {
//         int j = 0;
//         while (j < n)
//         {
//             if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//             j++;
//         }
//         cout << endl;
//         i++;
//     }


// // <---HALF PYRAMID--->
//     int i=0;
//     while(i<=n){
//         int j=0;
//         while(j<i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---SOLID RECTANGLE--->
//     int i=0;
//     int row;
//     cout<<"Row: ";
//     cin>>row;
//     int col;
//     cout<<"Column: ";
//     cin>>col;
//     while(i<row){
//         int j=0;
//         while(j<col){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---HOLLOW RECTANGLE--->  
    
//     int i=0;
//     int row, col;
//     cout<<"Row: ";
//     cin>>row;
//     cout<<"Column: ";
//     cin>>col;
//     while(i<row){
//         int j=0;
//         while(j<col){
//             if(i == 0 || i == (row - 1) || j == 0 || j == (col - 1)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---INVERTED HALF PYRAMID--->
//     int i = 0;
//     while(i<n){
//         int j=0;
//         while(j<(n-i)){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }


// // <---HOLLOW INVERTED HALF PYRAMID--->    
//     int i = 0;
//     while(i<n){
//         int j=0;
//         while(j<(n-i)){
//             if(i==0||j==0||i==n||j==(n-i-1)){
//             cout<<"*"<<" "; // if we use space then we whave to use 2 times space in else
//             }
//             else{
//                 cout<<"  ";     
//             }
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---(NUMERIC HALF PYRAMID - 1)--->    
//     int i=0;
//     while(i<n){
//         int j=0;
//         while(j<i){
//             cout<<n-i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---(NUMERIC HALF PYRAMID - 2)--->    
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---(NUMERIC HALF PYRAMID - 3)--->    
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// // <---(NUMERIC HALF PYRAMID - 4)--->    
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i+j-1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }


// <---(NUMERIC HALF PYRAMID - 4)--->    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
 




    return 0;
}