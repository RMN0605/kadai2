#include <stdio.h>
/*
�y���z

Object�N���X
x,y,z���W��ۑ�����ϐ��AUpdate�֐������B
Update�֐���virtual�ō���Ă��������B



Vehicle(��蕨)�N���X
Object�N���X���p�������N���X�B
�����ł�SpeedUp�N���X��ǉ����Ă��������B
�܂�speed��accel�̕ϐ��������Œǉ����Ă��������B
SpeedUp�N���X��virtual�ō���Ă��������B
(���m�ȑ��x�̏������s�������ꍇ�́A�����Ɖ����x�ŁA
�x�N�g�����v�Z������@�ł��\���܂���B)



Car(��)�N���X
Vehicle�N���X���p�������N���X
SpeedUp��SpeedDown��������Car�p�Ɏ������Ă��������B
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