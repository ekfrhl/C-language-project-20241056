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
/////
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
////
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
/////project05미완 10/10///////////









#include <stdio.h>
#define NUM_PRODUCTS 5

struct all_product
{
    int stock[NUM_PRODUCTS]; //재고
    int sales[NUM_PRODUCTS]; //총 판매량
    int sell[NUM_PRODUCTS]; // 팔린 개수
    int 
}











int main() {
    int stock[NUM_PRODUCTS] = { 0 };
    int sales[NUM_PRODUCTS] = { 0 };
    int incoming;//새로들어오는
    int sell;
    int id, total_sales = 0;
    int choice;
    float sales_rate;
    char productName[NUM_PRODUCTS][50] = { "" };  // 상품명을 저장하는 배열

    while (1) {
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 개별현황, 4. 전체현황, 5. 종료): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("상품ID:");
            scanf("%d",&id);
            
        
                printf("입고 수량 (5개 상품): ");
                for (int i = 0; i < NUM_PRODUCTS; i++) {
                    scanf("%d", &incoming);
                    stock[i] += incoming;
                }
            }
    
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
                for (int i = 0; i < NUM_PRODUCTS; i++) { //5번반복
                    scanf("%d", &sell);
                    if (stock[i] >= sell) { //0번째 재고가 팔린개수보다 크거나 같으면 실행
                        stock[i] -= sell; //
                        sales[i] += sell; //판매개수를 총판매량에 더함
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
           
          printf("개별상품 ID입력:");
          scanf("%d",&id)
           
           
           
           
           
           
           
           
           
           
           
           
        }
        else if (choice == 4) {
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



