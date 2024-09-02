#include <string>
#include <iomanip>

using namespace std;

class Plant {
    public:
        Plant::Plant(string species, string plantName, bool indoor) {
            this->plantName = plantName;
            this->species = species;
            this->indoor = indoor;
        }
        void setWateringFrequency(string species) {
            // get watering frequency from API
        }
        string getWateringFrequency() {
            return wateringFrequency;
        }
        string getIndoor() {
            return indoor;
        }
    private:
        string plantName;
        string wateringFrequency;
        string species;
        bool indoor;
};
