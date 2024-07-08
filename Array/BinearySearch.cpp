#include<iostream>
using namespace std;

int BinerySearch(int arr[], int n, int key) {
    int s=0;
    int e=n;

    while (s <= e)
    {
        int mid = (s+e)/2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        }
        else
        {
            s = mid + 1;
        }
        
    }  
        return -1;
}

int main() {

    int n;
    int arr[n];
    cout << "Enter the size of array : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cout << "Enter element you are search : ";
    cin >> key;

    cout << BinerySearch(arr, n, key);

    return 0;

}