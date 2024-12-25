#include <iostream>
#include <string>
#include "cube.h"
//using namespace std;

void cube::LL(int L1)
{
	L = L1;
}
int cube::LL1()
{
	return L;
}
void cube::WW(int W1)
{
	W = W1;
}
int cube::WW1()
{
	return W;
}
void cube::HH(int H1)
{
	H = H1;
}
int cube::HH1()
{
	return H;
}

int cube::ss()
{
	int s;
	s = L * W * 2 + W * H * 2 + L * H * 2;
	return s;
}
int cube::vv()
{
	int v;
	v = L * W * H;
	return v;
}


int main() {

	system("pause");
	return 0;
}
