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
    float x = 0;
    float y = 0;
    float z = 0;

    virtual void Update()
    {
        printf("x = %f", x);
        printf("y = %f", y);
        printf("z = %f", z);
    }

};

class Vehicle : public Object
{
public:
    virtual float SpeedUp()
    {
        speed += accel;
        return speed;
    };
    virtual void Update()
    {
        x += speed;
        printf("%f\n", speed);
    }

    float speed = 0;
    float accel = 0;
};

class Car :public Vehicle
{
public:
    Car()
    {
        speed = 0;
        accel = 1;
    }
};
int main()
{
    Car car;

    for (int i = 0; i < 100; i++)
    {
        car.SpeedUp();
        car.Update();
    }
}