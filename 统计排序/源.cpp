#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void StatisticSort(int* array, const unsigned& length)
{
	int statistic[101] = {0};
	/*for (unsigned i = 0; i < 101; i++)
		statistic[i] = 0;*/
	//ͳ��
	for (unsigned i = 0; i < length; i++)
		statistic[array[i]]++;
	//����
	unsigned index = 0;
	for (unsigned i = 0; i < 101; i++)	
		for (unsigned j = 0; j < statistic[i]; j++)
			array[index++] = i;	
}
int main()
{
	//ͳ������ʱ�临�Ӷ�ΪO(n)�������и��޶���������������������С��Χ�ڣ�����˵���䡣	
	const unsigned length = 200;
	int age[length];

	srand(time(nullptr));
	for (unsigned i = 0; i < length; i++)
		age[i] = rand()%101;

	for (unsigned i = 0; i < length; i++)
		cout << age[i] << "\t";

	StatisticSort(age, length);

	cout << "\n�����\n";

	for (unsigned i = 0; i < length; i++)
		cout << age[i] << "\t";

	system("pause");
	return 0;
}