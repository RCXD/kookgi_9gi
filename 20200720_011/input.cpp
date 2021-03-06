#include "config.h"

void main() {

//	변수 => 처리할 데이터(상수)를 기억하는 기억장소
//	변수 이름은 영문자, 숫자, 특수문자(_)를 사용하며 반드시 문자로 시작해야 한다.

//	변수를 선언할 때 반드시 변수의 타입을 지정해야 하고 사용하기 전에 반드시 초기화시켜야 한다.
//	변수 선언 방법
//	자료형 변수명;			// 변수를 선언만 한다. => 쓰레기가 들어있다.
//	자료형 변수명 = 초기치;	// 변수를 선언하고 초기치로 초기화 시킨다.
//	"="의 의미는 같다로 사용되지 않고 "=" 오른쪽의 데이터를 "=" 왼쪽의 기억장소에 저장시키라는 의미로 사용된다. => 대입문

	int age;
//	printf("%d\n", age);	// 변수를 선언하고 초기화시키지 않았기 때문에 에러가 발생된다.
	age = 100;
	printf("%d\n", age);	// 변수를 초기화 시켰기 때문에 에러가 발생되지 않는다.

	printf("나이를 입력하세요 => scanf() 사용 : ");
//	scanf("입력서식", &변수이름) => 반드시 변수이름 앞에 "&"를 붙여야 한다. => 단, 배열이름에는 붙이지 않아도 된다.
//	비쥬얼 스튜디오 2013 부터 scanf() 함수를 사용하면 scanf_s() 함수를 사용하라고 보안상의 이유로 인해 에러가 발생된다.
//	보안상의 문제가 발생될 수 있음을 알고 있음에도 불구하고 scanf() 함수를 사용하고 싶다면 _CRT_SECURE_NO_WARNINGS를
//	사용하면 된다. 프로젝트 속성 => 구성속성 => C/C++ => 전처리기 => 전처리기 정의에 "_CRT_SECURE_NO_WARNINGS" 추가
	scanf("%d", &age);
//	scanf_s("%d", &age);
	printf("%d살 입니다.\n", age);

	cout << "나이를 입력하세요 => cin 사용 : ";
	cin >> age;
	cout << age << "살 입니다." << endl;

//	연산자 우선 순위 => 자세한 사항은 https://dojang.io/mod/page/view.php?id=188 참조
//	() => 단항 연산자 => 이항연산자 => 삼항 연산자 => 대입 연산자
//	이항 연산자 우선 순위 : 산술 연산자(*, /, % => +, -) => 관계 연산자 => 논리 연산자

//	관계 연산자
//	>(크다, 초과), >=(크거나 같다, 이상), <(작다, 미만), <=(작거나 같다, 이하), ==(같다), !=(같지 않다)

//	c/c++은 0은 false로 취급하고 0이 아닌 나머지 모든 숫자를 true로 취급한다.
	cout << "true : " << true << endl;		// 1
	cout << "false : " << false << endl;	// 0
	cout << "3 < 4 = " << (3 < 4) << endl;	// 1
	cout << "3 > 4 = " << (3 > 4) << endl;	// 0

//	논리 연산자
//	&& : 논리곱(and), 두 개의 조건이 모두 참일 경우에만 참, ~이고, ~이면서, ~중에서
//	|| : 논리합(or), 두 개의 조건 중 한 개 이상 참일 경우에 참, ~또는, ~이거나 
//	!  : 논리 부정(not)

	cout << "!(!3) = " << !(!3) << endl;	// 1
	cout << "!(!-3) = " << !(!-3) << endl;	// 1
	cout << "!(!0) = " << !(!0) << endl;	// 0

}