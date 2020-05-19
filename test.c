#include <stdio.h>
#include <stdlib.h>

int main1(){
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a = %d, b = %d, c = %d\n", a, b, c); // a = -1, b = -1, c = 255
	printf("a = %u, b = %u, c = %u\n", a, b, c);// a 为32个1, b为32个1, c = 255

	system("pause");
	return 0;
}

void test1(){
	char a = -128;
	printf("%u\n", a); // FFFF FF80  --> 二进制: 1000 0000
	return 0;
}

void test2(){
	char a = 128;
	printf("%u\n", a); // FFFF FF80  --> 二进制: 1000 0000
	return 0;
}

void test3(){
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j); // -10
}

void test4(){
	unsigned int i; 
	for (i = 9; i >= 0; i--){
		printf("%u\n", i); // 死循环, 因为unsigned int i的i 是永远大于0的
	}
}

void test5(){
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++){
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a)); // 255  因char数组中最小的数据就是-128, 再减1就直接到了127 -1~-128 --> 127~0  
	return 0;
}

void test6(){
	unsigned char i = 0;
	for (i = 0; i <= 255; i++){
		printf("hello world\n"); // 死循环 0~255 下来还是0~255
	}
	return 0;
}

int main(){
	/*
	test1();
	test2();
	test3();
	test4();
	test5();
	*/
	test6();
	system("pause");
	return 0;

}