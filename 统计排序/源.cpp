#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void StatisticSort(int* array, const unsigned& length)
{
	int statistic[101] = {0};
	/*for (unsigned i = 0; i < 101; i++)
		statistic[i] = 0;*/
	//统计
	for (unsigned i = 0; i < length; i++)
		statistic[array[i]]++;
	//排序
	unsigned index = 0;
	for (unsigned i = 0; i < 101; i++)	
		for (unsigned j = 0; j < statistic[i]; j++)
			array[index++] = i;	
}
int main()
{
	//统计排序，时间复杂度为O(n)，但它有个限定条件，被排序对象必须在小范围内，比如说年龄。	
	const unsigned length = 200;
	int age[length];

	srand(time(nullptr));
	for (unsigned i = 0; i < length; i++)
		age[i] = rand()%101;

	for (unsigned i = 0; i < length; i++)
		cout << age[i] << "\t";

	StatisticSort(age, length);

	cout << "\n排序后：\n";

	for (unsigned i = 0; i < length; i++)
		cout << age[i] << "\t";

	system("pause");
	return 0;
}