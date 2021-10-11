// Ch3_Bai1_QLDTTN_MSSV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dethi.h"
#include "Menu.h"
#include <string>
using namespace std;

int main()
{
    cout << "-------Quan ly de thi trac nghiem------Hoten-MSSV-----\n";
    Dethi de;
    string filename = "test.TTN";
    Menu m("Chuc nang chinh");
    m.themLuachon("Thoat chuong trinh");// tuong ung voi chon 0
    m.themLuachon("Tao moi de thi");//tuong ung voi chon 1
    m.themLuachon("Them cau hoi");//tuong ung voi chon 2
    m.themLuachon("In de thi");//tuong ung voi chon3
    m.themLuachon("Ghi vao file");//tuong ung voi chon 4
    m.themLuachon("Doc de thi tu file");//tuong ung voi chon 5
    m.themLuachon("Cho thi");//tuong ung voi chon 6
    m.themLuachon("Xoa cac cau hoi trung");
    //...
    Menu m2("Xac nhan truoc khi thoat");
    m2.themLuachon("Luu du lieu vao file roi thoat");
    m2.themLuachon("Khong luu du lieu va thoat");
    m2.themLuachon("Quay lai");
    while (true) {
        switch (m.chon()){
        case 0:
            switch (m2.chon()) {
            case 0:
                de.luuFile(filename);
                return 0;
            case 1:
                return 0;
            case 2:
                break;
            }
        case 1:
            de.taoMoiDethi();
            break;
        case 2:
            de.themCauhoi();
            break;
        case 3:
            de.xuat();
            break;
        case 4:
            cout << "Nhap ten file: ";
            getline(cin, filename);
            if (de.luuFile(filename))
                cout << "Luu file thanh cong!!!";
            else
                cout << "Co loi, vui long kiem tra lai!!!";
            break;
        case 5:
            cout << "Nhap ten file: ";
            getline(cin, filename);
            if (de.docFile(filename))
                cout << "Doc thanh cong!";
            else
                cout << "Co loi, vui long kiem tra lai!!!";
            break;
        case 6:
            de.choThi();
            break;
        case 7:
            cout <<"So cau trung bi xoa: " << de.xoaCautrung() <<endl;
            break;
        }
    }

}
