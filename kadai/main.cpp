#include <stdio.h>
/*
【問題】

Objectクラス
x,y,z座標を保存する変数、Update関数を持つ。
Update関数はvirtualで作ってください。



Vehicle(乗り物)クラス
Objectクラスを継承したクラス。
ここではSpeedUpクラスを追加してください。
またspeedとaccelの変数をここで追加してください。
SpeedUpクラスはvirtualで作ってください。
(正確な速度の処理を行いたい場合は、向きと加速度で、
ベクトルを計算する方法でも構いません。)



Car(車)クラス
Vehicleクラスを継承したクラス
SpeedUpとSpeedDownをここでCar用に実装してください。
*/
class Object
{   
public:
    virtual void Update(float nowSpeed)
    {
        x += nowSpeed;
        printf("x = %f", x);
        printf("y = %f", y);
        printf("z = %f", z);
    }
private:

    float x = 0;
    float y = 0;
    float z = 0;
};

class Vehicle : public Object
{
public:
    virtual float SpeedUp(float nowSpeed)
    {
        nowSpeed += Speed;
        return nowSpeed;

    };
    float Speed = 1.0f;
private:

};

class Car :public Vehicle
{
public:

    float SpeedUP()
    {
        speed = SpeedUp(speed);
    };

private:
    float speed = 0;
    float s_down = 2.0f;
};
int main()
{
    Car car;

    
}