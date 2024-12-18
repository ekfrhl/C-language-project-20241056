#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int number = 0;

	for (int i = 0; i < 10; i++) {
		number = rand();
		printf("number=%d\n", number);
		return 0;
	}


int main() {

	int number = 0;
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		number = rand();
		printf("number=%d\n", number);
		return 0;
	}
	return 0;
}
/////행렬곱셈레포트제출//////
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define COL 100
#define ROW 100

void input2Darray(int array[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array[i][j] = rand() % 100;
        }
    }
}

void print2Darray(int array[][100], int row, int col) {
    printf("====================\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("[%4d]", array[i][j]);
        }
        printf("\n");
    }
}

void addmatrix(int s1[][100], int s2[][100], int target[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            target[i][j] = s1[i][j] + s2[i][j];
        }
    }
}

void submatrix(int s1[][100], int s2[][100], int target[][100], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            target[i][j] = s1[i][j] - s2[i][j];
        }
    }
}

// multimatrix 함수 정의
void multimatrix(int s1[][100], int s2[][100], int target[][100], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            target[i][j] = 0; // 결과 행렬 초기화
            for (int k = 0; k < col1; k++) {
                target[i][j] += s1[i][k] * s2[k][j];
            }
        }
    }
}

int main() {
    int matrix[ROW][COL];
    int matrix2[ROW][COL];
    int result[ROW][COL];
    int row, col;
    int row2, col2;

    srand(time(NULL));

    // 첫 번째 행렬 입력
    printf("첫 번째 행렬의 행과 열 입력: ");
    scanf("%d %d", &row, &col);

    // 두 번째 행렬 입력
    printf("두 번째 행렬의 행과 열 입력: ");
    scanf("%d %d", &row2, &col2);

    // 행렬 곱 조건 확인
    if (col != row2) {
        printf("행렬 곱셈이 불가능합니다. (첫 번째 행렬의 열 개수 != 두 번째 행렬의 행 개수)\n");
        return 1;
    }

    // 행렬 초기화
    input2Darray(matrix, row, col);
    input2Darray(matrix2, row2, col2);

    // 행렬 출력
    printf("첫 번째 행렬:\n");
    print2Darray(matrix, row, col);

    printf("두 번째 행렬:\n");
    print2Darray(matrix2, row2, col2);

    // 행렬 곱 수행
    multimatrix(matrix, matrix2, result, row, col, col2);

    // 결과 출력
    printf("행렬 곱 결과:\n");
    print2Darray(result, row, col2);

    return 0;
}


int main() {

	int number[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		number[i] = rand();
		printf("number=%d\n", number[i]);
	}
	return 0;
}
int main() {

	int number[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		number[i] = (rand()%100)+1;
	}
		
	for (int i = 0; i < 10; i++) {
		printf("number=%d\n", number[i]);
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100 //define을 통한 노가다 방지
int main() {

	int number[SIZE];
	int total=0;
	float average=0.0;
	int max;
	int min;
	

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand()%100)+1;
	}
	
	for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", number[i]);
		if ((i + 1) % 5 == 0)printf("\n");
	}
	
	for (int i = 0; i < SIZE; i++) {
		total += number[i];
	}
	average = (float)total / SIZE;
	
	max = number[0];
	min = number[0];
	
	
	for (int i = 1; i < SIZE; i++) {
		if (max < number[i])
			max = number[i];
		else if (min > number[i])
			min = number[i];
	}
	
	printf("\naverage=%f\n", average);
	printf("max=%d\n",max);
	printf("min=%d\n", min);
	return 0;
} 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main() {

	int number[SIZE];
	int most;
	int temp;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand()%10000)+1;
	}
	
	for (int i = 0; i < SIZE-1; i++) {
		most = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (number[most] < number[j]) {
				most = j;
			}
			temp = number[i];
			number[i] = number[most];
			number[most]=temp;
		}
	}
	
	for (int i = 0; i < SIZE; i++) {
		printf("%5d\t", number[i]);
		if ((i + 1) % 5 == 0)printf("\n");
	}
	return 0;
}
/////////////////////////////////////////////////////////PROJECT01///////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define MAX 100

int main() {
    int numProducts;
    int ids[MAX];
    int stocks[MAX];
    int sales[MAX];
    int i, id, totalStock = 0;

    scanf_s("%d", &numProducts);

    if (numProducts < 1 || numProducts > 100) {
        printf("잘못된 상품 종류 수입니다.\n");
        return 1;
    }

 //입고할 수량
    for (i = 0; i < numProducts; i++) {
        scanf_s("%d", &stocks[i]); 
        ids[i] = i + 1;  
    }

    for (i = 0; i < numProducts; i++) {
        scanf_s("%d", &sales[i]);
        stocks[i] -= sales[i]; 
        if (stocks[i] < 0) 
            stocks[i] = 0;  
    }

    scanf_s("%d", &id);

    for (i = 0; i < numProducts; i++) {
        if (ids[i] == id) {
            printf("%d\n", stocks[i]);
        }
        totalStock += stocks[i];
    }

    for (i = 0; i < numProducts; i++) {
        printf("%d ", stocks[i]);
    }
    return 0;
}
/////////////////////////////////////////////////////////PROJECT02////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define MAX 100

int main() {
    int numProducts;
    int ids[MAX];        
    int stocks[MAX];     
    int sales[MAX];      
    int totalStock = 0, totalSales = 0;
    int i;
    double totalRate = 0.0;
    int maxSales = -1, minSales = MAX + 1;
    int maxSalesID = 0, minSalesID = 0;

    
    scanf_s("%d", &numProducts);

    
    for (i = 0; i < numProducts; i++) {
        scanf_s("%d", &stocks[i]);
        ids[i] = i + 1;  
        totalStock += stocks[i];  
    }


    for (i = 0; i < numProducts; i++) {
        scanf_s("%d", &sales[i]);
        totalSales += sales[i];  


        if (sales[i] > maxSales) {
            maxSales = sales[i];
            maxSalesID = ids[i];
        }
        if (sales[i] < minSales) {
            minSales = sales[i];
            minSalesID = ids[i];
        }


        stocks[i] -= sales[i];
    }

    
    printf("재고수량:");
    for (i = 0; i < numProducts; i++) {
        printf("%d", stocks[i]);
    }
    printf("\n");

    
    totalRate = ((double)totalSales / totalStock) * 100;
    printf("총 판매량: %d (판매율 %.2f%%)\n", totalSales, totalRate);

    
    printf("가장 많이 판매된 상품: ID %d, 판매량 %d\n", maxSalesID, maxSales);

    
    printf("가장 적게 판매된 상품: ID %d, 판매량 %d\n", minSalesID, minSales);

    
    for (i = 0; i < numProducts; i++) {
        if (stocks[i] <= 2) {
            printf("상품 ID %d: 재고부족(%d)\n", ids[i], stocks[i]);
        }
    }

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void test(int* p, char* cp) {
	printf(" test : p =%p, cp = %p\n", p, cp);
	printf(" test : *p =%p, *cp = %p\n", *p, *cp);
	* p = 60;
	*cp = '$';
}
int main(void) {

	int a = 50;
	char ch = '*';
	printf("main  : a =%d, ch = %d\n", a, ch);
	test(&a, &ch);
	printf("main  : a =%d, ch = %d\n", a, ch);
	return 0;
}
////////////3주차 3. 포인터와 배열의 관계(실습)(퀴즈, 과제)//////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void inputRandomarray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % 100;
	}
}



int main() {
	int number[SIZE];

	srand(time(NULL));
	inputRandomarray(&number[0], SIZE);

	for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", number[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}
	return 0;
}
//////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void inputRandomarray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % 100;
	}
}
void printArray(int* array, int size) {

	for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", *(array+i));
		if ((i + 1) % 10 == 0) printf("\n");
	}
}



int main() {
	int number[SIZE];

	srand(time(NULL));
	inputRandomarray(&number[0], SIZE);

	
	return 0;
}
/////////////////////////////////////////PROJECT03/////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM_PRODUCTS 5
int main() {
    int stock[NUM_PRODUCTS] = { 0 };  
    int sales[NUM_PRODUCTS] = { 0 }; 
    int incoming;  
    int sell;      
    int id, total_sales = 0;  
    int choice;   
    float sales_rate;

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 상품현황, 4. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("입고수량 입력: 전체 상품 입고수량 입력 1, 개별 상품 입력 2를 선택: ");
            int sub_choice;
            scanf("%d", &sub_choice);

            if (sub_choice == 1) {
               
                printf("입고 수량 (5개 상품): ");
                for (int i = 0; i < NUM_PRODUCTS; i++) {
                    scanf("%d", &incoming);
                    stock[i] += incoming;  
                }
            }
            else if (sub_choice == 2) {
                
                printf("상품 ID (0~4): ");
                scanf("%d", &id);
                printf("입고 수량: ");
                scanf("%d", &incoming);
                stock[id] += incoming;  
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
        }
        else if (choice == 2) {
            printf("판매수량 입력: 전체 상품 판매수량 입력 1, 개별 상품 입력 2를 선택: ");
            int sub_choice;
            scanf("%d", &sub_choice);

            if (sub_choice == 1) {
                
                printf("판매 수량 (5개 상품): ");
                for (int i = 0; i < NUM_PRODUCTS; i++) {
                    scanf("%d", &sell);
                    if (stock[i] >= sell) {
                        stock[i] -= sell; 
                        sales[i] += sell;  
                        total_sales += sell;  
                    }
                    else {
                        printf("상품 ID %d: 재고가 부족합니다.\n", i);
                    }
                }
            }
            else if (sub_choice == 2) {
                
                printf("상품 ID (0~4): ");
                scanf("%d", &id);
                printf("판매 수량: ");
                scanf("%d", &sell);
                if (stock[id] >= sell) {
                    stock[id] -= sell;  
                    sales[id] += sell;  
                    total_sales += sell;  
                }
                else {
                    printf("재고가 부족합니다.\n");
                }
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
        }
        else if (choice == 3) {
     
            printf("재고수량: ");
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                printf("%d ", stock[i]);
            }
            printf("\n총 판매량: %d\n", total_sales);
            sales_rate = (float)total_sales / (NUM_PRODUCTS * 5) * 100;  
            printf("판매율: %.2f%%\n", sales_rate);

          
            int max_sales = 0, min_sales = 10000, max_id = 0, min_id = 0;
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                if (sales[i] > max_sales) {
                    max_sales = sales[i];
                    max_id = i;
                }
                if (sales[i] < min_sales) {
                    min_sales = sales[i];
                    min_id = i;
                }
            }
            printf("가장 많이 판매된 상품: ID %d, 판매량 %d\n", max_id, max_sales);
            printf("가장 적게 판매된 상품: ID %d, 판매량 %d\n", min_id, min_sales);

            
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                if (stock[i] <= 2) {
                    printf("상품 ID %d: 재고부족(%d)\n", i, stock[i]);
                }
            }
        }
        else if (choice == 4) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다.\n");
        }
    }
    return 0;
}

///////////////////4주차 2. 문자열실습1(과제)////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char str1[5] = { 'a','b','c','d','\0'};
	char str2[5] = "abcd";
	char str3[5];

	printf("%s\n %s\n", str1, str2);
	scanf("%s", str3);
	printf("%s", str3);
	return 0;
}
int main() {

	char str1[5] = { 'a','b','c','d','\0' };
	char str2[5] = "abcd";

	printf("%s\n %s\n", str1, str2);



	return 0;
}
#include <stdio.h>

int main(void) {

	//char message[100] = "hello world\n";
	//20개의 공간에 hello world\n하고 나서 남은 뒷 공간에 자동으로 NULL문자가 들어가짐.
	//낭비가 되는 것이 싫으면 char message[]="hello world\m"하면 자동으로 사이즈에 맞게 배열의 크기를 만들어줌.
	//보통 다르게 쓰일 수 있기 때문에 [100]처럼 크기를 더 줘도 됨.
	//배열의 이름이 쓰이면 배열의  시작주소,,
	char message2[5] = { 'a','b','c','d','\0' };
	char message[5] = { 'a','b','c','\0' };
	
	printf("message= %s, message2= %s", message,message2);
	return 0;
}
///////////////////4주차 4. 문자열4(과제)////////////////////
#include <stdio.h>
	
int main() {

	int ch;
	char message[100];
	int i = 0;
	while ((ch = getchar()) != '\n')
		message[i++] = ch; 

	message[i] = '\0';
	printf("%s", message);
	return 0;
}
///////////////////////////////////////////////////////RPOJEECT04///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#define NUM_PRODUCTS 5

int main() {
    int stock[NUM_PRODUCTS] = { 0 };
    int sales[NUM_PRODUCTS] = { 0 };
    int incoming;
    int sell;
    int id, total_sales = 0;
    int choice;
    float sales_rate;
    char productName[NUM_PRODUCTS][50] = { "" };  // 상품명을 저장하는 배열

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 상품현황, 4. 상품명 입력, 5. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("입고수량 입력: 전체 상품 입고수량 입력 1, 개별 상품 입력 2를 선택: ");
            int sub_choice;
            scanf("%d", &sub_choice);

            if (sub_choice == 1) {
                printf("입고 수량 (5개 상품): ");
                for (int i = 0; i < NUM_PRODUCTS; i++) {
                    scanf("%d", &incoming);
                    stock[i] += incoming;
                }
            }
            else if (sub_choice == 2) {
                printf("상품 ID (0~4): ");
                scanf("%d", &id);
                printf("입고 수량: ");
                scanf("%d", &incoming);
                stock[id] += incoming;
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
        }
        else if (choice == 2) {
            printf("판매수량 입력: 전체 상품 판매수량 입력 1, 개별 상품 입력 2를 선택: ");
            int sub_choice;
            scanf("%d", &sub_choice);

            if (sub_choice == 1) {
                printf("판매 수량 (5개 상품): ");
                for (int i = 0; i < NUM_PRODUCTS; i++) {
                    scanf("%d", &sell);
                    if (stock[i] >= sell) {
                        stock[i] -= sell;
                        sales[i] += sell;
                        total_sales += sell;
                    }
                    else {
                        printf("상품 ID %d: 재고가 부족합니다.\n", i);
                    }
                }
            }
            else if (sub_choice == 2) {
                printf("상품 ID (0~4): ");
                scanf("%d", &id);
                printf("판매 수량: ");
                scanf("%d", &sell);
                if (stock[id] >= sell) {
                    stock[id] -= sell;
                    sales[id] += sell;
                    total_sales += sell;
                }
                else {
                    printf("재고가 부족합니다.\n");
                }
            }
            else {
                printf("잘못된 선택입니다.\n");
            }
        }
        else if (choice == 3) {
            printf("재고수량: ");
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                printf("%d ", stock[i]);
            }
            printf("\n총 판매량: %d", total_sales);
            sales_rate = (float)total_sales / (NUM_PRODUCTS * 5) * 100;
            printf(" 판매율: %.2f%%\n", sales_rate);

            int max_sales = 0, min_sales = 10000, max_id = 0, min_id = 0;
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                if (sales[i] > max_sales) {
                    max_sales = sales[i];
                    max_id = i;
                }
                if (sales[i] < min_sales) {
                    min_sales = sales[i];
                    min_id = i;
                }
            }
            printf("가장 많이 판매된 상품: ID %d, 상품명: %s, 판매량 %d\n", max_id, productName[max_id], max_sales);
            printf("가장 적게 판매된 상품: ID %d, 상품명: %s, 판매량 %d\n", min_id, productName[min_id], min_sales);

            for (int i = 0; i < NUM_PRODUCTS; i++) {
                if (stock[i] <= 2) {
                    printf("상품 ID %d 상품명: %s 재고부족(%d)\n", i, productName[i], stock[i]);
                }
            }
        }
        else if (choice == 4) {
            for (int i = 0; i < NUM_PRODUCTS; i++) {
                printf("ID %d 상품명: ", i + 1);
                scanf("%s", productName[i]);
            }
        }
        else if (choice == 5) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다.\n");
        }
    }
    return 0;
}

/////////////5주차 3 문자열 7(과제)//////////////////////
#include <stdio.h>

int main(void) {

	char input[200] = "";
	int count[26] = { 0 };
	int ch;
	int i = 0;

	while ((ch = getchar() != EOF)) {
		input[i++] = ch;
	}
	i = 0;
	while (input[i] != '\0'){
		if (input[i] >= 'a' && input[i] <= 'z') {
			count[input[i] - 'a']++;
		}
		i++;
	}
	printf("입력문자열: %s\n", input);
	for (int i = 0; i < 26; i++) 
		printf("%c 출현횟수: %d\n", 'a' + i, count[i]);
	return 0;
}
/////////////5주차 2. 문자열 6(과제)//////////////////////
#include <stdio.h>
#include <string.h>

int main(void) {

	char src[100];
	char dest[100];
	int length;
	char compare;
	gets(src);
	
	length = strlen(src);
	printf("src의 길이:%d\n", length);

	strcpy(dest, src);
	puts(dest);

	compare=strcmp(src, dest);
	printf("compare:%d\n", compare);
	
	strcat(dest, src);
	printf("src=%s, dest=%s",src, dest);
	return 0;
}

#include <stdio.h>
#include <string.h>
int main(void) {

	char src[100];
	char dest[100];
	int result;
	gets(src);
	gets(dest);

	result= strcmp(src, dest);

	printf("result=%d", result);

	return 0;
}
///////////////////////////////////////////////////////PROJEECT05///////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5

int main() {
    typedef struct {
        int id;
        char name[50];
        int price;
        int stock;
        int sales;
        int total_sales;
    } Product;

    Product products[MAX_PRODUCTS];
    int product_count = 0;
    int choice;

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체현황, 5. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (product_count >= MAX_PRODUCTS) {
                printf("상품 갯수를 초과했습니다.\n");
                continue;
            }

            int id, stock, price;
            char name[50];

            printf("상품 ID: ");
            scanf("%d", &id);
            
            // 상품 ID가 존재하는지 확인
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                // 새로운 상품 추가
                products[product_count].id = id;
                printf("상품명: ");
                scanf("%s", products[product_count].name);
                printf("입고량: ");
                scanf("%d", &stock);
                products[product_count].stock = stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[product_count].price = price;
                products[product_count].sales = 0;  // 판매량 초기화
                products[product_count].total_sales = 0;  // 총 판매금액 초기화
                product_count++;
            } else {
                // 기존 상품 업데이트
                printf("입고량: ");
                scanf("%d", &stock);
                products[found].stock += stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[found].price = price;
            }
        } else if (choice == 2) {
            int id, sell_amount;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("판매량: ");
            scanf("%d", &sell_amount);

            if (products[found].stock >= sell_amount) {
                products[found].stock -= sell_amount;
                products[found].sales += sell_amount;
                products[found].total_sales += sell_amount * products[found].price;
            } else {
                printf("재고가 부족합니다.\n");
            }
        } else if (choice == 3) {
            int id;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                   products[found].id, products[found].name, products[found].price,
                   products[found].stock, products[found].sales, products[found].total_sales);
        } else if (choice == 4) {
            int total_sales = 0, total_stock = 0;
            float sales_rate;

            for (int i = 0; i < product_count; i++) {
                total_sales += products[i].sales;
                total_stock += products[i].stock;
                printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                       products[i].id, products[i].name, products[i].price, products[i].stock,
                       products[i].sales, products[i].total_sales);
            }

            // 판매율 계산
            sales_rate = (total_sales + total_stock) > 0 ? (float)total_sales / (total_sales + total_stock) * 100 : 0;
            printf("총 판매량: %d, 총 재고량: %d, 판매율: %.2f%%\n", total_sales, total_stock, sales_rate);

            // 가장 많이 판매된 상품과 적게 판매된 상품
            int max_sales = 0, min_sales = 10000, max_id = -1, min_id = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].sales > max_sales) {
                    max_sales = products[i].sales;
                    max_id = i;
                }
                if (products[i].sales < min_sales) {
                    min_sales = products[i].sales;
                    min_id = i;
                }
            }

            if (max_id != -1 && min_id != -1) {
                printf("가장 많이 판매된 상품: %s (판매량: %d)\n", products[max_id].name, products[max_id].sales);
                printf("가장 적게 판매된 상품: %s (판매량: %d)\n", products[min_id].name, products[min_id].sales);
            }

            // 재고 부족 상품
            for (int i = 0; i < product_count; i++) {
                if (products[i].stock <= 2) {
                    printf("재고가 부족한 상품: %s (재고: %d)\n", products[i].name, products[i].stock);
                }
            }
        } else if (choice == 5) {
            printf("프로그램을 종료합니다.\n");
            break;
        } else {
            printf("잘못된 입력입니다.\n");
        }
    }

    return 0;
}

////////////6주차 2. 구조체2(퀴즈, 과제)//////////////////////
#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;

}; //구조체 선언
double  distance(struct point p1, struct point p2) {

	double space = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return space;
}

int main(void) {


	struct point p1 = { 0,0 };
	struct point p2 = { 0,0 };
	double result;

	printf("p1의 x, y의 좌표를 입력하시오.:");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("p2의 x, y의 좌표를 입력하시오.:");
	scanf_s("%d %d", &p2.x, &p2.y);
	
	printf("\n[입력완료] p1=(%d, %d)\n", p1.x, p1.y);
	printf("[입력완료] p2=(%d, %d)\n", p2.x, p2.y);

	result=distance(p1, p2); // distance함수에서 반환된 space값이 이 자리에 들어감 double형으로 
	
	printf("[p1 p2] 두 점 사이의 거리는 %lf입니다.",result);

	return 0;
}
////////////6주차 3. 구조체3(퀴즈, 과제)//////////////////////
#include <stdio.h>
typedef int INT32;
int main() {
	int i = 10;
	INT32 j = 10;
	printf("%d %d", i, j);

	return 0;
}

#include <stdio.h>
#include <math.h>
//구조체 재정의 버전
typedef struct point {
	int x;
	int y;

}POINT; // 구조체 재정의 (간편화 목적인듯)
double  distance(POINT p1, POINT p2) {

	double space = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	return space;
}

int main(void) {


	POINT p1 = { 0,0 };
	POINT p2 = { 0,0 };
	double result;

	printf("p1의 x, y의 좌표를 입력하시오.:");
	scanf_s("%d %d", &p1.x, &p1.y);

	printf("p2의 x, y의 좌표를 입력하시오.:");
	scanf_s("%d %d", &p2.x, &p2.y);
	
	printf("\n[입력완료] p1=(%d, %d)\n", p1.x, p1.y);
	printf("[입력완료] p2=(%d, %d)\n", p2.x, p2.y);

	result=distance(p1, p2); // distance함수에서 반환된 space값이 이 자리에 들어감 double형으로 
	
	printf("[p1 p2] 두 점 사이의 거리는 %lf입니다.",result);

	return 0;
}
////////////6주차 4. 구조체4(퀴즈, 과제)//////////////////////
#include <stdio.h>
#include <math.h>

typedef struct point{
	int x;
	int y;
} POINT;
typedef struct circle {
	POINT center; //원 중심 좌표값(x,y) **구조체 안에 구조체를 사용한 구조**
	double radius; //원 반지름 좌표값(x,y)
}CIRCLE;
typedef struct ractangle {
	POINT lb;
	POINT rt;
}RECT;


double dist(POINT p1, POINT p2) {
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y,2));
}


int main(void) {

	CIRCLE c1 = { {10,10},4.5};
	CIRCLE c2;
	c2.radius = 5.5;
	c2.center.x = 10;
	c2.center.y = 20;
	POINT point = { 10,15 }; //변수 point는 타입재정의POINT에 의해 변수 두개를 가진 변수가 되는거임 구조체를 말그대로 뼈대로 보면 됨.(와플기계 틀)
							 //와플기계point를 생성하고 그 안에 있는 x자리에 10, y자리에 15를 넣은 거임.
	double distance;
	printf("CIRCLE1: center=(%d,%d)\tradius=%.2lf\n", c1.center.x, c1.center.y, c1.radius);
	printf("CIRCLE2: center=(%d,%d)\tradius=%.2lf\n", c2.center.x, c2.center.y, c2.radius);
	printf("point=(%d, %d)\n",point.x,point.y);
	distance = dist(c1.center, point);
	if (distance > c1.radius) {
		printf("점이 원(1) 밖에 있습니다.");
	}
	else
		printf("점이 원(1) 안에 있습니다.");
	printf("\n");
	if (distance <= c2.radius)
		printf("점이 원(2) 안에 있습니다.");
	else
		printf("점이 원(2) 밖에 있습니다.");

	return 0;
}
////////////7주차 1. 구조체 5(퀴즈, 과제)//////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

typedef struct point {
	int x;
	int y;
}POINT;

int main() {

	POINT point[SIZE] = { 0 };
	POINT temp = { 0,0 };
	int least;

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		point[i].x = rand() % 101;
		point[i].y = rand() % 101;
	}
	for (int j = 0; j < SIZE; j++) {
		printf("point[%3d]:(%3d, %3d)\n", j, point[j].x, point[j].y);
	}
	//x값을 기준으로 정렬, x값이 같으면 y값을 정렬(오름차순)
	for (int i = 0; i < SIZE-1; i++) {
		least =i;
		for (int j = i+1; j < SIZE; j++) {
			if (point[least].x > point[j].x)
				least = j;
			else if (point[least].x == point[j].x && point[least].y > point[j].y)
				least = j;
		}
		temp = point[least];
		point[least] = point[i];
		point[i] = temp;
	}
	printf("after sorting>>>>>>>>>>>>>>>>>>>\n");
	for (int j = 0; j <SIZE; j++) {
		printf("point[%3d]:(%3d, %3d)\n", j, point[j].x, point[j].y);
	}

	return 0;
}
////////////7주차 2. 구조체 6(퀴즈, 과제)//////////////////////
#include <stdio.h>
typedef struct point {
	int x;
	int y;
}POINT;
int main(void){
	struct point p1 = { 10,10 };

	POINT p2 = { 20,20 };
	POINT* p3=&p2;
	printf("p1.x=%d, p1.y=%d\n",p1.x, p1.y);
	printf("p2.x=%d, p2.y=%d\n",p2.x, p2.y);
	printf("p1->x=%d, p1->y=%d\n",p3->x, p3->y);
	
	p3 = &p1;
	printf("p3->x=%d, p3->y=%d\n",(*p3).x,(*p3).y);
}
////////////7주차 3. 구조체 8(퀴즈, 과제)//////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

typedef struct point {
	int x;
	int y;
}POINT;

void input_random_point(POINT* p,int  size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		(p + i)->x = rand() % 101;
		(p + i)->y = rand() % 101;
	}
}

void swap_point(POINT* p1, POINT* p2) {
	POINT temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void print_point_array(POINT p[], int size) {
	for (int i = 0; i < size; i++) {
		printf("p[%3d]:(%3d, %3d)\n", i, p[i].x, p[i].y);
	}
}

void selection_sort_point(POINT* point, int size) {
	int least;
	for (int i = 0; i < SIZE - 1; i++) {
		least = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (point[least].x > point[j].x)
				least = j;
			else if (point[least].x == point[j].x && point[least].y > point[j].y)
				least = j;
		}
		swap_point(&point[i], point + least);
	}
}
int main() {

	POINT point[SIZE] = { 0 };
	POINT temp = { 0,0 };
	int least;

	input_random_point(point, SIZE);
	print_point_array(point, SIZE);
	//x값을 기준으로f 정렬, x값이 같으면 y값을 정렬(오름차순)
	selection_sort_point(point, SIZE);
	printf("after sorting>>>>>>>>>>>>>>>>>>>\n");
	print_point_array(point, SIZE);
	return 0;
} 
////////////9주차 소스코드 업로드//////////////////////
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int getline(char* line) {
	
	int ch;
	int i = 0;
	char input[100];
	while ((ch = getchar()) != '\n')
		input[i++] = ch;
	line[i] = '\0';
	return i;
}

int main() {

	char input[100];
	FILE* fp;

	if ((fp = fopen("output.txt", "w")) == NULL){
		printf("error");
		return 0;
	}
	for (int i = 0; i < 5; i++) {
		getline(input);
		fputs(input, fp);
	}
	
	fclose(fp);

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int getline(char* line) {
	
	int ch;
	int i = 0;
	char input[100];
	while ((ch = getchar()) != '\n')
		input[i++] = ch;
	line[i] = '\0';
	return i;
}

int main() {

	char input[100];
	FILE* fp_src;
	FILE* fp_dest;

	if ((fp_src = fopen("output.txt", "r")) == NULL){
		printf("error");
		return 0;
	}
	if ((fp_dest = fopen("output2.txt", "w")) == NULL) {
		printf("error");
		return 0;
	}

	while (!feof(fp_src)) {
		fgets(input, 100, fp_src);
		fputs(input, fp_dest);
		puts(input);
	}

	fclose(fp_src);
	fclose(fp_dest);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getline(char* line) {
	
	int ch;
	int i = 0;
	char input[100];
	while ((ch = getchar()) != '\n')
		input[i++] = ch;
	line[i] = '\0';
	return i;
}

int main() {

	char input[100];
	int num1, num2;
	FILE* fp_src;
	FILE* fp_dest;

	if ((fp_src = fopen("output.txt", "r")) == NULL){
		printf("error");
		return 0;
	}
	if ((fp_dest = fopen("output3.txt", "w")) == NULL) {
		printf("error");
		return 0;
	}

	while (!feof(fp_src)) {
		fscanf(fp_src,"%s %d %d\n",input, &num1, &num2);
		fprintf(fp_dest, "%s %d %d\n",input, num1, num2);
	}

	fclose(fp_src);
	fclose(fp_dest);
	return 0;
}
///////////////////////////////////////////////////////PROJECT06///////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5

int main() {
    typedef struct {
        int id;
        char name[50];
        int price;
        int stock;
        int sales;
        int total_sales;
    } Product;

    Product products[MAX_PRODUCTS];
    int product_count = 0;
    int choice;

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체현황, 5. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (product_count >= MAX_PRODUCTS) {
                printf("상품 갯수를 초과했습니다.\n");
                continue;
            }

            int id, stock, price;
            char name[50];

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID가 존재하는지 확인
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                // 새로운 상품 추가
                products[product_count].id = id;
                printf("상품명: ");
                scanf("%s", products[product_count].name);
                printf("입고량: ");
                scanf("%d", &stock);
                products[product_count].stock = stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[product_count].price = price;
                products[product_count].sales = 0;  // 판매량 초기화
                products[product_count].total_sales = 0;  // 총 판매금액 초기화
                product_count++;
            }
            else {
                // 기존 상품 업데이트
                printf("입고량: ");
                scanf("%d", &stock);
                products[found].stock += stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[found].price = price;
            }
        }
        else if (choice == 2) {
            int id, sell_amount;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("판매량: ");
            scanf("%d", &sell_amount);

            if (products[found].stock >= sell_amount) {
                products[found].stock -= sell_amount;
                products[found].sales += sell_amount;
                products[found].total_sales += sell_amount * products[found].price;
            }
            else {
                printf("재고가 부족합니다.\n");
            }
        }
        else if (choice == 3) {
            int id;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                products[found].id, products[found].name, products[found].price,
                products[found].stock, products[found].sales, products[found].total_sales);
        }
        else if (choice == 4) {
            int total_sales = 0, total_stock = 0;
            float sales_rate;

            for (int i = 0; i < product_count; i++) {
                total_sales += products[i].sales;
                total_stock += products[i].stock;
                printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                    products[i].id, products[i].name, products[i].price, products[i].stock,
                    products[i].sales, products[i].total_sales);
            }

            // 판매율 계산
            sales_rate = (total_sales + total_stock) > 0 ? (float)total_sales / (total_sales + total_stock) * 100 : 0;
            printf("총 판매량: %d, 총 재고량: %d, 판매율: %.2f%%\n", total_sales, total_stock, sales_rate);

            FILE* file = fopen("sales_rate.txt", "w");
            if (file) {
                fprintf(file, "판매율: %.2f%%\n", sales_rate);
                fclose(file);
            }
            else {
                printf("파일 저장에 실패했습니다.\n");
            }



            // 가장 많이 판매된 상품과 적게 판매된 상품
            int max_sales = 0, min_sales = 10000, max_id = -1, min_id = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].sales > max_sales) {
                    max_sales = products[i].sales;
                    max_id = i;
                }
                if (products[i].sales < min_sales) {
                    min_sales = products[i].sales;
                    min_id = i;
                }
            }

            if (max_id != -1 && min_id != -1) {
                printf("가장 많이 판매된 상품: %s (판매량: %d)\n", products[max_id].name, products[max_id].sales);
                printf("가장 적게 판매된 상품: %s (판매량: %d)\n", products[min_id].name, products[min_id].sales);
            }

            // 재고 부족 상품
            for (int i = 0; i < product_count; i++) {
                if (products[i].stock <= 2) {
                    printf("재고가 부족한 상품: %s (재고: %d)\n", products[i].name, products[i].stock);
                }
            }
        }
        else if (choice == 5) {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else {
            printf("잘못된 입력입니다.\n");
        }
    }

    return 0;
}

////////////10주차 소스코드 업로드//////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main() {

	char input[SIZE];
	FILE* fp = NULL;

	if ((fp = fopen("output.bin", "wb")) == NULL) {
		printf("error");
		return 0;
	}
	gets(input);
	fwrite(input,strlen(input), 1, fp);

	fclose(fp);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
int main() {

	char input[SIZE];
	FILE* fp = NULL;
	int i = 0;

	if ((fp = fopen("output.bin", "rb")) == NULL) {
		printf("error");
		return 0;
	}
	while (!feof(fp)) {
		fread(&input[i], sizeof(char), 1, fp);
		i++;
	}
	input[--i] = '\0';
	puts(input);

	fclose(fp);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int array[100];
    FILE* fp;
    int i = 0;
    fp = fopen("array.bin", "rb");
    if (fp == NULL) return -1;

    while(fread(&array[i++], sizeof(int), 1, fp));



    i--;
    for (int j = 0; j < i++; j++) printf("%d ", array[j]);
    fclose(fp);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct point {
	int x;
	int y;
}POINT;

POINT makePoint(void) {
	POINT p;
	scanf_s("%d %d", &p.x, &p.y);
	return p;
}
void makeRandomPoints(POINT p[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		p[i].x = rand() % 100;
		p[i].y = rand() % 100;
	}
}
void printPoints(POINT p[], int size) {
	for (int i = 0; i < size; i++)
		printf("point[%d]=x:%d,y:%d\n", i, p[i].x, p[i].y);
}
void saveFile(POINT p[], int size) {
	FILE* fp;
	fp = open("struct.bin", "wb");
	if (fp == NULL) exit(-1);
	fwrite(p, sizeof(POINT),size,fp);
	fclose(fp);
}
void loadFile(POINT p[], int size) {
	FILE* fp;
	fp = open("struct.bin", "rb");
	if (fp == NULL) exit(-1);
	fread(p, sizeof(POINT), size, fp);
	fclose(fp);
}

int main() { 
	POINT p[10];
	makeRandomPoints(p, 10);
	loadFile(p, 10);
	printPoints(p, 10);
	saveFile(p, 10);
	return 0;
} 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct point {
	int x;
	int y;
}POINT;

POINT makePoint(void) {
	POINT p;
	scanf_s("%d %d", &p.x, &p.y);
	return p;
}
void makeRandomPoints(POINT p[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		p[i].x = rand() % 100;
		p[i].y = rand() % 100;
	}
}
void printPoints(POINT p[], int size) {
	for (int i = 0; i < size; i++)
		printf("point[%d]=x:%d,y:%d\n", i, p[i].x, p[i].y);
}
void saveFile(POINT p[], int size) {
	FILE* fp;
	fp = fopen("struct.bin", "wb");
	if (fp == NULL) exit(-1);
	fwrite(p, sizeof(POINT), size, fp);
	fclose(fp);
}
void loadFile(POINT p[], int size) {
	FILE* fp;
	fp = fopen("struct.bin", "rb");
	if (fp == NULL) exit(-1);
	fread(p, sizeof(POINT), size, fp);
	fclose(fp);
}

int main() {
	FILE* fp;
	POINT p[10];
	POINT p2;
	int pi;
	loadFile(p, 10);
	printPoints(p, 10);
	
	fp = fopen("struct.bin", "rb");
	if (fp == NULL)exit(-1);
	fseek(fp, sizeof(POINT) * 3, SEEK_SET);
	pi = ftell(fp);
	printf("pi=%d\n", pi);
	fread(&p2, sizeof(POINT), 1, fp);
	printf("p2 -> x:%d, y:%d\n", p2.x, p2.y);
	fseek(fp,sizeof(POINT)* -2, SEEK_END);
	printf("pi=%d\n", ftell(fp));
	fread(&p2, sizeof(POINT), 1, fp);
	printf("p2 -> x:%d, y:%d\n", p2.x, p2.y);
	fseek(fp, 0, SEEK_END);
	printf("size=%ld\n", ftell(fp));
	fclose(fp);
	return 0;
}
////////////11주차 소스코드 업로드//////////////////////
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char* pChar;
	int* pInt;
	int count;

	scanf_s("%d", &count);
	pInt = (int*)malloc(count * sizeof(int));

	for (int i = 0; i < count; i++)
		pInt[i] = rand() % 100;

	for (int i = 0; i < count; i++)
		printf("%d ", pInt[i]);
	
	while (getchar() != '\n');
	pChar = (char*)pInt;
	gets(pChar);
	puts(pChar);

	free(pInt);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int inputMenu(void) {
	int input;
	printf("메뉴 입력(1. 구조체 만들기 2.구조체 출력하기 -1. 종료 : ");
	scanf_s("%d", &input);
	return input;
}
typedef struct point {
	int x;
	int y;
}POINT;

POINT* make_point(void) {
	POINT* p = (POINT*)malloc(sizeof(POINT));
	p->x = rand() % 100;
	p->y = rand() % 100;
	return p;
}
void print_point(POINT* p[],int size) {

	for (int i = 0; i < size; i++) {
		printf("x:%d, y:%d\n", p[i]->x, p[i]->y);
	}	
}
void free_points(POINT* p[], int size) {
	for (int i = 0; i < size; i++) {
		free(p[i]);
	}
}
int main() {

	int menu;
	int count=0;
	POINT* points[100];
	do {
		menu = inputMenu();
		if (menu == 1) {
			points[count]=make_point();
			count++;
			printf("만들었습니다.\n");
		}

		else if (menu == 2) {
			print_point(points, count);
		}
		else if (menu == -1) {
			free_points(points, count);
			printf("프로그램을 종료합니다.\n");
			
		}
	
	} while (menu > 0);
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int inputMenu(void) {
	int input;
	
	printf("1. 만들기 2. 출려갛기. 3 클리어 4. 파일저장 5. 파일로드 -1. 종료\n");
	scanf_s("%d", &input);
	return input;
}
typedef struct point {
	int x;
	int y;
}POINT;

POINT* make_point(void) {
	POINT* p = (POINT*)malloc(sizeof(POINT));
	p->x = rand() % 100;
	p->y = rand() % 100;
	return p;
}
void print_point(POINT* p[],int size) {

	for (int i = 0; i < size; i++) {
		printf("x:%d, y:%d\n", p[i]->x, p[i]->y);
	}	
}
void free_points(POINT* p[], int size) {
	for (int i = 0; i < size; i++) {
		free(p[i]);
	}
}
int saveFile(POINT* p[], int count) {
	FILE* fp;
	fp = fopen("points.bin", "ab");
	if (fp == NULL) return 0;
	for (int i = 0; i < count; i++) 
		fwrite(p[i], sizeof(POINT), 1, fp);
	fclose(fp);
	return 1;
}
int loadFile(POINT* p[], int max) {
	FILE* fp;
	int fSize, fCount;
	fp = fopen("points.bin", "rb");
	if (fp == NULL) return 0;
	fseek(fp, 0, SEEK_END);
	fSize=ftell(fp);
	fCount=fSize / sizeof(POINT);
	rewind(fp);
	for (int i = 0; i < fCount; i++) {
		if (i == max) break;
		p[i] = (POINT*)malloc(sizeof(POINT));
		fread(p[i], sizeof(POINT), 1, fp);
	}
	fclose(fp);
	return fCount;
}
int main() {

	int menu;
	int count=0;
	POINT* points[100];
	do {
		menu = inputMenu();
		switch (menu){
		case 1:
			points[count] = make_point();
			count++;
			break;
		case 2:
			print_point(points, count);
			break;
		case 3:
			system("cls");
			break;
		case 4: //file save
			if (!saveFile(points, count)) {
				printf("file open error....\n");
			}
			else printf("file writing success..\n");
			break;
		case 5: //load file
			count=loadFile(points, 100);
			break;
		case -1:
			free_points(points, count);
			printf("프로그램을 종료합니다.\n");
			break;
		}
	} while (menu > 0);
	
	return 0;
}
//////////PROJECT07//////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 5

int main() {
    typedef struct {
        int id;
        char name[50];
        int price;
        int stock;
        int sales;
        int total_sales;
    } Product;

    Product products[MAX_PRODUCTS];
    int product_count = 0;
    int choice;

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체현황, 5. 상품정보저장, 6. 상품정보가져오기, 7. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (product_count >= MAX_PRODUCTS) {
                printf("상품 갯수를 초과했습니다.\n");
                continue;
            }

            int id, stock, price;
            char name[50];

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID가 존재하는지 확인
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                // 새로운 상품 추가
                products[product_count].id = id;
                printf("상품명: ");
                scanf("%s", products[product_count].name);
                printf("입고량: ");
                scanf("%d", &stock);
                products[product_count].stock = stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[product_count].price = price;
                products[product_count].sales = 0;  // 판매량 초기화
                products[product_count].total_sales = 0;  // 총 판매금액 초기화
                product_count++;
            } else {
                // 기존 상품 업데이트
                printf("입고량: ");
                scanf("%d", &stock);
                products[found].stock += stock;
                printf("판매가격: ");
                scanf("%d", &price);
                products[found].price = price;
            }
        } else if (choice == 2) {
            int id, sell_amount;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("판매량: ");
            scanf("%d", &sell_amount);

            if (products[found].stock >= sell_amount) {
                products[found].stock -= sell_amount;
                products[found].sales += sell_amount;
                products[found].total_sales += sell_amount * products[found].price;
            } else {
                printf("재고가 부족합니다.\n");
            }
        } else if (choice == 3) {
            int id;

            printf("상품 ID: ");
            scanf("%d", &id);

            // 상품 ID 찾기
            int found = -1;
            for (int i = 0; i < product_count; i++) {
                if (products[i].id == id) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("해당 상품이 없습니다.\n");
                continue;
            }

            printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                   products[found].id, products[found].name, products[found].price,
                   products[found].stock, products[found].sales, products[found].total_sales);
        } else if (choice == 4) {
            int total_sales = 0, total_stock = 0;
            float sales_rate;

            for (int i = 0; i < product_count; i++) {
                total_sales += products[i].sales;
                total_stock += products[i].stock;
                printf("ID: %d, 이름: %s, 가격: %d, 재고: %d, 판매량: %d, 총 판매금액: %d\n",
                       products[i].id, products[i].name, products[i].price, products[i].stock,
                       products[i].sales, products[i].total_sales);
            }

            sales_rate = (total_sales + total_stock) > 0 ? (float) total_sales / (total_sales + total_stock) * 100 : 0;
            printf("총 판매량: %d, 총 재고량: %d, 판매율: %.2f%%\n", total_sales, total_stock, sales_rate);

            FILE *file = fopen("sales_rate.txt", "w");
            if (file) {
                fprintf(file, "판매율: %.2f%%\n", sales_rate);
                fclose(file);
            } else {
                printf("파일 저장에 실패했습니다.\n");
            }
        } else if (choice == 5) {
            // 상품정보 저장
            FILE *file = fopen("products.dat", "wb");
            if (file == NULL) {
                printf("파일 저장에 실패했습니다.\n");
                continue;
            }

            fwrite(&product_count, sizeof(int), 1, file);
            fwrite(products, sizeof(Product), product_count, file);
            fclose(file);

            printf("상품 정보가 저장되었습니다.\n");
        } else if (choice == 6) {
            // 상품정보 가져오기
            FILE *file = fopen("products.dat", "rb");
            if (file == NULL) {
                printf("파일 열기에 실패했습니다.\n");
                continue;
            }

            fread(&product_count, sizeof(int), 1, file);
            fread(products, sizeof(Product), product_count, file);
            fclose(file);

            printf("상품 정보를 가져왔습니다.\n");
        } else if (choice == 7) {
            printf("프로그램을 종료합니다.\n");
            break;
        } else {
            printf("잘못된 입력입니다.\n");
        }
    }

    return 0;
}
/////마지막프로젝트//
#include <stdio.h>
#include <string.h>
#include <math.h>
#define WORD 16


void get_binary(char bin[], char str[], int n) {
    int len = strlen(str);
    int start = n - len;

    for (int i = 0; i < n; i++) {
        if (i < start) {
            bin[i] = '0'; 
        }
        else {
            bin[i] = str[i - start]; 
        }
    }
    bin[n] = '\0'; 
}


void complement(char bin[], int n) {
    int i;
    int flip = 0;

    
    for (i = 0; i < n; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }

   
    for (i = n - 1; i >= 0; i--) {
        if (bin[i] == '1' && flip == 0) {
            bin[i] = '0';
        }
        else if (bin[i] == '0' && flip == 0) {
            bin[i] = '1';
            flip = 1;
            break;
        }
    }

    if (flip == 0) {
       
        bin[0] = '1';
    }
}


int bin2dec(char bin[], int n) {
    int result = 0;
    int is_negative = (bin[0] == '1'); 

    if (is_negative) {
        complement(bin, n); 
    }

    for (int i = 0; i < n; i++) {
        if (bin[i] == '1') {
            result += (1 << (n - i - 1)); 
        }
    }

    if (is_negative) {
        result = -result; 
    }

    return result;
}

int main() {
    char input1[100];
    char input2[100];
    char op[10];

    char binary1[WORD + 1] = { 0 };
    char binary2[WORD + 1] = { 0 };

    int result;
    int num1, num2;

    printf("<<<<<<input>>>>>>\n");

    gets(input1);
    gets(op);
    gets(input2);

    get_binary(binary1, input1, WORD);
    get_binary(binary2, input2, WORD);

    num1 = bin2dec(binary1, WORD);
    num2 = bin2dec(binary2, WORD);

    switch (op[0]) {
    case '+': result = num1 + num2;
        break;
    case '-': result = num1 - num2;
        break;
    case '*': result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            printf("Error: Division by zero\n");
            return 1;
        }
        result = num1 / num2;
        break;
    case '%':
        if (num2 == 0) {
            printf("Error: Division by zero\n");
            return 1;
        }
        result = num1 % num2;
        break;
    default:
        printf("bad operator..\n");
        return 1;
    }

    printf("%s(%d) %c  %s(%d) = %d\n", binary1, num1, op[0], binary2, num2, result);
    return 0;
}




