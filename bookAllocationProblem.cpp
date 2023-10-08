#include<iostream>
using namespace std;

/*

You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is minimim

conditions:
1. Each student should be allocated to a student 
2. Book allocation should be in a contigeous manner
3. Each student gets atleast one book

*/

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int main() {
    int arr[4] = {10, 20, 30, 40};
    int s = 0;
    int sum = 0; // Initialize sum
    for (int i = 0; i < 4; i++) {
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e-s)/2; // Correct the calculation of mid
    int ans = -1;

    int m;
    cout << "Enter no. of students" << endl;
    cin >> m;
    while (s <= e) { 
        if (isPossible(arr, 4, m, mid)) { // Possible solution
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1; 
        }
        mid = s + (e-s)/2;
    }

    cout << "The maximum number of pages assigned to a student is minimum is : " << ans << endl;

    return 0;
}
