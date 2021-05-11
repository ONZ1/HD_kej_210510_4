#include<stdio.h>

//a, b바꾸기
void SwapCallByReference(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
//오름차순 정렬
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
//포인터 인덱스 순서대로 출력
void out(int* ptr) {
	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", ptr[i]);
	}
	printf("\n");
}
//입력된 배열에 포인터 주소에 있는 값 저장하고 포인터를 입력된 배열로 변경
void change(int array[], int* ptr) {
	for (int i = 0; i < 5; i++)
	{
		array[i] = ptr[i];
	}
	ptr = array;
}