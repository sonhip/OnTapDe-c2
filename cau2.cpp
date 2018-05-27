
#include <iostream>
#include <string>
#include "cau1.cpp"
using namespace std;
class CanBo: public NhanVien
{
private:
	string PhongBan;
	float HeSoLuong;
	int TienPhuCap;
public:
	CanBo():NhanVien(),PhongBan(""),HeSoLuong(1.8),TienPhuCap(0){}
	CanBo(string a, Date D, string b, string c, float d, int e):NhanVien(a,D,b),PhongBan(c),HeSoLuong(d),TienPhuCap(e){}
	//setter
	void setPhongBan(string a)
	{
		this->PhongBan=a;
	}
	void setHeSoLuong(float b)
	{
		this->HeSoLuong=b;
	}
	void setTienPhuCap(int c)
	{
		this->TienPhuCap=c;
	}
	//getter
	string setPhongBan()const
	{
		return this->PhongBan;
	}
	float setHeSoLuong()const
	{
		return this->HeSoLuong;
	}
	int setTienPhuCap()const
	{
		return this->TienPhuCap;
	}
	long TinhLuong()
	{
		return this->HeSoLuong*1500000+this->TienPhuCap;
	}
};



