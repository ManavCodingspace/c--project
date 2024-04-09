#include <iostream>
#include <vector>
#include <string>

struct Class {
    std::string name;
    int duration;
};

class TimetableGenerator {
private:
    std::vector<Class> classes;
    int time;

public:
    TimetableGenerator() : time(8) {}

    void addClass(const std::string& name, int duration) {
        classes.push_back({name, duration});
    }

    void generateTimetable() {
        for (const auto& c : classes) {
            std::cout << "Time: " << time << ":00 - " << time + c.duration << ":00: " << c.name << std::endl;
            time += c.duration;
            if (time == 12) {
                std::cout << "Break: 12:00 - 13:00" << std::endl;
                time = 13;
            }
        }
    }
};

int main() {
    TimetableGenerator tg;

    tg.addClass("Math", 2);
    tg.addClass("Physics", 2);
    tg.addClass("English", 2);
    tg.addClass("Chemistry", 2);
    tg.addClass("Biology", 2);

    tg.generateTimetable();

    return 0;
}