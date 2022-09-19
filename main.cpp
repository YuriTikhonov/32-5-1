#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann_json/include/nlohmann/json.hpp"

struct Movie
{
    std::string country;
    std::string productionDate;
    std::string company;
    std::string scriptAuthor;
    std::string director;
    std::string producer;




};

int main()
{
    Movie movie;
   // std::cin >> record.name >> record.family >> record.age >> record.married;
    std::ofstream file("movie.json");
    //file << "{" << "\"name\": \""<< record.name << "\", \"family\": \"" << record.family <<   "\"}" << std::endl;
    /*nlohmann::json dict;
    dict["name"] = record.name;
    dict["family"] = record.family;
    dict["age"] = record.age;
    dict["married"] = record.married;*/
    nlohmann::json dict = {
            {"country",movie.country = "Italy"},
            {"productionDate",movie.productionDate = "1976"},
            {"company",movie.company = "uknown"},
            {"scriptAuthor",movie.scriptAuthor = "Sergio Korbucci"}

    };
    file << dict;

    return 0;
}