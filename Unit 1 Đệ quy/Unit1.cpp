#include<iostream>
using namespace std;

// 1. Tính X mũ n
int Mu(int X, int n) {
    if(n == 0) return 1;
    else return X*Mu(X, n-1);
}

// 2. Sử dụng thuật toán Eclide tìm UCLN
int UCLN(int a, int b){
    if(a == b) return a;
    else if(a > b) return (a-b, b);
    else if(a < b) return (a, b-a);
}
// 3. Tính n!
int GiaiThua(int n){
    if(n == 0) return 1;
    else return n*GiaiThua(n-1);
}
// 4. Tính tổng n phần tử
int Tong(int a[], int n){
    if (n == 1) return 1;
    else return a[n-1] + Tong(a, n-1);
}
// 5. Tìm giá trị lớn nhất của n phần tử
int Max(int a[], int n){
    if(n == 1) return a[0];
    
    else if(a[n-1] > Max(a, n-1)) return a[n-1];
    else return Max(a, n-1);
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a)/sizeof(int);
    cout<<Mu(2,3)<<endl;
    cout<<UCLN(20,25)<<endl;
    cout<<GiaiThua(3)<<endl;
    cout<<Tong(a, n);
    cout<<Max(a, n);
    return 1;
}

