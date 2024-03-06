#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* parr = arr;

	printf("arr 林家 : %p\n", arr);			
	printf("arr 农扁 : %u\n", sizeof(arr));

	printf("arr[0] 林家 : %p\n", &arr[0]);	// arr狼 林家客 悼老
	printf("arr[1] 林家 : %p\n", &arr[1]);
	printf("arr + 1 林家 : %p\n", arr + 1);	// arr[1]狼 林家客 悼老

	printf("parr 林家 : %p\n", &parr);
	printf("parr 单捞磐 : %p\n", parr);		// arr狼 林家客 悼老
	printf("parr + 1 : %p\n", parr + 1);	// arr[1]狼 林家客 悼老
	printf("parr[] : %d, *pa : %d arr[0] : %d\n", parr[0], *parr, arr[0]);	// 葛电 蔼捞 鞍篮 蔼阑 啊府糯

	return 0;
}