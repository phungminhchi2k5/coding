
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include<math.h>
using namespace std;

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &A){
    cin >>A.MASV>>A.HoTen>>A.NgaySinh>>A.GioiTinh>>A.DiemToan>>A.DiemLy>>A.DiemHoa;
}
void Xuat(SinhVien A){
    cout<<A.MASV<<'\t'<<A.HoTen<<'\t'<<A.NgaySinh<<'\t'<<A.GioiTinh<<'\t'<<A.DiemToan<<'\t'<<A.DiemLy<<'\t'<<A.DiemHoa<<'\t'<<roundf(((A.DiemToan+A.DiemLy+A.DiemHoa)/3)*100)/100;
}
int main() {
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
