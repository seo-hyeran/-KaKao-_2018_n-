// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
#include<queue>
#include<tuple>
#include<regex>
#include <map>

//#include<map>
using namespace std;

char list[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' }; //10~15는 알파벳으로 표현하기 위해 간략하게 배열로 저장
string solution(int n, int t, int m, int p) {
    string answer = "";
    string tmp = "";
    string result = "0";
    int cnt = 0;
    int num = 0;
    while (1) {
        if (cnt > t*m) {
            break;
        }
        num = cnt;
        cout << num << endl;
        while (num > 0) {
            tmp += list[num % n];   //진법 변환 함수
            num /= n;
        }
        reverse(tmp.begin(), tmp.end()); //진법 변환시 거꾸로 저장이 되므로 문자열 뒤집기함수 reverse사용
        result += tmp;
        tmp = "";
        cout << result << endl;
        cnt++;
        cout << cnt << endl;
    }

    for (int i = p-1; i < result.size(); i=i+m) { //m번째씩 저장
        answer += result[i];
    }
   
    answer = answer.substr(0,t); //문자열 자르기 함수를 통해 뽑고자 하는 개수 저장
    return answer;
}
int main()
{ 
    int n = 16;
    int t = 16;
    int m = 2;
    int p = 2;

    solution(n,t,m,p);

}
