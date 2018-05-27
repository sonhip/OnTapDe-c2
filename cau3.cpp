#include <iostream>
#include <string>
#include "cau2.cpp"
using namespace std;
class GiaoVien:public NhanVien
{
private:
	string khoa;
	double hesoluong;
	int tienday;
public:
	GiaoVien():NhanVien(),khoa(""),hesoluong(2.34),tienday(0){}
	GiaoVien(string a, Date D, string b, string c, double d, int e):NhanVien(a,D,b),khoa(c),hesoluong(d),tienday(e){}
	//setter
	
	void setkhoa(string a)
	{
		this->khoa=a;
	}
	void sethesoluong(double b)
	{
		this->hesoluong=b;
	}
	void settienday(int c)
	{
		this->tienday=c;
	}
	//getter
	string getkhoa()const
	{
		return this->khoa;
	}
	double gethesoluong()const
	{
		return this->hesoluong;
	}
	int gettienday()const
	{
		return this->tienday;
	}
	long TinhLuong()
	{
		return this->hesoluong*1500000+this->tienday;
	}
	
};