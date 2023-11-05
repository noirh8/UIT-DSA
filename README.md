# Bài thực hành 1 :

## 1. Viết chương trình cài đặt giải thuật tìm kiếm tuyến tính (linear search):
1. Không sử dụng thư viện STL
1. Sử dụng thư viện STL

   Tham khảo : [cplusplus.com](https://cplusplus.com/reference/algorithm/find/)
## 2. Viết chương trình cài đặt giải thuật tìm kiếm nhị phân (binary search) :
1. Không sử dụng thư viện STL
1. Sử dụng thư viện STL

   Tham khảo: [cplusplus.com](https://cplusplus.com/reference/algorithm/binary_search/)
## 3. Binary Search
Cho một dãy số nguyên a gồm N phần tử a_{1}, a_{2}, … , a_{N}.
Có Q truy vấn, mỗi truy vấn cho một số nguyên x. Bạn hãy trả lời xem số nguyên x này có trong dãy a hay không?
Input:
 - Dòng đầu tiên là 2 số nguyên dương N, Q 
 - Dòng tiếp theo chứa N số nguyên a_{i} ( ) là các phần tử của mảng.
 - Q dòng tiếp theo, mỗi dòng chứa một số x là câu hỏi của truy vấn.
Output: Gồm Q dòng, mỗi dòng gồm một câu trả lời. Nếu x trong dãy a thì in ra ‘YES'. Ngược lại, in ra ‘NO'.
Ví dụ:

| Input | Output |
|-------|--------|
| 7 5 </br> 9 10 12 -1 0 1 7 </br> 3 </br> 2 </br> 1 </br> 9 </br> 7 | </br></br> NO </br> NO </br> YES </br> YES </br> YES|

## 4. Tập Điểm
Cho một tập N điểm (x,y) trên mặt phẳng Oxy. Bạn hãy sắp xếp và in ra các điểm tăng dần theo x, nếu x bằng nhau thì sắp xếp các điểm giảm dần theo y.
- Input: 
    - Dòng đầu tiên chứa số nguyên N ( 1 <= N <= 10^6) là số lượng điểm trên mặt phẳng.
    - N dòng tiếp theo gồm 2 số nguyên x, y ( -10^9 <= x,y <= 10^9) là toạ độ của các điểm trên mặt phẳng.
- Output:   Các điểm đã được sắp xếp , mỗi điểm được in trên một hàng.
Ví dụ:

| Input | Output |
|-------|--------|
| 5 </br> 1 2 </br> 1 3 </br> 2 4 </br> 2 9 </br> 4 1 | </br> 1 3 </br> 1 2 </br> 2 9 </br> 2 4 </br> 4 1|
