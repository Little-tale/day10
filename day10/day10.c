#include <stdio.h>
// 동적할당 과 정적할당

// 정적할당
// 정적 -> 움직이지 않는다 -> 
// 할당 -> 공간을 점유하다.
// 공간 점유를 변화 시키지 않는다.
//  ex 변수 

//int main()
//{
//	int a;
//	int b;
//
//	return 0;
//}


// 동적할당
// 동적 -> 움직임이 있다.
// 할당 -> 공간 점유를 변화시킨다.


// 동적할당 -> 정적할당이 해주는 일을 수동으로 하는것.
// 특정 주소의 공간에 측정 크기만큼을 점유(할당) 하고 이용한 후
// 이용이 끝난 특정 주소의 공간을 비점유(해제) 하는것.

// 동적할당 함수, 할당헤제 함수

#include <stdio.h>
#include <stdlib.h> // 말록, 프리
//int main()
//{
//	int a = 4;
//	int *b = malloc(a); // 동적할당 4바이트 //변수 이름이 없음 // 그래서 주소값으로 받아야함.
//	*b = 5;
//	printf_s("%d\n", *b);
//	free(b);
//
//	return 0;
//}

// 동적 할당한 벼눗 2개(4바이트 2개)에 숫자 2개을 입력하고 두수의 합을 출력하는 프로그램

//int main()
//{
//	int* a = malloc(4);
//	int* b = malloc(4);
//
//	*a = 3;
//	*b = 7;
//
//	
//	printf("%d", *a + *b);
//	free(a, b); // 프리를 안쓰고 만들면 메모리 누수
//
//	return 0;
//}

// 메모리 누수 
	// 사용할수 있는 공간이 줄어든다.
	

//int main()
//{
//	int* a = malloc(8);
//	a + 0;
//	a + 1; // 이런식으로 배열 활용가능
//
//	free(a);
//
//	return 0;
//}


 // 숫자 10개를 입력한후 입력한 수들의 초합을 출력하는 프로그램 작성


//int main()
//{
//	int* a = malloc(40);
//	int result = 0;
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf_s(" %d", a + i);
//		result += a[i];
//	}
//	printf_s(" 총 합은 %d ", result);
//	free(a);
//
//	return 0;
//}

// 숫자를 무한히 입력하다가 0을 입력하면 지금까지 입력한 모든수를 출력하시오
//void main()
//{
//	int scan, count = 0;
//	int* numbers = 0;
//
//	while (1)
//	{
//		scanf_s("%d", &scan);
//		if (scan == 0) break;
//		if (numbers == 0)
//		{
//			numbers = malloc(4);
//		}
//		else
//		{
//			// malloc = Memory Allocation -> 저장공간 할당
//			//realloc = re Allocation -> 저장공간 재 할당
//
//			numbers = realloc(numbers, (count + 1) * 4);
//
//			/*int* copy = malloc((count + 1) * 4);
//			for (int i = 0; i < count; ++i)
//			{
//				copy[i] = numbers[i];
//			}
//			free(numbers);
//			numbers = copy;*/
//
//		}
//		numbers[count] = scan;
//		++count;
//
//		
//
//	}
//	for (int i = 0; i < count; ++i)
//	{
//		printf("%d> ", numbers[i]);
//	}
//	if (numbers) free(numbers);
//
//}


// 무한히 숫자를 입력하다가 0을 입력하면
// 지금까지 입력한 숫자 중 짝수의 합과 홀수의 합을 따로 구해 출력하시오


//void main()
//{
//	int scan, count = 0; // 스캔은 입력받을 숫자 , 카운트는 얼만큼 반복중이며 인덱스값으로 활용 예정
//	int* numbers = 0; // 받은 숫자의 주소 변수. 동적할당 예정
//
//	while (1) // 무한히 받을것이라 와일문 활용
//	{
//		scanf_s("%d", &scan); // 스캔받음
//		if (scan == 0) break; // 만약 0을 입력받으면 종료
//		if (numbers == 0) // 주소0은 건들면 안됨.
//		{
//			numbers = malloc(sizeof(int));
//		}
//		else // 다아니라면 새로입력받은 수를 넘버스라는 공간에 재 할당
//		{
//			// malloc = Memory Allocation -> 저장공간 할당
//			//realloc = re Allocation -> 저장공간 재 할당
//			numbers = realloc(numbers, (count + 1) * sizeof(int));
//			// 넘버스에 재할당 (넘버스, 카운트+1에 4를 곱해 인트자료형 크기만큼 할당
//			//printf("%d번쨰 : ", count);
//		}
//		numbers[count] = scan;
//		++count;
//	}
//	
//	int result = 0; // 짝수를 위한 변수
//	int result2 = 0; // 홀수를 위한 변수
//	
//	for (int i = 0; i < count; ++i) // count의 최대공간만큼 i를 상승시켜 각 공간에 들어있는 값을 확인
//	{
//		if (numbers[i] % 2 == 0) // 넘버스 i 값의 2로 나눈 나머지가 0일때 짝수 변수에 증감. 
//		{
//			result += numbers[i];
//		}
//		else if (numbers[i] % 2 == 1)// 넘버스 i 값의 2로 나눈 나머지가 1일때 홀수 변수에 증감. 
//		{
//			result2 += numbers[i];
//		}
//		else {break;} // 둘다 아니라면 오류로 판단하고 종료
//	}
//	printf_s(" 짝수의 합은 : %d", result);
//	printf_s(" 홀수의 합은 : %d \n", result2);
//
//	if (numbers) free(numbers);
//
//}


// sige of -> 변수, 자료형의 크기를 구하는 함수.

//void main()
//{
//	printf("%d", sizeof(int));
//}

// 무한히 입력하는 무언가
//void main()
//{
//	int* a = malloc(4);
//
//	printf("%d \n", *a); // 이런 실수가 빈번하다. 파악하기도 힘들다.
//	scanf_s("%d", a);
//
//	free(a);
//}

// 초기화란? -> 변수의 크기와 동일한 크기의 데이터를 미리 준비하고
	// 준비한 데이터를 변수에 Copy & Paste 하는 기능

#include <memory.h>
// 초기화 방법중에 하나

//void main()
//{
//	int* a = malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; ++i)
//	{
//		a[i] = 0;
//	}
//	memset(a, 0, sizeof(int) * 10);
//	free(a);
//}

 
 
// 동적할당하는데 0으로 초기화 까지 함께 해주는 함수

//void main()
//{
//	int* a = calloc(10,sizeof(int)); // clear allocation -> 깨끗한 할당
//	// 이렇게 하는 이유
//		// 각각의 공간은 빠르게 0으로 채우기 위해서!!!
//
//	/*for (int i = 0; i < 10; ++i)
//	{
//		a[i] = 0;
//	}
//	memset(a, 0, sizeof(int) * 10);*/
//	free(a);
//}

//void* allocation(int size)
//{
//	void* r = malloc(size);
//	memset(r, 0, size);
//	return r;
//}


// 무한히 숫자를 입력하는 프로그램을 만들고 0 입력시 종료
// 입력한 모든 숫자를 출력하는 프로그램을 작성
// 숫자 입력중 홀수를 입력하면 칸은 만들되 숫자는 입력하지 마라.


//void* clearrealloc(void* ptr, int size)
//{
//	void* copy = calloc(1, size); // 1개 사이즈 
//	if (ptr) memcpy(copy, ptr, size);
//	if(ptr) free(ptr);
//	return copy;
//}
//
//
//
//void main()
//{
//	int count =0, scan = 0;
//	int* numbers = 0;
//
//	while (1)
//	{
//		scanf_s("%d", &scan);
//		if (scan == 0) break;
//		numbers = clearrealloc(numbers, sizeof(int) * (count + 1));
//		if (scan % 2 == 0) numbers[count] = scan;
//		++count;
//
//	}
//	for (int i = 0; i < count; ++i)
//	{
//		printf_s(" %d >>", numbers[i]);
//	}
//
//	free(numbers);
//
//}

// 동적할당 ->  초기화

//void* Allocation(void* ptr, unsigned int size)
//{
//	void* result = malloc(size);
//	memset(result, 0, size);
//	if (ptr)
//	{
//		memcpy(result, ptr, size);
//	}
//	else
//	{
//
//	}
//	return result;
//}

// Debug System


//void Debug(int line, char* file, char* func, char* date)
//{
//	printf_s(" %64s - %16s [ %9d ] -%s \n", file, func, line, date);
//
//}
//
//void main()
//{
//	Debug(__LINE__, __FILE__, __FUNCTION__,__TIMESTAMP__);
//
//
//}



