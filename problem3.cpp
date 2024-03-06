#include <iostream>
#include <vector>
#include <map>

using namespace std;

//class Student{
//private:
//    string name;
//    long int id;
//    string groupn;
//public:
//    Student(string n, long int id, string gn){
//        this -> name = n;
//        this -> id = id;
//        this -> groupn = gn;
//    };
//
//    string getgn(){
//        return this -> groupn;
//    }
//};

int main(){
//    vector<Student> a;
    string name, gn;
    long int id;
    bool found = false;
    int n; cin >> n;
    map<string, int> grn;

    for(int i = 0; i < n; i++){
        cin >> name >> id >> gn;
        grn[gn] += 1;
        //a.emplace_back(name, id, gn);
    }
    for(auto i:grn){
        cout << i.first << ":" << i.second << endl;
    }
}