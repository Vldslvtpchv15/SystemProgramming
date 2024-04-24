//#include <iostream>
//using namespace std;
//#define MIN_TANK_VOLUME 20
//#define MAX_TANK_VOLUME 120
//
//class Tank
//{
//    const int VOLUME;
//    double fuel_level;
//public:
//    const int getVOLUME()const
//    {
//        return VOLUME;
//    }
//    double getfule_level()const
//    {
//        return fuel_level;
//    }
//    int check(int volume)
//    {
//        if (volume < MIN_TANK_VOLUME)
//        {
//            volume = MIN_TANK_VOLUME;
//        }
//        if (volume > MAX_TANK_VOLUME)
//        {
//            volume = MAX_TANK_VOLUME;
//        }
//        return volume;
//    }
//    Tank(int volume) :VOLUME(check(volume))
//    {
//        this->fuel_level = 0;
//        cout << "Tank is ready\n";
//    }
//    void fill(double ammount)
//    {
//        if (ammount < 0)
//        {
//            return;
//        }
//        if (fuel_level + ammount < VOLUME)
//        {
//            fuel_level += ammount;
//        }
//        else
//        {
//            fuel_level = VOLUME;
//        }
//    }
//    double give_fuel(double ammount)
//    {
//        if (ammount < 0)
//        {
//            return fuel_level;
//        }
//        if (fuel_level - ammount > 0)
//        {
//            fuel_level -= ammount;
//        }
//        else
//        {
//            fuel_level = 0;
//        }
//        return fuel_level;
//    }
//    void info()const
//    {
//        cout << "Tank volume: " << VOLUME << " liters \n";
//        cout << "Fuel level: " << fuel_level << " liters \n";
//    }
//};
//
//#define MIN_ENGINE_CONSUMPTION
//#define MAX_ENGINE_CONSUMPTION
//class Engine
//{
//    double constumption;
//    double consumption_per_second;
//public:
//    double get_consuption()const
//    {
//        return CONSUMPTION;
//    }
//    double get_consumption_per_second()const
//    {
//        return consumption_per_second;
//    }
//    Engine(double CONSUMPTION)
//        :CONSUMPTION
//        (
//            consumption < MIN_ENGINE_CONSUMPTION ? MIN_ENGINE_CONSUMPTION :
//            consumption > MAX_ENGINE_CONSUMPTION ? MAX_ENGINE_CONSUMPTION :
//            consumption
//        )
//    {
//        consumption_per_second = CONSUMPTION * 3e-5;
//        cout << "Engine is ready: " << this << endl;
//    }
//
//};
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    Tank tank(85);
//    tank.info();
//
//}


//#include <iostream>
//using namespace std;
//#define MIN_TANK_VOLUME 20
//#define MAX_TANK_VOLUME 120
//class Tank
//{
//    const int VOLUME;
//    double fuel_level;
//public:
//    const int getVOLUME()const
//    {
//        return VOLUME;
//    }
//    double getfule_level()const
//    {
//        return fuel_level;
//    }
//    Tank(int volume) :VOLUME(volume < MIN_TANK_VOLUME ? MIN_TANK_VOLUME : (volume > MAX_TANK_VOLUME ? MAX_TANK_VOLUME : volume))
//    {
//        this->fuel_level = 0;
//        cout << "Tank is ready\n";
//    }
//    void fill(double ammount)
//    {
//        if (ammount < 0)
//        {
//            return;
//        }
//        if (fuel_level + ammount < VOLUME)
//        {
//            fuel_level += ammount;
//        }
//        else
//        {
//            fuel_level = VOLUME;
//        }
//    }
//    double give_fuel(double ammount)
//    {
//        if (ammount < 0)
//        {
//            return fuel_level;
//        }
//        if (fuel_level - ammount > 0)
//        {
//            fuel_level -= ammount;
//        }
//        else
//        {
//            fuel_level = 0;
//        }
//        return fuel_level;
//    }
//    void info()const
//    {
//        cout << "Tank volume: " << VOLUME << " liters\n";
//        cout << "Fuel level: " << fuel_level << " liters";
//    }
//    ~Tank()
//    {
//        cout << "Tank is over" << endl;
//    }
//};
//#define MIN_ENGINE_CONSUMPTION 3
//#define MAX_ENGINE_CONSUMPTION 30
//class Engine
//{
//    const double CONSUMPTION;
//    double consumption_per_second;
//public:
//    double getConsuption()const
//    {
//        return CONSUMPTION;
//    }
//    double getConsumption_per_second()const
//    {
//        return consumption_per_second;
//    }
//    Engine(double consumption) :CONSUMPTION(consumption<MIN_ENGINE_CONSUMPTION ? MIN_ENGINE_CONSUMPTION : consumption > MAX_ENGINE_CONSUMPTION ? MAX_ENGINE_CONSUMPTION : consumption)
//    {
//        consumption_per_second = CONSUMPTION * 3e-5;
//    }
//    ~Engine()
//    {
//        cout << "Engine is over" << endl;
//    }
//};
//
//#define TANK_CHECK
//// ��������� define ������� ����������������
//
//#define ENGINE
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//#ifdef TANK_CHECK
//    // ���� ���������� tank_check, �� ��� ��������� ��� �� ��������� #endif ����� ����� �����������.
//    Tank tank(70);
//    int fuel = 0;
//    do
//    {
//        cout << "������� ������� ������� �� ������ ���������: ";
//        cin >> fuel;
//    } while (fuel == 0);
//    tank.fill(fuel);
//    tank.info();
//#endif // tank_check
//    
//    Engine engine(10);
//    engine.info();
//}

/*
#include <iostream>
#include <conio.h>
#include <thread>
#include <Windows.h>
using namespace std;
#define Enter 13
#define Escape 27
#define MIN_TANK_VOLUME 20
#define MAX_TANK_VOLUME 120
class Tank
{
    const int VOLUME;
    double fuel_level;
public:
    const int getVOLUME()const
    {
        return VOLUME;
    }
    double get_fuel_level()const
    {
        return fuel_level;
    }
    Tank(int volume) :VOLUME(volume < MIN_TANK_VOLUME ? MIN_TANK_VOLUME : (volume > MAX_TANK_VOLUME ? MAX_TANK_VOLUME : volume))
    {
        this->fuel_level = 0;
        cout << "Tank is ready\n";
    }
    void fill(double ammount)
    {
        if (ammount < 0)
        {
            return;
        }
        if (fuel_level + ammount < VOLUME)
        {
            fuel_level += ammount;
        }
        else
        {
            fuel_level = VOLUME;
        }
    }
    double give_fuel(double ammount)
    {
        if (ammount < 0)
        {
            return fuel_level;
        }
        if (fuel_level - ammount > 0)
        {
            fuel_level -= ammount;
        }
        else
        {
            fuel_level = 0;
        }
        return fuel_level;
    }
    void info()const
    {
        cout << "Tank volume: " << VOLUME << " liters\n";
        cout << "Fuel level: " << fuel_level << " liters\n";
    }
    ~Tank()
    {
        cout << "Tank is over\n" << endl;
    }
};
#define MIN_ENGINE_CONSUMPTION 3
#define MAX_ENGINE_CONSUMPTION 30
class Engine
{
    const double CONSUMPTION;
    double consumption_per_second;
    bool is_started;
public:
    double getConsuption()const
    {
        return CONSUMPTION;
    }
    double get_consumption_per_second()const
    {
        return consumption_per_second;
    }
    Engine(double consumption) :CONSUMPTION(consumption<MIN_ENGINE_CONSUMPTION ? MIN_ENGINE_CONSUMPTION : consumption > MAX_ENGINE_CONSUMPTION ? MAX_ENGINE_CONSUMPTION : consumption), is_started(false)
    {
        consumption_per_second = CONSUMPTION * 3e-5;
        
    }
    ~Engine()
    {
        cout << "Engine is over\n" << endl;
    }

    void start()
    {
        is_started = true;
    }

    void stop()
    {
        is_started = false;
    }

    bool started() const
    {
        return is_started;
    }

    void info()const
    {
        cout << "Engine consumption: " << CONSUMPTION << " liters\n";
        cout << "Engine consumption per second: " << consumption_per_second << " liters\n";
        cout << "Engine is " << (is_started ? "started" : "stopped") << endl;
    }
};

#define MAX_SPEED_LOW_LIMIT 50
#define MAX_SPEED_HIGH_LIMIT 447
class Car
{
    Engine engine;
    Tank tank;
    bool driver_inside;
    struct Threads
    {
        std::thread panel_thread;
        std::thread engine_idle_thread;
        std::thread free_wheeling_thread;
    }threads;
    int speed;
    const int MAX_SPEED;
    const int ACCELERATION;
public:
    Car(int consumption = 10, int volume = 60, int max_speed = 250) : engine(consumption), tank(volume), driver_inside(false), speed(0), ACCELERATION (MAX_SPEED/20),
        MAX_SPEED
        (
            max_speed < MAX_SPEED_LOW_LIMIT ? MAX_SPEED_LOW_LIMIT :
            max_speed >MAX_SPEED_HIGH_LIMIT ? MAX_SPEED_HIGH_LIMIT :
            max_speed
        )
    {
        cout << "Your car is ready to go" << endl;
    }
    ~Car()
    {
        cout << "Your car is over\n";
    }

    void get_in()
    {
        driver_inside = true;
        threads.panel_thread = std::thread(&Car::panel, this);
    }

    void get_out()
    {
        
        driver_inside = false;
        if(threads.panel_thread.joinable())threads.panel_thread.join();
        system("CLS");
        cout << "Out of the car" << endl;
    }

    void start()
    {
        if (tank.get_fuel_level())
        {
            engine.start();
            threads.engine_idle_thread = std::thread(&Car::engine_idle, this);
        }
    }
    
    void stop()
    {
        engine.stop();
        if (threads.engine_idle_thread.joinable())threads.engine_idle_thread.join();
        
    }

    void accelerate()
    {
        if (engine.started())
        {
            speed += ACCELERATION;
            if (speed > MAX_SPEED) speed = MAX_SPEED;
            if (!threads.free_wheeling_thread.joinable())
                threads.free_wheeling_thread = std::thread(&Car::free_wheeling, this);
            std::this_thread::sleep_for(1s);
        }
    }

    void slow_down()
    {
        speed -= ACCELERATION;
        if (speed < 0) speed = 0;
        if (threads.free_wheeling_thread.joinable())
            threads.free_wheeling_thread.join();
    }
    void control()
    {
        char key;
        do
        {
            key = _getch();
            switch (key)
            {
            case 'F':
            case 'f':
                if (driver_inside)
                { 
                    cout << "Get out of the car\a" << endl;
                }
                else
                {
                    double fuel;
                    cout << "������� ������� �������: "; cin >> fuel;
                    tank.fill(fuel);
                }
            case Enter: driver_inside ? get_out() : get_in(); break;
            case 'I':
            case 'i': engine.started() ? stop() : start(); break;
            case 'W':
            case 'w': accelerate(); break;
            case 'S':
            case 's': slow_down(); break;

            case Escape:
                speed = 0;
                stop();
                get_out(); 
                break;
            }
            if (speed < 0) speed = 0;
            if (speed==0 && threads.free_wheeling_thread.joinable())
                threads.free_wheeling_thread.join();
        } while (key != 27);
        
    }
    void free_wheeling()
    {
        while (--speed)
        {
            std::this_thread::sleep_for(1s);
            if (speed < 0) speed = 0;
        }
    }

    void engine_idle()
    {
        while (engine.started() && tank.give_fuel(engine.get_consumption_per_second()))
            this_thread::sleep_for(1s);
    }

    void panel() const
    {
        while (driver_inside)
        {
            system("CLS");
            cout << "Fuel level:\t" << tank.get_fuel_level() << "liters.\n";
            if (tank.get_fuel_level() < 5)
            {
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hConsole, 0xCF);
                cout << " LOW FUEL ";
                SetConsoleTextAttribute(hConsole, 0x0F);
            }
            cout << endl;
            cout << "Engine is " << (engine.started() ? "started" : "stopped") << endl;
            cout << "Speed:    " << speed << "km/h\n";
            std::this_thread::sleep_for(100ms);
        }
    }
    
    void info() const
    {
        engine.info();
        tank.info();
        cout << "Current speed:" << speed << " km/h\n";
        cout << "Max speed:    " << MAX_SPEED << " km/h\n";
        cout << "Acceleration:  " << ACCELERATION << "m/s2\n";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Tank tank(70);
    /*int fuel = 0;
    do
    {
        cout << "������� ������� ������� �� ������ ���������: ";
        cin >> fuel;
    }while (fuel == 0);
    tank.fill(fuel);
    tank.info();////////////////////
#ifdef TANK_CHECK
        // ���� ���������� tank_check, �� ��� ��������� ��� �� ��������� #endif ����� ����� �����������.
        Tank tank(70);
        int fuel = 0;
        do
        {
            cout << "������� ������� ������� �� ������ ���������: ";
            cin >> fuel;
        } while (fuel == 0);
        tank.fill(fuel);
        tank.info();
#endif // tank_check
#ifdef ENGINE
        Engine engine(10);
        engine.info();
#endif // ENGINE

        Car bmw;
        bmw.info();
        bmw.control();
}
*/


#include<iostream>
#include<conio.h>
#include<thread>
#include<Windows.h>
using namespace std;

#define Enter	13
#define Escape	27

#define MIN_TANK_VOLUME 20
#define MAX_TANK_VOLUME 120

class Tank
{
    double fuel_level;
    const int VOLUME;
public:
    const int get_VOLUME()const
    {
        return VOLUME;
    }
    double get_fuel_level()const
    {
        return fuel_level;
    }
    void fill(double amount)
    {
        if (amount < 0)return;
        if (fuel_level + amount < VOLUME)fuel_level += amount;
        else fuel_level = VOLUME;
    }
    double give_fuel(double amount)
    {
        if (amount < 0)return fuel_level;
        fuel_level -= amount;
        if (fuel_level < 0)fuel_level = 0;
        return fuel_level;
    }
    Tank(int volume) :VOLUME
    (
        volume < MIN_TANK_VOLUME ? MIN_TANK_VOLUME :
        volume > MAX_TANK_VOLUME ? MAX_TANK_VOLUME :
        volume
    ),
        fuel_level(0)
    {
        /*if (volume < MIN_TANK_VOLUME)volume = MIN_TANK_VOLUME;
        if (volume > MAX_TANK_VOLUME)volume = MAX_TANK_VOLUME;
        this->VOLUME = volume;*/
        //this->fuel_level = 0;
        cout << "Tank is ready " << this << endl;
    }
    ~Tank()
    {
        cout << "Tank is over " << this << endl;
    }
    void info()const
    {
        cout << "Tank volume: " << VOLUME << " liters.\n";
        cout << "Fuel level:  " << fuel_level << " liters.\n";
    }
};

#define MIN_ENGINE_CONSUMPTION	3
#define MAX_ENGINE_CONSUMPTION	30
class Engine
{
    const double CONSUMPTION;
    double consumption_per_second;
    bool is_started;
public:
    double get_consumption()const
    {
        return CONSUMPTION;
    }
    double get_consumption_per_second()const
    {
        return consumption_per_second;
    }
    Engine(double consumption)
        :CONSUMPTION
        (
            consumption < MIN_ENGINE_CONSUMPTION ? MIN_ENGINE_CONSUMPTION :
            consumption > MAX_ENGINE_CONSUMPTION ? MAX_ENGINE_CONSUMPTION :
            consumption
        ),
        consumption_per_second(CONSUMPTION * 3e-5),
        is_started(false)
    {
        cout << "Engine is ready: " << this << endl;
    }
    ~Engine()
    {
        cout << "Engine is over: " << this << endl;
    }
    void start()
    {
        is_started = true;
    }
    void stop()
    {
        is_started = false;
    }
    bool started()const
    {
        return is_started;
    }
    void info()const
    {
        cout << "Consumption: " << CONSUMPTION << " liters/100km" << endl;
        cout << "Consumption: " << consumption_per_second << " liters/100km" << endl;
        cout << "Engine is " << (is_started ? "started" : "stopped") << endl;
    }
};

#define MAX_SPEED_LOW_LIMIT		 50
#define MAX_SPEED_HIGH_LIMIT	447
class Car
{
    Engine engine;
    Tank tank;
    bool driver_inside;
    struct
    {
        std::thread panel_thread;
        std::thread engine_idle_thread;
        std::thread free_wheeling_thread;
    }threads;
    int speed;
    const int MAX_SPEED;
    const int ACCERERATION;
public:
    Car(int consumption = 10, int volume = 60, int max_speed = 250) :
        engine(consumption),
        tank(volume),
        driver_inside(false),
        speed(0),
        ACCERERATION(MAX_SPEED / 20),
        MAX_SPEED
        (
            max_speed < MAX_SPEED_LOW_LIMIT ? MAX_SPEED_LOW_LIMIT :
            max_speed > MAX_SPEED_HIGH_LIMIT ? MAX_SPEED_HIGH_LIMIT :
            max_speed
        )
    {
        cout << "Your car is ready to go" << endl;
    }
    ~Car()
    {
        cout << "Your car is over" << endl;
    }
    void get_in()
    {
        driver_inside = true;
        threads.panel_thread = std::thread(&Car::panel, this);
    }
    void get_out()
    {
        driver_inside = false;
        if (threads.panel_thread.joinable())threads.panel_thread.join();
        system("CLS");
        cout << "Out of the car" << endl;
    }
    void start()
    {
        if (tank.get_fuel_level())
        {
            engine.start();
            threads.engine_idle_thread = std::thread(&Car::engine_idle, this);
        }
    }
    void stop()
    {
        engine.stop();
        if (threads.engine_idle_thread.joinable())threads.engine_idle_thread.join();
    }
    void accelerate()
    {
        if (engine.started())
        {
            speed += ACCERERATION;
            if (speed > MAX_SPEED)speed = MAX_SPEED;
            if (!threads.free_wheeling_thread.joinable())
                threads.free_wheeling_thread = std::thread(&Car::free_wheeling, this);
            std::this_thread::sleep_for(1s);
        }
    }
    void slow_down()
    {
        speed -= ACCERERATION;
        if (speed < 0)speed = 0;
        //if (speed = 0 && threads.free_wheeling_thread.joinable())
        //	threads.free_wheeling_thread.join();
        this_thread::sleep_for(1s);
    }
    void control()
    {
        char key;
        do
        {
            if ((_kbhit))			key = _getch();

            switch (key)
            {
            case 'F':case 'f':
                if (driver_inside)
                {
                    cout << "Get out of the car\a" << endl;
                }
                else
                {
                    double fuel;
                    cout << "������� ������� �������: "; cin >> fuel;
                    tank.fill(fuel);
                }
                break;
            case Enter: driver_inside ? get_out() : get_in();	break;
            case 'I':case 'i':	engine.started() ? stop() : start();	break;
            case 'W':case 'w':	accelerate();	break;
            case 'S':case 's':	slow_down();	break;
            case Escape:
                speed = 0;
                stop();
                get_out();
                break;
            }
            if (tank.get_fuel_level() == 0) stop();
            if (speed == 0)speed = 0;
            if (speed == 0 && threads.free_wheeling_thread.joinable())
                threads.free_wheeling_thread.join();
        } while (key != 27);
    }
    void free_wheeling()
    {
        while (speed--)
        {
            if (speed < 0)speed++;
            std::this_thread::sleep_for(1s);
        }
    }
    void engine_idle()
    {
        while (engine.started() && tank.give_fuel(engine.get_consumption_per_second()))
            this_thread::sleep_for(1s);
    }
    void panel()const
    {
        while (driver_inside)
        {
            system("CLS");
            for (int i = 0; i < speed / 3; i++) cout << "|"; cout << endl;
            cout << "Fuel level:\t" << tank.get_fuel_level() << " liters.\t";
            if (tank.get_fuel_level() < 5)
            {
                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hConsole, 0xCF);
                cout << " LOW FUEL ";
                SetConsoleTextAttribute(hConsole, 0x07);
            }
            cout << endl;
            cout << "Engine is " << (engine.started() ? "started" : "stopped") << endl;
            cout << "Speed:    " << speed << " km/h\n";
            std::this_thread::sleep_for(100ms);
        }
    }
    void info()const
    {
        engine.info();
        tank.info();
    }
};

//#define TANK_CHECK
//#define ENGINE

void main()
{
    setlocale(LC_ALL, "");

#ifdef TANK_CHECK
    // ���� ���������� tank_check, �� ��� ��������� ��� �� ��������� #endif ����� ����� �����������.
    Tank tank(70);
    int fuel = 0;
    do
    {
        cout << "������� ������� ������� �� ������ ���������: ";
        cin >> fuel;
    } while (fuel == 0);
    tank.fill(fuel);
    tank.info();
#endif // tank_check

#ifdef ENGINE
    Engine engine(10);
    engine.info();
#endif // ENGINE

    Car bmw;
    bmw.info();
    bmw.control();
}