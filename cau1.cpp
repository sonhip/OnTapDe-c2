#ifndef CAU1_H
#define CAU1_H
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Date():ngay(0),thang(0),nam(0){}
	Date(int a, int b,int c):ngay(a),thang(b),nam(c){}
	void print()
	{
		cout<<this->ngay<<"-"<<this->thang<<"-"<<this->nam<<endl;
	}
	//setter
	void setNgay(int a)
	{
		this->ngay=a;
	}
	void setThang(int b)
	{
		this->thang=b;
	}
	void setNam(int c)
	{
		this->nam=c;
	}
	//getter
	int getNgay()const
	{
		return this->ngay;
	}
	int getThang()const
	{
		return this->thang;
	}
	int getNam()const
	{
		return this->nam;
	}
	//operator
	friend ostream &operator <<(ostream & out, const Date &D)
	{
		out<<D.ngay<<"-"<<D.thang<<"-"<<D.nam;
		return out;
	}
};
class NhanVien
{
protected:
	string Name;
	Date D;
	string CMND;
public:
	NhanVien():Name(""),D(),CMND(""){}
	NhanVien(string a, Date d, string b):Name(a),D(d),CMND(b){}
	//setter
	void setName(string a)
	{
		this->Name=a;
	}
	void setCMND(string b)
	{
		this->CMND=b;
	}
	//getter
	string getName()const
	{
		return this->Name;
	}
	string getCMND()const
	{
		return this->CMND;
	}
	virtual long TinhLuong()=0;
};

#endif
