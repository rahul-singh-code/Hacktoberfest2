//time complexity- O(N^3)
// Space Complexity - O(1)

#include <iostream>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum) 
{
    for (int i = 0; i < arr_size - 2; i++)
    { 
        for (int j = i + 1; j < arr_size - 1; j++)
        { 
            for (int k = j + 1; k < arr_size; k++)
            { 
                if (A[i] + A[j] + A[k] == sum)
                { 
                    cout << "Triplet is " << A[i] << ", " << A[j] << ", " << A[k] << endl; 
                    return true; 
                } 
            } 
        } 
    } 

    return false; 
} 

int main() 
{ 
    int arr_size;
    cout << "Enter the size of the array: ";
    cin >> arr_size;

    int A[arr_size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < arr_size; i++) {
        cin >> A[i];
    }

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    if (find3Numbers(A, arr_size, sum)) {
        cout << "Triplet found." << endl;
    } else {
        cout << "Triplet not found." << endl;
    }

    return 0; 
}
