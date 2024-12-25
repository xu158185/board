#include <iostream>
#include <string>
#include "start.h"
//using namespace std;
class cube
{
public:
	void LL(int L1)
	{
		L = L1;
	}
	int LL1()
	{
		return L;
	}
	void WW(int W1)
	{
		W = W1;
	}
	int WW1()
	{
		return W;
	}
	void HH(int H1)
	{
		H = H1;
	}
	int HH1()
	{
		return H;
	}

	int ss() 
	{
		int s;
		s = L * W * 2 + W * H * 2 + L * H * 2;
		return s;
	}
	int vv()
	{
		int v;
		v = L * W *  H ;
		return v;
	}
	bool same(cube &c)
	{
		cout << "zhi  " << L<< endl;
		cout << "zhi1 " << W<< endl;
		cout << "zhi2 " << H<< endl;
		cout << "zhi11  " << c.LL1() << endl;
		cout << "zhi22 " << c.WW1() << endl;
		cout << "zhi33 " << c.HH1() << endl;
		if (L == c.LL1() && W == c.WW1() && H == c.HH1())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	int L;//长
	int W;//宽
	int H;//高

};

int main() {
	
	cube c1;
	c1.LL(6);
	c1.WW(4);
	c1.HH(5);
	//cout << "面积   " << c1.ss() << endl;
	//cout << "体积   " << c1.vv()<< endl;
	cube c2;
	c2.LL(3);
	c2.WW(9);
	c2.HH(9);
	bool ret = c1.same(c2);
	if (ret)
	{
		cout << "相等   "  << endl;
	}
	else {
		cout << "不相等   "  << endl;
	}
	system("pause");
	return 0;
}
