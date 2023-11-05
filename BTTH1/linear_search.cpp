#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int x;
    cin >> x;
    

    // Cau a
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    for(i = 0; i<n; i++) {
        if(arr[i]==x) break;
    }
    if(i==n) cout << x << " khong duoc tim thay" << endl;
    else cout << x << " duoc tim thay o vi tri " << i+1 << endl;


    // Cau b
    vector<int> v = {1,2,3,4,5,6,7,8};
    cin >> x;
    auto res = find(v.begin(), v.end(), x);
    if(res != v.end()) cout << x << " duoc tim thay o vi tri " << res-v.begin()+1 << endl;
    else cout << x << " khong duoc tim thay" << endl;

}
