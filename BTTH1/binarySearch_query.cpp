#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cout << "Nhap so luong phan tu cua mang: "; cin >> n;
    cout << "Nhap so luong truy van: "; cin >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    while(q--) {
        cout << "Nhap so can tim: ";
        int x;
        cin >> x;
        if(binary_search(arr.begin(), arr.end(), x)) 
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
