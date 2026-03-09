#include <stdio.h>
#include <string.h>

int main() {
	char input[100];
	printf("请输入一串数字（例如：231）：");
	scanf("%s", input);
	
	int len = strlen(input);
	int a[100];
	
	// 将字符数字转换为整数
	for (int i = 0; i < len; i++) {
		a[i] = input[i] - '0';
	}
	
	// 计算逆序数
	int inv_count = 0;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (a[i] > a[j]) {
				inv_count++;
			}
		}
	}
	
	// 判断奇偶性
	if (inv_count % 2 == 0) {
		printf("偶排列\n");
	} else {
		printf("奇排列\n");
	}
	
	return 0;
}
