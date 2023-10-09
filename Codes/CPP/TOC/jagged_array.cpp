#include<iostream>
using namespace std;
int main()
{
    int rows, z = 1;
    cout<<"Enter no. of rows: ";
    cin>>rows;
    int cols[rows];
    int *arr[rows]; // Declare jagged array

    //Input columns in each row:
    for(int i =0; i<rows; i++){
        cout<<"Enter no. of cols in row "<<i+1<<" : ";
        cin>>cols[i];
        arr[i] = new int[cols[i]];
        // OR arr[i] = (int *)malloc(cols[i] * sizeof(int)); ---FOR MALLOC
    }

    // Input Array:
    for(int i =0; i<rows; i++){
        for(int j =0; j<cols[i]; j++){
            cout<<"Enter value: "<<z<<" : ";
            cin>>arr[i][j];
            z++;
        }
    }

    // Output Array:
    for(int i =0; i<rows; i++){
        for(int j =0; j<cols[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}