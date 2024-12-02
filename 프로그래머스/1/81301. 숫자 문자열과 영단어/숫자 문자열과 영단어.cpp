#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // 각 단어를 순차적으로 처리하여 문자열에서 숫자로 변환
    for (int i = 0; i < words.size(); i++) {
        string word = words[i];
        int pos = s.find(word);
        
        // 단어가 문자열에 존재하는 동안 반복해서 교체
        while (pos != string::npos) {
            s.replace(pos, word.size(), to_string(i)); // 단어를 해당 숫자로 교체
            pos = s.find(word, pos + 1); // 교체 후 다시 찾기
        }
    }
    
    // 최종적으로 변환된 문자열을 정수로 반환
    return stoi(s);
}