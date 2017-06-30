#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void)
{
	vector<int> ivec = { 1,2,3,4,5,6,7,8 };
	auto iter = ivec.begin();
	while (iter != ivec.end())
	{
		if (*iter % 2)
		{
			iter = ivec.insert(iter, *iter);
			iter += 2;
		}
		else
			iter = ivec.erase(iter);
	}
	for (const auto i : ivec)
		cout << i << " ";
	vector<string> svec = { "wow","cow","how","now" };
	auto siter = svec.begin();
	string st = "@@";
	while (siter != svec.end())
	{
		siter++;
		siter = svec.insert(siter, st);
		//	svec.insert(siter, st);
		siter += 1;
	}
	for (const auto &s : svec)
		cout << s << " ";
	cout << endl;
	system("pause");
	return 0;
}
