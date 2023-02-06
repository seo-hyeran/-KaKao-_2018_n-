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

char list[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
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
            tmp += list[num % n];   
            num /= n;
        }
        reverse(tmp.begin(), tmp.end());
        result += tmp;
        tmp = "";
        cout << result << endl;
        cnt++;
        cout << cnt << endl;
    }

    for (int i = p-1; i < result.size(); i=i+m) {
        answer += result[i];
    }
    cout << answer.substr(0,t) << endl;
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
