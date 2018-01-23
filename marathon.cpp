#include<iostream>
#include<conio.h>
using namespace std;

class race
{
private:
    int hour,min,sec,dist,secTime,hrTime,minTime,day;
    double speed;
public:
    race getTime();
    race calculate();
    race add(race person,int);
    int addtime(race person);
    bool operator > (race speed);
    void CALC(race person);
    int calculatehalf(int);
    int calculatehalf2(int i);
    int calculate_Till_100(int);
};

race race::getTime()//input time
{race T;
    cout<<"\nEnter time in hh mm ss";
    cin>>T.hour>>T.min>>T.sec;
    return T;
}

race race::calculate()//calculate speed of players
{
race T;
T.secTime=0;
T.minTime=0;
T.hrTime=0;

T.secTime=sec+(min*60)+(hour*3600);
T.speed=double(110000)/(T.secTime);
cout<<"\nYOUR SPEED"<<':';
cout<<T.speed;
cout<<"m/s";
return T;
}

int race::calculatehalf(int i)//calculate half time for odd numbered player
{
race T;
T.secTime=0;
T.secTime=double(55000)/(speed);
cout<<"\n\nTime taken:"<<"by player "<<i+1<<"to go 55km=";
cout<<T.secTime;
cout<<"seconds";
return T.secTime;
}

int race::calculatehalf2(int i)//calculate half time for even numbered player
{
race T;
T.secTime=0;
T.secTime=double(55000)/(speed);
cout<<"\n\nTime taken:"<<"by player "<<i+2<<" to go 55km=";
cout<<T.secTime;
cout<<"seconds";
return T.secTime;
}

int race::calculate_Till_100(int i)//calculate time by second player to reach 45km
{
race T;
T.secTime=0;
T.secTime=double(45000)/(speed);
cout<<"\n\nTime taken:"<<"by player "<<i+2<<"to go 45km:";
cout<<T.secTime;
cout<<"seconds";
return T.secTime;
}
bool race::operator > (race Speed)//operator > overloading
{
if (speed > Speed.speed)
    return true;
else
    return false;
}

race race::add(race person,int j)//calculating team speed
{
    race T;
    T.speed=speed+person.speed;
    T.secTime=secTime+person.secTime;
    cout<<"\n\nTeam "<<j+1<<" speed\n"<<T.speed;
    return T;
}

int main()
{
    int i,j;
    int result;

    float seconds[3]={0},hour[3]={0},minute[3]={0};
    int day[6]={0};
race destTime;
race Speed[6];
int Timehalf[6],Timehalf2[6],Time_second_player[6];
int TotalTime[6]={0};
race Person[6];
    cout<<"Race started at 14:00:00\n";
    cout<<"Enter time by player.";
    for(i=0;i<6;i++)
    {
        Person[i]=Person[i].getTime();
        Speed[i]=Person[i].calculate();

    }

    for(i=0,j=0;i<3,j<6;i++,j+=2)
    {
            Timehalf[i]=Speed[j].calculatehalf(j);
            Timehalf2[i]=Speed[j+1].calculatehalf2(j);
        Time_second_player[i]=Speed[j+1].calculate_Till_100(j);
    }

    for(i=0,j=0;i<6,j<3;i+=2,j++)
    {
        Speed[i]=Speed[i].add(Speed[i+1],j);
        TotalTime[j]=Timehalf[j]+Time_second_player[j];
        cout<<"\n\nTeam"<<j+1<<" reaches 100 km after "<<TotalTime[j]<<"seconds";

    }


    if((Speed[0]>(Speed[2]))&&(Speed[0]>Speed[4]))
        result=1;
    else if((Speed[2]>Speed[4])&&(Speed[2]>Speed[0]))
        result=2;
    else
        result=3;


for(i=0;i<3;i++)
{
    TotalTime[i]=Timehalf[i]+Timehalf2[i];

    hour[i]=14+TotalTime[i]/3600;

    if(hour[i]>24)
        {
            hour[i]-=24;
            day[i]+=1;
        }
    minute[i]+=(TotalTime[i]%3600)/60;

    if(minute[i]>60)
        {
            minute[i]-=60;
            hour[i]+=1;
        }

    seconds[i]=((TotalTime[i]%3600))%60;
    if(seconds[i]>60)
        {seconds[i]-=60;
    minute[i]+=1;}

}


    switch(result)
    {
        case 1:cout<<"\n\nTeam 1 wins\n";

        cout<<"Team 1 reaches destination after "<<day[0]<<" day at "<<hour[0]<<" hour "<<minute[0]<<" minutes "<<seconds[0]<<" seconds";
        break;
        case 2:cout<<"\n\nTeam 2 wins\n";
        cout<<"Team 2 reaches destination after "<<day[1]<<" day at "<<hour[1]<<" hour "<<minute[1]<<" minutes "<<seconds[1]<<" seconds";
        break;
        case 3:cout<<"\n\nTeam 3 wins\n";
        cout<<"Team 3 reaches destination after "<<day[2]<<" day at "<<hour[2]<<" hour "<<minute[2]<<" minutes "<<seconds[2]<<" seconds";
        break;
    }
    return 0;
}

