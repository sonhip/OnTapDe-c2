#include <iostream>
#include "cau2.cpp"
using namespace std;
int main()
{
	CanBo S("Tran Van Son",Date(01,01,1999),"142980456","Phong A702",2.5,100);
	cout<<S.TinhLuong()<<endl;
	return 0;
}