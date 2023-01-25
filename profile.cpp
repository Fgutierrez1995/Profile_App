#include "profile.hpp"
#include <iostream>

// constructor method
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) {
  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
}

//method to return profile information
std::string Profile::view_profile() {
  std::string bio;
  int list_num = 1;
  bio += "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nCity: " + city;
  bio += "\nCountry: " + country;
  bio += "\nPronouns: " + pronouns + "\n";

  for (int i = 0; i < hobbies.size(); i++) {
    bio += "Hobbies " + std::to_string(list_num) + ": " + hobbies[i] + "\n";
    list_num++;
  }

  return bio;
}

// method to add hobby to vector hobbies
void Profile::new_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}