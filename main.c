#include <kipr/botball.h>
void move (int time, int speed)
{
    mav(0,speed);
    mav(1,speed);
    msleep(time);
}

int main()
{
    printf("Hello World\n");
    shut_down_in(118);
    int x = 0;
    enable_servos();
    move(2600,800);
    mav(0,-800);
    mav(1,800);
    msleep(1150);
    printf("I am the cookie making master. bow befor your new surpreme overlord");
    set_servo_position(1,1850);
    move(6400,800);//move to the tower to do the wacking
    msleep(1000);
    while (x < 9)
    {
        set_servo_position(1,175);//the wacking has begain
        msleep(1300);
        move(800,-900);
        set_servo_position(1,1850);
        msleep(1300);
        move(800,900);
        x = x + 1;
    }
    printf("I AM THE MEESE");
    move(2500,-800);
    mav(0,-800);
    mav(1,800);
    msleep(1000);
    move(1500,800);
    return 0;
}
