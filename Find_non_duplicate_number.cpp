#include <iostream>
#include <vector>

int findNonDuplicateNumber(std::vector<int> vec_nums)
{
	int xor_res = 0;
	for(int i = 0; i < vec_nums.size(); i++)
	{
		xor_res = xor_res ^ vec_nums[i];
	}

    return xor_res;
}

int main()
{
	std::vector<int> vec;

	vec.push_back(3);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(-4);
	vec.push_back(1);
	vec.push_back(9);
	vec.push_back(5);
	vec.push_back(7);
	vec.push_back(7);
	vec.push_back(8);
	vec.push_back(5);
	vec.push_back(-4);
	vec.push_back(13);

	int num = findNonDuplicateNumber(vec);
	std::cout << "number " << num << " has no duplicate" << std::endl;

    return 0;
}

