#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

struct Diem {
    int x, y;
};

bool cmp(Diem a, Diem b) {
    if(a.x < b.x) return true;  
    if(a.x == b.x && a.y > b.y) return true;
    return false;
}
int main() {
    vector<Diem> v;
    int n;
    cin >> n;
    v.resize(n);
    for(int i=0; i<n; i++) {
        cin >> v[i].x >> v[i].y;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++) {
        cout << v[i].x << " " << v[i].y << endl;
    }
}
