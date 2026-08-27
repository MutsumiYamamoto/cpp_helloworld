#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

using namespace std;

class Calc {
public:
    int add(int a,int b);
};


//-------------------
//Hello World: "Hello, World!" を標準出力に表示するプログラムを作成してください。
//-------------------
int main(){
    std::cout << "Hello World! Everyone!!!!!!" << std::endl;

    auto now = std::chrono::system_clock::now();     // 現在のシステム時刻を取得
    std::time_t now_c = std::chrono::system_clock::to_time_t(now); // time_t型に変換
    std::tm* local_tm = std::localtime(&now_c);           // ローカル時間に変換
    std::cout << "現在の時刻: " << std::put_time(local_tm, "%Y-%m-%d %H:%M:%S") << std::endl;

    std::cout << "input a and b" << std::endl;
    int a=0,b=0;
    cin >> a >> b;
    std::cout << a << "と" << b << "の計算結果: " << Calc().add(a,b) << std::endl;
    
    
}


int Calc::add(int a,int b){
//    return 0;
    return a + b;    
}