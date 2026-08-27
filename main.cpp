#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;
//-------------------
//Hello World: "Hello, World!" を標準出力に表示するプログラムを作成してください。
//-------------------
int main(){
    std::cout << "Hello World! Everyone!!!!!!" << std::endl;

    auto now = std::chrono::system_clock::now();     // 現在のシステム時刻を取得
    std::time_t now_c = std::chrono::system_clock::to_time_t(now); // time_t型に変換
    std::tm* local_tm = std::localtime(&now_c);           // ローカル時間に変換
    std::cout << "現在の時刻: " << std::put_time(local_tm, "%Y-%m-%d %H:%M:%S") << std::endl;


    
}











#if 0
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
#endif