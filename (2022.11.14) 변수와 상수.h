#pragma once
#include <stdio.h>

void main()
{
    // 변수의 명명규칙
    /*
    // 1. 같은 이름의 변수는 사용할 수 없습니다.
    // 2. 변수의 이름은 대소문자를 구별합니다.
    // 3. 변수의 이름에 공백이 포함될 수 없습니다.
    // 4. 변수에 이름으로 특수기호는 "_", "$"만 사용할 수 있습니다.
    // 5. 변수의 이름으로 예약어를 사용할 수 없습니다.

    // 6. 변수의 이름은 숫자로 시작할 수 없습니다.
    // 컴파일하는 동안 어휘 분석에서 역 추적을 피할 수 있으므로
    // 시작 위치에서만 숫자를 사용할 수 없습니다.

    int a = 100; // ex) 2
    float A = 30.5; // ex) 2
    // short count Down = 5; ex) 3
    double count_Donw$ = 185.6; // ex) 4
    // char char = 'D'; ex) 5

    // 변수의 이름을 숫자로 시작하지 않고 다른 위치에 넣어주면 사용할 수 있습니다.
    long long v1al3ue5 = 11;
    // long 1data = 20; ex)6
    */

    // 변수의 특성
    /*
    // 변수는 값을 계속 변경할 수 있습니다.

    // 디버깅 능력
    // 게임에서 버그가 터졌어요.
    // (내가 생각한 값이 제대로 들어가지 않았기 때문에 버그가 발생합니다.)

    // 프로그램을 시작할 때 위에서부터 아래로 읽어드립니다.

    // Start Without Debugging : 중단점을 찍었을 때 디버그하지 않고 시작하는 디버깅입니다.
    int x = 5; // 디버깅에서 (화살표) →가 현재 위치에 있다라는 의미는 디버깅하기 위한 대기
    x = 10;
    x = 20;

    // 실력을 향상시키는 방법
    // 1. 어떤 문제가 생겼을 때 (스스로 해결하기) 문제 해결 능력 <- 수학
    // 2. 구글링 (영어를 많이 사용해야 해요.)
    // 3. 팀 프로젝트 추천 (branch, pull request) 경험

    // long : 운영체제에 따라 4 또는 8 Byte의 크기를 가지는 자료형
    // long long : 8 또는 그 이상의 크기를 가지는 자료형
    */

    // 상수란?
    /*
    // 프로그램이 실행되는 동안 더 이상 변경할 수 없는 메모리 공간입니다.

    // 컴파일 시점에 y는 3이라는 값으로 고정됩니다.
    // y : 심볼릭 상수
    // 3 : 리터럴 상수

    const int y = 3;

    // 심볼릭 상수
    // 메모리 공간을 가지고 있는 상수입니다.

    // 리터럴 상수
    // 메모리 공간을 가지고 있지 않은 상수입니다.

    // y = 20;
    */
}
