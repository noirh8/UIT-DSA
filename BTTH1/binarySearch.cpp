#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while(left<=right) {
        int mid = left + (right - left)/2;
        if(arr[mid] == x) return mid;
        else if(arr[mid]<x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int x;
    cin >> x;

    // cau a
    // sử dụng hàm binarySearch để tìm kiếm x trong mảng arr (không dùng stl)
    int index = binarySearch(arr, x);

    if (index != -1) {
        cout << x << " duoc tim thay o vi tri " << index+1 << endl;
    } else {
        cout << x << " khong duoc tim thay" << endl;
    }


    // cau b
    // sử dụng stl

    if(binary_search(arr.begin(), arr.end(), x)) {
        cout << x << " duoc tim thay " << endl;
    } else {
        cout << x << " khong duoc tim thay" << endl;
    }

    return 0;
}

