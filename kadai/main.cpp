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
        speed += nowSpeed;
        printf("%f\n", speed);
        return speed;
    };
    virtual float Accel(float nowAccel)
    {
        accel += nowAccel;
        printf("%f\n", speed);
        return accel;
    }
    float speed = 0;
    float accel = 0;
private:

};

class Car :public Vehicle
{
public:

    virtual float SetSpeed(float distance)
    {
        speed = distance;
        return speed;
    }
    virtual float SetAccel(float nowAccel)
    {
        accel = nowAccel;
        return speed;
    }

};
int main()
{
    Car car;
    car.SpeedUp(1);
    car.Accel(1);
    car.SetAccel(1);
}