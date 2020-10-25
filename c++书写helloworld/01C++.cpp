#include <iostream>
#include <string>


using namespace std;



int stone(int num) {
	int weight = num * 14;
	return weight;
}

void shuzu() {
	int nums[20] {};
	cout << nums[18] << endl;
	return ;
}

void learn_string() {
	string L = "wangxingkun";
	cout << L << endl;
	return ;
}

struct student
{
	string name;
	int age;
	float weight;
};

void learn_struct() {
	student wxk = {
		"ÍõÐËÀ¤",
		24,
		70.1,
	};
	student zj, zy, zb;
	zj = zy = zb = wxk;
	cout << zj.name << endl;
	return;
}

int* learn_p(int t ) {
	/*
	int a = 3;
	int* p, *r;
	p = &a;
	*/
	int* p = new int[t] {};

	cout << p << endl;
	cout << p << endl;
	cout << p << endl;
	
	delete[] p;
	return p;
}

void Lp() {
	int nums[5]{ 11,42,65,92,12 };
	int* p = nums;

	cout << endl;
	cout << " nums : " << nums << endl;
	cout << endl;
	cout << " p : " << p << endl;
	cout << endl;
	cout << " nums[0] : " << nums[0] << endl;
	cout << endl;
	cout << " p[0] : " << p[0] << endl;
	cout << endl;
	cout << " &nums : " << &nums << endl;
	cout << endl;
	cout << " &nums[0] : " << &nums[0] << endl;
	cout << endl;
	cout << " &p : " << &p << endl;
	cout << endl;
	cout << " size nums : " << sizeof(nums) << endl;
	cout << endl;
	cout << " size p : " << sizeof(p) << endl;
	cout << endl;
	cout << " size &nums : " << sizeof(&nums) << endl;
	cout << endl;
	cout << " p+1 : " << p+1 << endl;
	cout << endl;
	cout << " &nums : " << &nums << endl;
	cout << endl;
	cout << " &nums + 1 - &nums : " << &nums+1 - &nums << endl;
	cout << endl;
	cout << " &nums + 1: " << &nums + 1 << endl;
	cout << endl;
	cout << " *nums : " << *nums << endl;
	cout << endl;
	cout << " *(nums+2) : " << *(nums+2) << endl;
	/*
	cout << nums << endl;
	cout << p << endl;
	cout << endl;
	cout << nums[0] << endl;
	cout << p[0] << endl;
	cout << endl;

	cout << &nums[0] << endl;
	cout << &p[0] << endl;
	cout << endl;

	cout << &nums << endl;
	cout << p << endl;
	
	cout << endl;
	cout << " nums : "<< nums << endl;
	cout << "&nums+1  : " << &nums+1 << endl;
	cout << p+1 << endl;
	cout << endl;

	cout << sizeof(nums) << endl;
	cout << sizeof(&nums) << endl;
	cout << sizeof(p) << endl;
	*/
	return ;
}


int main() {
	//shuzu();
	//learn_string();
	Lp();
	//cout << learn_p(5) << endl;
	return 0;
}
