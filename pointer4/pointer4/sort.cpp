#include<stdio.h>

//a, b�ٲٱ�
void SwapCallByReference(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//�������� ����
void sort(int* ptr) {
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (ptr[i] > ptr[j])
			{
				SwapCallByReference((ptr + i), (ptr + j));
			}
		}
	}
}
//������ �ε��� ������� ���
void out(int* ptr) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", ptr[i]);
	}
	printf("\n");
}
//�Էµ� �迭�� ������ �ּҿ� �ִ� �� �����ϰ� �����͸� �Էµ� �迭�� ����
void change(int array[], int* ptr) {
	for (int i = 0; i < 5; i++)
	{
		array[i] = ptr[i];
	}
	ptr = array;
}