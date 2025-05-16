#include <iostream>
using namespace std;

class Enemy {
public:
    void Update();

    void /*接近*/(); // 接近
    void /*攻撃*/(); // 攻撃
    void /*離脱*/(); // 離脱

    // 関数ポインタテーブル
    static void (Enemy::* /*テーブル配列*/[])();

private:
    int index = 0;
};

void Enemy::/*接近*/() {
    cout << "敵が接近！" << endl;
}

void Enemy::/*攻撃*/() {
    cout << "敵が攻撃！" << endl;
}

void Enemy::/*離脱*/() {
    cout << "敵が離脱" << endl;
}

void Enemy::Update() {

    // 関数テーブルから関数を実行
    (this->*/*テーブル配列*/[index])();

    cout << "次の状態に移行 (0: はい、 他: いいえ)";
    int input;
    cin >> input;

    if (input == 0) {
        index = (index + 1) % 3;
    }
}

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::/*テーブル配列*/[])() = {
    &Enemy::Approach, // インデックス0
    &Enemy::Attack,   // インデックス1
    &Enemy::Retreat   // インデックス2
};

int main() {

    Enemy enemy;

    while (1)enemy.Update();

    return 0;
}

