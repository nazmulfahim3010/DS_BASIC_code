#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    double cgpa=0.0;
    int marks=0;
    public:
    string name;
    string id;

    double check_cgpa(){
        return cgpa;
    }
    double check_marks(){
        return marks;
    }
    void add_marks(int new_marks){
        marks+=new_marks;
    }
    void claculate_gpa(){
        if(marks>=80){
        cout<<"4.00";
        }
        else{
            cout<<"not eligable";
        }
    }

};
int main(){
    

}
