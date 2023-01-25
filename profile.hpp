#include <vector>
#include <string>

class Profile {
  // Private attributes
  private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

  // Public Methods
  public:

    // constructor method 
    Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");

    // display profile method 
    std::string view_profile();
    
    // add hobbies to profile method 
    void new_hobby(std::string new_hobby);
};