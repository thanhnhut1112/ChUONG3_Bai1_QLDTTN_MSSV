#include "Dethi.h"
#include <iostream>
#include <fstream>
using namespace std;

void Dethi::taoMoiDethi()
{
    dsCauhoi.clear();
    cout << "Da xoa cac cau hoi!\n";
}

void Dethi::themCauhoi()
{
    CauhoiTN* ptr = new CauhoiTN();//khai bao con tro ptr, tao moi mot doi tuong
    ptr->nhap();
    dsCauhoi.push_back(*ptr);
    cout << "Da them thanh cong. So cau hoi hien tai la " << dsCauhoi.size() <<".";
}

void Dethi::xuat()
{
    cout << "De thi co " << dsCauhoi.size() << " cau: \n";
    for (int i = 0; i < dsCauhoi.size(); i++) {
        cout << "Cau " << i + 1 << ". ";
        dsCauhoi[i].xuat();//goi xuat cua doi tuong CauhoiTN
    }
}

bool Dethi::luuFile(string filename)
{
    //Mo file de ghi
    ofstream fo(filename);
    if (!fo.is_open())
        return false;
    //Ghi vao so cau hoi o dong dau tien
    fo << dsCauhoi.size() << endl;
    //Ghi lan luot cac cau hoi vao file
    for (int i = 0; i < dsCauhoi.size(); i++)
        dsCauhoi[i].ghifile(fo);
    fo.close();
    return true;
}

bool Dethi::docFile(string filename)
{
    //Mo file de doc
    ifstream fi(filename);
    if (!fi.is_open())
        return false;
    int socauhoi;
    fi >> socauhoi;//van con ky tu xuong dong 
    string tmp;
    getline(fi, tmp);//bo qua ky tu xuong dong dau tien
    //Doc lan luot cac cau hoi
    for (int i = 0; i < socauhoi; i++)
    {
        CauhoiTN* ptr = new CauhoiTN();
        ptr->docfile(fi);
        dsCauhoi.push_back(*ptr);
    }
    fi.close();
    return true;
}

int Dethi::choThi()
{
    return 0;
}

int Dethi::xoaCautrung()
{
    //Sinh vien tu viet!!!!
    return 0;
}
