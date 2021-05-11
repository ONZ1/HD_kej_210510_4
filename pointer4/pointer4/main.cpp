#include "sort.h"
/*오름 차순정렬한뒤, myArray에 저장하세요.

1.배열에 직접 접근하는것이아닌, Call By Reference를 이용하여 하세요.

2. 헤더파일과 소스파일은 분리되어 있어야합니다.

3. 메인 소스파일에는 main함수만 있어야합니다.메인함수이외에는 존재해선 안됩니다.*/

void main() {
	int numberArray[] = { 15,2,31,4,8 };
	int* ptr = numberArray;
	int myArray[5];

	printf("원래 배열:");
	out(ptr);

	sort(ptr);

	printf("바뀐 배열:");
	out(ptr);
	
	change(myArray, ptr);
	
	printf("myArray : ");
	out(ptr);

	fgetc(stdin);
}