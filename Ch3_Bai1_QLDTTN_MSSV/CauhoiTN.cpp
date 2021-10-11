#include "CauhoiTN.h"
#include <fstream>
#include <iostream>
using namespace std;

// Nhap mot cau hoi tu ban phim
void CauhoiTN::nhap()
{
    cout << "Nhap noi dung cau hoi: ";
    getline(cin, noidung);
    cout << "Nhap dap an A: ";
    getline(cin, dapanA);
    cout << "Nhap dap an B: ";
    getline(cin, dapanB);
    cout << "Cau nao dung (A/B)? ";
    getline(cin, caudung);
}

void CauhoiTN::xuat()
{
    cout << noidung << endl;
    cout << "A. " << dapanA << endl;
    cout << "B. " << dapanB << endl;
}

void CauhoiTN::docfile(ifstream& fi)
{
    getline(fi, noidung);
    getline(fi, dapanA);
    getline(fi, dapanB);
    getline(fi, caudung);
}

void CauhoiTN::ghifile(ofstream& fo)
{
    fo << noidung << endl;
    fo << dapanA << endl;
    fo << dapanB << endl;
    fo << caudung << endl;
}

bool CauhoiTN::kiemtra()
{
    string chon;
    xuat();
    cout << "Dap an cua ban (A/B)?";
    getline(cin, chon); // Cho nguoi dung nhap vao dap an A hay B
    if (chon.compare(caudung)==0) // So sanh voi cau dung
        return true;
    else
        return false;
}

bool giongnhau(const CauhoiTN& cau1, const CauhoiTN& cau2)
{
    //So sanh cac cap thuoc tinh cua cau 1 va cau 2
    //!!!Sinh vien tu viet!!!!!
    return false;
}
