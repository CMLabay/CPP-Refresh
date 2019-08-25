#include <iostream>
#include <sstream>
using namespace std;

// You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions:

// get_age, set_age
// get_first_name, set_first_name
// get_last_name, set_last_name
// get_standard, set_standard
class Student{
    private:
        string first_name, last_name;
        int age, standard;
    public:
        void set_first_name(string fname){
            first_name = fname;
        }
        void set_last_name(string lname){
            last_name = lname;
        }
        void set_standard(int stan){
            standard = stan;
        }
        void set_age(int bage){
            age = bage;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string to_string(){
            string str = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return str;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

