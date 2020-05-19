#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int price, string grade) {
    // 여기에 코드를 작성하세요.
    int answer = 0;
    if(grade == "S")
	answer = price * 0.95;
    else if (grade == "G")
	answer = price * 0.9;
    else if(grade == "V")
	answer = price * 0.85;
    return answer;
}
