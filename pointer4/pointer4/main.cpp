#include "sort.h"
/*���� ���������ѵ�, myArray�� �����ϼ���.

1.�迭�� ���� �����ϴ°��̾ƴ�, Call By Reference�� �̿��Ͽ� �ϼ���.

2. ������ϰ� �ҽ������� �и��Ǿ� �־���մϴ�.

3. ���� �ҽ����Ͽ��� main�Լ��� �־���մϴ�.�����Լ��̿ܿ��� �����ؼ� �ȵ˴ϴ�.*/

void main() {
	int numberArray[] = { 15,2,31,4,8 };
	int* ptr = numberArray;
	int myArray[5];

	printf("���� �迭:");
	out(ptr);

	sort(ptr);

	printf("�ٲ� �迭:");
	out(ptr);
	
	change(myArray, ptr);
	
	printf("myArray : ");
	out(ptr);

	fgetc(stdin);
}