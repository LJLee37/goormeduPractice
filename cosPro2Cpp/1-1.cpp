#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> shirt_size) {
    // 여기에 코드를 작성하세요.
    vector<int> answer = {0,0,0,0,0,0};
    for (auto i : shirt_size)
    {
	if ( i == "XS")
	    answer[0]++;
	else if (i == "S")
	    answer[1]++;
	else if (i == "M")
	    answer[2]++;
	else if (i == "L")
	    answer[3]++;
	else if (i == "XL")
	    answer[4]++;
	else if (i == "XXL")
	    answer[5]++;
    }
    return answer;
}
