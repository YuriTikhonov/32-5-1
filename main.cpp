#include <string>
#include <fstream>
#include <unordered_map>
#include <clocale>
#include <nlohmann/json.hpp>


struct Movie
{
    std::string movieTitle;
    std::string country;
    std::string productionDate;
    std::string company;
    std::string scriptAuthor;
    std::string director;
    std::string producer;
    std::unordered_map<std::string,std::string>actors;
};

int main()
{
    setlocale(LC_CTYPE, "Russian");
    Movie movie;
    std::ofstream file("movie.json");
    nlohmann::json dict = {
            {"movie title",movie.movieTitle = "Место встречи изменить нельзя"},
            {"country",movie.country = "СССР"},
            {"productionDate",movie.productionDate = "1979"},
            {"company",movie.company = "Одесская киностудия"},
            {"scriptAuthor",movie.scriptAuthor = "Станислав Говорухин"},
            {"Actors:", movie.actors = {{"Глеб Жеглов",    "Владимир Высоцкий"},
                                        {"Володя Шарапов", "Владимир Конкин"},
                                        {"Груздев",        "Сергей Юрский"},
                                        {"Пётр Ручников",  "Евгений Евстигнеев"},
                                        {"Манька Облигация","Лариса Удовиченко"}
            }
            }
    };
    file << dict;

    return 0;
}