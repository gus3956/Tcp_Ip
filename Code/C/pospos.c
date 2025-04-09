#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <unistd.h> 
#include <time.h> 
				  
typedef struct { // 로그인 정보

	char id_pos[20]; // pos  아이디
	char passward_pos[20]; // pos 비밀번호
    
}Login;

typedef struct { // 물건 종류

	char thing[20]; //제품명
	char comm[20]; // 제조회사명
	int exdata; // 유통기한
    char night; // 19금 제품인가요
	int price; // 가격
    int number; // 갯수
} Productdate;


Login Loginout(); // 로그인
int Personal(Login log); // 로그인 개인정보
void Productin();	// 제품	입고 메뉴
void Productlist(); // 제품 확인 메뉴
void Productadd(); // 제품 입력 메뉴
void Productbuy(); //제품 계산 메뉴
void end(); // 종료 메뉴
void menu(); // pos  메뉴
int datacut(int); // 유통기한 년월일 계산
int nineteen(); // 만19세 판별기
int nineteencheck(int); // 물건 갯수 
int pricesum = 1234000; // 초기 잔액
Productdate product[100] = {'\0' ,}; // 물건 종류
time_t start; // 시간 계산 시작
int count = 0;




int main(){
	system("clear");
while(1){	

Login log = Loginout(); // 로그인

if(!Personal(log))	// 로그인 후 아이디 비번 점검 후 사원 조회
{
	system("clear");
	continue;
}
menu();
return 0;
}

}

Login Loginout(){ // 로그인

Login log;

printf("*******로그인*******\r\n");
printf("아이디 : ");
scanf("%s", log.id_pos); //아이디


printf("비밀번호 : ");
scanf("%s", log.passward_pos); //비밀번호

return log;
}

int Personal(Login log){ // 개인정보 조회
						  
char cho = '\0';

if (strcmp( log.id_pos,"gus") == 0 && strcmp( log.passward_pos, "gus") == 0) // 로그인 정보 확인
{
	start = time(NULL); // 시간 체크
	printf("KarL 사원이 맞습니까? (Y/N) : "); // 개인정보가 맞는지 확인
	getchar();
    scanf(" %c" , &cho); 
	if( cho == 'Y' )  // 맞으면 개인정보 출력
	{
	printf("사원: KarL  ");
	
    printf("나이: ** \r\n");
    sleep(2);
	return 1;
	
	}
	
	else if(cho == 'N') // 틀리면 다시 로그인
	{
	printf("다시 로그인 하십시오.\r\n");
	sleep(2);

    return 0;
}
	
}	

else // 로그인 후 아무런 정보가 없다면 다시 처음으로 
{
	printf("당신은 누구입니까?\r\n");
	 printf("다시 로그인 하십시오\r\n");
	 sleep(2);
     return 0;
 }

}

void Productin(){ // 제품 입력 메뉴

while(1){
int found = 0;
int exdata = 0;

printf("============== 제품 메뉴 구성 ==============\r\n");
printf("              종료할 경우 나가기             \r\n");
printf("1. 제품명 입력: ");
scanf("%s", product[count].thing);
if(strcmp(product[count].thing,"나가기") == 0)
	break;
printf("2. 제조회사입력: ");
scanf("%s", product[count].comm);
printf("3. 유통기한입력(ex: 20200824): ");
scanf("%d", &exdata);

if(!datacut(exdata))
{
	continue;
   }	// 년,월,일로 나눠서 검사해보기
	
else {
   	product[count].exdata = exdata;
}


printf("4. 19금물품유무( Y / N ): ");
getchar();
scanf(" %c", &product[count].night);
printf("5. 가격: ");
scanf("%d", &product[count].price);
printf("6. 개수: "); 
scanf("%d", &product[count].number);

if(product[count].number < 10) //개수는 최소 10개 이상
{
	printf("최소 10개 이상 입력하시오\r\n");
	sleep(2);
    continue;
}


for(int i = 0; i < count; i++){
if((strcmp(product[count].thing,product[i].thing ) == 0)) // 같은 이름 제품이면 회사를 붙여서 쓸것
{
printf("같은 이름 제품입니다. ex: 우유(서울) 로 적어주십시오.\r\n");
printf("유통기한만 다르다면 ex: 우유(20000824)로 적어주십시오.\r\n");
sleep(2);
found = 1;
}

if(found)
{ 
	system("clear");
	continue;
}
}
count++;

} //while(1)
return;
}


void Productlist(){  //제품 확인하기 메뉴
char go ='\0';					 
for( int i = 0; i < count; i++){ 

printf("%s(회사: %s, 유통기한: %d ) : ", product[i].thing, product[i].comm, product[i].exdata);
for(int j = 0; j < product[i].number; j++) // 제품 갯수 만큼 * 표시
{
	printf("*");
}
printf(" (%d개)\r\n", product[i].number); //제품 갯수
}

printf("메뉴로 돌아가시겠습니까? ( Y / N ) :  ");
scanf(" %c", &go);

if( go == 'Y')
return;

else if ( go == 'N'){
	system("clear");
Productlist();
}

}
void Productsearch(){ // 제품 찾기 메뉴
						
char search[20] ={'\0', };
char go = '\0';

if( count == 0){ // 등록된 제품이 하나도 없다면 돌아가
	printf("등록된 제품이 없습니다");
	sleep(1);
	return;
}
for( int i = 0; i < count; i++){ // 등록된 제품 출력
printf("%d: %s\r\n", i+1,  product[i].thing);
}

printf("찾는 제품이 뭡니까? : ");
scanf("%s", search);

for(int i = 0; i < count; i++)
{

if( strcmp(search,product[i].thing) == 0){ // 등록된 물건이 찾는 물건과 글자 동일한지 체크

	printf("찾는 물건 여기 있습니다\r\n");
    printf("%s (회사: %s, 유통기한: %d)\r\n", product[i].thing, product[i].comm, product[i].exdata);
}

}

printf("더 찾겠습니까? : ");
getchar();
scanf("%c", &go);
 
if( go == 'Y') // 있으면 다시 
{
system("clear");
Productsearch();
}

else{ // 없으면 메뉴
return;
}

}

void Productadd(){ // 제품 입고 메뉴
char go = '\0';
char go1 = '\0';
int num = 0;
int num1 = 0;
printf("=========제품 입고 메뉴==========\r\n");
printf(" 어떤 제품을 입고 하셨습니까? \r\n");

for( int i = 0; i < count; i++){ // 등록된 제품 출력
printf("%d: %s\r\n", i+1,  product[i].thing);
}

printf("===============================\r\n");
printf(" 목록에 없으면 0 \r\n ");
printf("==============================\r\n");
printf("들어온 제품 (번호로) : ");
getchar();
scanf("%d", &num);


if ( num > 0 ) // 제품이 있다면 추가
{
printf("제품명: %s , 개수: %d개\r\n" , product[num-1].thing, product[num-1].number);


printf("몇 개 입고 하셨습니까?:  ");
getchar();
scanf("%d" , &num1);
product[num-1].number += num1; // num1만큼 추가
printf("%d 개 만큼 추가 완료!\r\n", num1);
}


else if ( num == 0 ) // 없다면 입력 메뉴로 이동
{
printf("새로 들어온 제품입니까? ( Y / N ): ");
getchar();
scanf(" %c", &go);

if ( go == 'Y'){
printf("제품 입력 메뉴로 이동하시오\r\n");
sleep(1);
system("clear");
return;
}

}

printf("더 입력하시겠습니까? ( Y / N ): "); // 더 추가 할것이 없는지 확인
getchar();
scanf(" %c", &go1);

if ( go1 == 'Y') // 있으면 다시 실행
Productadd();

else if ( go1 == 'N') // 없으면 메뉴로
return;

}

void Productbuy(){ // 계산 메뉴
int a = 1;
char go = '\0';
char go2 = '\0';
char *productplus[100] = {'\0', };
int priceplus[100] = {0, };
int numberplus[100] = {0, };
int j = 0;
int sum = 0;
printf("============ 물품 메뉴 =============== \r\n");

if( count == 0){ // 등록된 제품이 없다면 다시 리턴
	printf("등록된 제품이 없습니다");
	sleep(2);
	system("claer");
	return;
}

for( int i = 0; i < count; i++){ // 등록된 제품 출력

printf("\r\n%d번: %s , ", i + 1 ,product[i].thing);
printf("%d원 , %d개 ", product[i].price, product[i].number);

if( product[i].night == 'Y') // 19금제품일 시 출력
	printf(" ** 19금 물품입니다 ** ");
    
}

printf("\r\n====================================\r\n");

printf("===============계산대================\r\n");

while(1){ 
int pronum = 0;
int num = 0;
int found = 0;
char prothing[100] = {'\0', };
printf("******************************************\r\n");
printf("물품: ");
getchar();
scanf(" %s", prothing);

if( strcmp(prothing,"나가기") == 0)	// 더 이상 추가할 물품 없으면 while문 빠져나가기
break;



for(int i = 0; i < count; i++){
if(strcmp(prothing,product[i].thing ) == 0) // 입력한 물품과 저장된 물품이 동일한가 검사
{
	if(product[i].night == 'Y') // 19금 물품일시 검사
	{
		if(!nineteen()) // 만 19세 확인
			break;
	}
    if(product[i].exdata < 20250219) // 유통기한 검
	{
		printf("유통기한이 지났습니다.\r\n");
        break;
	}
    
	productplus[j] = product[i].thing; // 동일하면 productplus에 저장
	priceplus[j] = product[i].price; // 동일하면 priceplus에 저장
	found = 1; // 일치하여 1로 선언
	break; 
}
}

if(found == 0) // 잘못 입력했거나 만 19세가 아닐시 다시 입력
{
		printf("다시 입력하시오\r\n");
		continue;
	}

printf("개수 : ");
scanf("%d", &pronum);
if(product[j].number < pronum){ // 보관된 물품이 입력한 물품보다 적으면 다시 입력
   	printf("보관된 물품 갯수 부족\r\n");
continue;

}
numberplus[j]  = pronum; // 개수 저장
product[j].number -= pronum; // 재고 업데이트
j++;
}

printf("==============================\r\n");

sleep(1);


if(!priceplus[0]){ // 아무것도 고르지 않았다면 메뉴
	printf("아무런 입력이 없으니 pos메뉴로 넘어가겠습니다.\r\n");
	sleep(1);
	return;
}
	for(int i =0; i < j; i++) // 계산할 물품, 개수 계산
{
	int productsum = 0;
printf("물품: %s ", productplus[i]);
printf("개수: %d ", numberplus[i]);
productsum = priceplus[i] * numberplus[i];
sum += productsum;
printf("= %d\r\n", productsum);

}
sleep(2);
printf("총: %d원\r\n", sum); //총 금액

char okay = '\0';
int cash = 0;
int pay = 0;

printf("카드 결제입니까? : "); // 카드 결제인지 현금 결제인지 구분
getchar();
scanf(" %c", &okay);
if( okay == 'Y')
{
	while(1){
	printf("결제 금액을 입력하시오: ");
	scanf("%d", &pay);
	if( sum > pay) // 결제 금액 잘못 입력시 다시 입
	{
		printf("금액이 부족합니다. 다시 입력하시오.\r\n");
        continue;
	}
	pricesum += pay; // 잔고 업데이트
	sleep(2);
	printf("결제 완료 되었습니다\r\n");
	break;
 }
}
 else if ( okay == 'N')
{
while(1){
 printf("받은 현금 금액을 입력하시오: ");
 scanf("%d" , &cash);
 
 int change  = cash - sum; // 거스름돈
 if( change < 0){  // 거스름돈이 마이너스이면 부족한 금액 출력후 다시 입력
   printf("결제 금액이 부족합니다.\r\n 부족한 금액: %d", change);
  continue;
 }
 printf("거스름 돈은 %d원 입니다.\r\n", change);
 pricesum += sum; // 잔고 업데이트
 sleep(2);
 break;
}
sleep(2);
}

return;
}


void end(){
time_t end_time = time(NULL); // 종료 후 시간 체크
double second_time = difftime(end_time, start); // 시간 체크 계산
int minutes_time = (int)(second_time / 60.0); // 초에서 분
int wage = minutes_time * 9200; // 분당 9200원
printf("경과된 시간(초) : %.2f\r\n", second_time);
printf("경과된 시간(분) : %d\r\n", minutes_time);
printf("오늘 일당은 %d원\r\n", wage);
sleep(2);
printf("종료 하겠습니다. \r\n");
exit(0); // 프로그램 종료
}

int nineteen(){ // 신분증 검사
int gott = 0;
printf("19금 제품입니다. 신분증 검사가 필요합니다.\n");
while(1){
        printf("생년월일 입력하시오 ex:20000824 : ");
		scanf(" %d", &gott);
	        
	int result = nineteencheck(gott); 

		if(result == 1){ // 20세 이상이면 통과
			printf("통과\r\n");
			return 1;
		}
		else if(result == 2){ // 20세 미만 일시 구매불가
			printf("해당 제품은 구매하실 수 없습니다.\r\n");
			sleep(1);
		    return 0;
		}
		else { // 잘못 입력시 다시 입
          printf("잘못된 입력입니다. \r\n");
		  sleep(1);
		  continue;
		}

}
}



int nineteencheck(int gott){ // 신분증 검사 시스템
int year = 0;
int day = 0;
int month = 0;

year = gott / 10000; //년도 계산
month = (gott % 10000) / 100; // 달 계산
day = gott % 100; // 일 계산

if(gott < 10000000 || gott > 99999999) //생년월일한 잘못적었는지 체크
{
	return 3;
}

if(month >= 13 || day >= 32){ // 12월 초과 31일 초과시 3으로 리턴
	printf("월 일 잘못입력하였습니다.\r\n");
	sleep(1);
return 3;

}

if(year >= 2007) // 2007년생 이상시 19금 물품 구매 불가 리턴 2
{
	printf("%d 년생은 19금 물품을 살수 없습니다.\r\n",year);
	sleep(1);
	return 2;
}
return 1; // 통과시 1로 리턴
}


int datacut(int exdata) // 유통기한 검사 시스템
{
int year = 0;
int day = 0;
int month = 0;

year = exdata / 10000;
month = (exdata % 10000) / 100;
day = exdata % 100;

if(exdata < 10000000 || exdata > 99999999) //유통기한 잘못 적을시
{
	printf("유통기한 잘못 입력하셨습니다.\r\n");
	sleep(1);
	return 0;
}

if(month >= 13 || day >= 32){
	printf("올바른 유통기한기간이 아닙니다.\r\n");
	sleep(1);
return 0;

}

if(year <= 2024  || (year == 2025 && (month <= 2 || (month == 2 && day <= 19))) ){ // 유통기한 지난 상품인지 검
	printf("유통기한이 지난 제품입니다!\r\n");
	sleep(1);
	return 0;
}
return 1;

}
void menu(){  // 포스 메뉴

	while(1){
int choice = 0;
 system("clear");
printf("======== 현재 잔고: %d원 ========= \r\n", pricesum);
	printf("========= pos 메뉴 ==========\r\n");
	printf("1. 제품 입력 2. 제품 확인하기 3. 제품 찾기 4. 제품 입고	5. 계산 6. 종료\r\n");
    printf("선택 : ");
	scanf("%d" , &choice);
 system("clear");
  switch(choice){
	case 1:
		Productin();
		break;
	case 2:
		Productlist();
		break;
	case 3:
		Productsearch();
		break;
	case 4:
		Productadd();
		break;
	case 5:
	    Productbuy();
		break;
	case 6:
		end();
		break;
}
}
}
