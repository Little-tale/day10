#include <stdio.h>
// �����Ҵ� �� �����Ҵ�

// �����Ҵ�
// ���� -> �������� �ʴ´� -> 
// �Ҵ� -> ������ �����ϴ�.
// ���� ������ ��ȭ ��Ű�� �ʴ´�.
//  ex ���� 

//int main()
//{
//	int a;
//	int b;
//
//	return 0;
//}


// �����Ҵ�
// ���� -> �������� �ִ�.
// �Ҵ� -> ���� ������ ��ȭ��Ų��.


// �����Ҵ� -> �����Ҵ��� ���ִ� ���� �������� �ϴ°�.
// Ư�� �ּ��� ������ ���� ũ�⸸ŭ�� ����(�Ҵ�) �ϰ� �̿��� ��
// �̿��� ���� Ư�� �ּ��� ������ ������(����) �ϴ°�.

// �����Ҵ� �Լ�, �Ҵ����� �Լ�

#include <stdio.h>
#include <stdlib.h> // ����, ����
//int main()
//{
//	int a = 4;
//	int *b = malloc(a); // �����Ҵ� 4����Ʈ //���� �̸��� ���� // �׷��� �ּҰ����� �޾ƾ���.
//	*b = 5;
//	printf_s("%d\n", *b);
//	free(b);
//
//	return 0;
//}

// ���� �Ҵ��� ���� 2��(4����Ʈ 2��)�� ���� 2���� �Է��ϰ� �μ��� ���� ����ϴ� ���α׷�

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
//	free(a, b); // ������ �Ⱦ��� ����� �޸� ����
//
//	return 0;
//}

// �޸� ���� 
	// ����Ҽ� �ִ� ������ �پ���.
	

//int main()
//{
//	int* a = malloc(8);
//	a + 0;
//	a + 1; // �̷������� �迭 Ȱ�밡��
//
//	free(a);
//
//	return 0;
//}


 // ���� 10���� �Է����� �Է��� ������ ������ ����ϴ� ���α׷� �ۼ�


//int main()
//{
//	int* a = malloc(40);
//	int result = 0;
//	for (int i = 0; i < 10; ++i)
//	{
//		scanf_s(" %d", a + i);
//		result += a[i];
//	}
//	printf_s(" �� ���� %d ", result);
//	free(a);
//
//	return 0;
//}

// ���ڸ� ������ �Է��ϴٰ� 0�� �Է��ϸ� ���ݱ��� �Է��� ������ ����Ͻÿ�
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
//			// malloc = Memory Allocation -> ������� �Ҵ�
//			//realloc = re Allocation -> ������� �� �Ҵ�
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


// ������ ���ڸ� �Է��ϴٰ� 0�� �Է��ϸ�
// ���ݱ��� �Է��� ���� �� ¦���� �հ� Ȧ���� ���� ���� ���� ����Ͻÿ�


//void main()
//{
//	int scan, count = 0; // ��ĵ�� �Է¹��� ���� , ī��Ʈ�� ��ŭ �ݺ����̸� �ε��������� Ȱ�� ����
//	int* numbers = 0; // ���� ������ �ּ� ����. �����Ҵ� ����
//
//	while (1) // ������ �������̶� ���Ϲ� Ȱ��
//	{
//		scanf_s("%d", &scan); // ��ĵ����
//		if (scan == 0) break; // ���� 0�� �Է¹����� ����
//		if (numbers == 0) // �ּ�0�� �ǵ�� �ȵ�.
//		{
//			numbers = malloc(sizeof(int));
//		}
//		else // �پƴ϶�� �����Է¹��� ���� �ѹ������ ������ �� �Ҵ�
//		{
//			// malloc = Memory Allocation -> ������� �Ҵ�
//			//realloc = re Allocation -> ������� �� �Ҵ�
//			numbers = realloc(numbers, (count + 1) * sizeof(int));
//			// �ѹ����� ���Ҵ� (�ѹ���, ī��Ʈ+1�� 4�� ���� ��Ʈ�ڷ��� ũ�⸸ŭ �Ҵ�
//			//printf("%d���� : ", count);
//		}
//		numbers[count] = scan;
//		++count;
//	}
//	
//	int result = 0; // ¦���� ���� ����
//	int result2 = 0; // Ȧ���� ���� ����
//	
//	for (int i = 0; i < count; ++i) // count�� �ִ������ŭ i�� ��½��� �� ������ ����ִ� ���� Ȯ��
//	{
//		if (numbers[i] % 2 == 0) // �ѹ��� i ���� 2�� ���� �������� 0�϶� ¦�� ������ ����. 
//		{
//			result += numbers[i];
//		}
//		else if (numbers[i] % 2 == 1)// �ѹ��� i ���� 2�� ���� �������� 1�϶� Ȧ�� ������ ����. 
//		{
//			result2 += numbers[i];
//		}
//		else {break;} // �Ѵ� �ƴ϶�� ������ �Ǵ��ϰ� ����
//	}
//	printf_s(" ¦���� ���� : %d", result);
//	printf_s(" Ȧ���� ���� : %d \n", result2);
//
//	if (numbers) free(numbers);
//
//}


// sige of -> ����, �ڷ����� ũ�⸦ ���ϴ� �Լ�.

//void main()
//{
//	printf("%d", sizeof(int));
//}

// ������ �Է��ϴ� ����
//void main()
//{
//	int* a = malloc(4);
//
//	printf("%d \n", *a); // �̷� �Ǽ��� ����ϴ�. �ľ��ϱ⵵ �����.
//	scanf_s("%d", a);
//
//	free(a);
//}

// �ʱ�ȭ��? -> ������ ũ��� ������ ũ���� �����͸� �̸� �غ��ϰ�
	// �غ��� �����͸� ������ Copy & Paste �ϴ� ���

#include <memory.h>
// �ʱ�ȭ ����߿� �ϳ�

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

 
 
// �����Ҵ��ϴµ� 0���� �ʱ�ȭ ���� �Բ� ���ִ� �Լ�

//void main()
//{
//	int* a = calloc(10,sizeof(int)); // clear allocation -> ������ �Ҵ�
//	// �̷��� �ϴ� ����
//		// ������ ������ ������ 0���� ä��� ���ؼ�!!!
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


// ������ ���ڸ� �Է��ϴ� ���α׷��� ����� 0 �Է½� ����
// �Է��� ��� ���ڸ� ����ϴ� ���α׷��� �ۼ�
// ���� �Է��� Ȧ���� �Է��ϸ� ĭ�� ����� ���ڴ� �Է����� ����.


//void* clearrealloc(void* ptr, int size)
//{
//	void* copy = calloc(1, size); // 1�� ������ 
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

// �����Ҵ� ->  �ʱ�ȭ

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



