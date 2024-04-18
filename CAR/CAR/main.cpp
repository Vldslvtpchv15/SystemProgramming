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
//// директива define создает макроопределение
//
//#define ENGINE
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//#ifdef TANK_CHECK
//    // если определено tank_check, то нже следующий код до директивы #endif будет виден компил€тору.
//    Tank tank(70);
//    int fuel = 0;
//    do
//    {
//        cout << "¬ведите сколько топлива вы хотите заправить: ";
//        cin >> fuel;
//    } while (fuel == 0);
//    tank.fill(fuel);
//    tank.info();
//#endif // tank_check
//    
//    Engine engine(10);
//    engine.info();
//}

#include <iostream>
#include <conio.h>
using namespace std;
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
    double getConsumption_per_second()const
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

class Car
{
    Engine engine;
    Tank tank;
    bool driver_inside;
public:
    Car(int consumption = 10, int volume = 60) : engine(consumption), tank(volume), driver_inside(false)
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
        panel();
    }

    void get_out()
    {
        driver_inside = false;
        cout << "Out of the car" << endl;
    }
    
    void control()
    {
        char key;
        do
        {
            key = _getch();
            switch (key)
            {
            case 13: driver_inside ? get_out() : get_in(); break;
                break;
            }
        } while (key != 27);
        
    }

    void panel() const
    {
        while (driver_inside)
        {
            system("CLS");
            cout << "Fuel level:\t" << tank.get_fuel_level() << "liters.\n";
            cout << "Engine is " << (engine.started() ? "started" : "stopped") << endl;
        }
    }
    
    void info() const
    {
        engine.info();
        tank.info();
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Tank tank(70);
    /*int fuel = 0;
    do
    {
        cout << "¬ведите сколько топлива вы хотите заправить: ";
        cin >> fuel;
    }while (fuel == 0);
    tank.fill(fuel);
    tank.info();*/
#ifdef TANK_CHECK
        // если определено tank_check, то нже следующий код до директивы #endif будет виден компил€тору.
        Tank tank(70);
        int fuel = 0;
        do
        {
            cout << "¬ведите сколько топлива вы хотите заправить: ";
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
