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