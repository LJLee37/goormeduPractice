#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int price, string grade) {
	// 여기에 코드를 작성하세요.
    int answer = 0;
    map<string,int> discount;
    discount["S"] = 5;
    discount["G"] = 10;
    discount["V"] = 15;
    answer = price - static_cast<int>((price * discount[grade]) / 100);
    return answer;
}
