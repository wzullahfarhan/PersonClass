#include<iostream>
using namespace std;
class Person{
    private:
    string Name;
    int Age;
    protected:
    string Gender;
    public:
    Person(){
        cout<<"Person Empty Constractor"<<endl;
    }
    Person(string n,int a,string m){
        Name=n;
        Age=a;
        Gender=m;
    }
    void SetName(string n){
        Name=n;
    }
    string GetName(){
        return Name;
    }
    void SetAge(int a){
        Age=a;
    }
    int GetAge(){
        return Age;
    }
    void SetGender(string n){
        Gender=n;
    }
    string GetGender(){
        return Gender;
    }
    void ShowPerInfo(){
        cout<<"Name is: "<<Name<<endl;
        cout<<"Age is: "<<Age<<endl;
        cout<<"Gender is: "<<Gender<<endl;
    }
    ~Person(){
        cout<<"Person Desconstructor"<<endl;
    }
};
class Student:public Person{
    private:
    int StudentId;
    protected:
    float Cgpa;
    public:
    string Department;
    Student(){
        cout<<"Student empty Constructor"<<endl;
    }
    Student(string n,int a,string g,float c,string d):Person(n,a,g){
        Cgpa=c;
        Department=d;
    }
    void ShowStdinfo(){
        ShowPerInfo();
        cout<<"Student Cgpa Is: "<<Cgpa<<endl;
        cout<<"Department is: "<<Department<<endl;
    }
    ~Student(){
        cout<<"Student Destructor"<<endl;
    }
};
class Teacher:public Person{
    private:
    float Salary;
    int EmployeeId;
    string Faculty;
    public:
    void SetSelary(float s){
        Salary=s;
    }
    float GetSelary(){
        return Salary;
    }
    void SetId(int a){
        EmployeeId=a;
    }
    float GetId(){
        return EmployeeId;
    }
    void SetFaculty(string n){
        Faculty=n;
    }
    string GetFaculty(){
        return Faculty;
    }
    void ShowTeacherInfo(){
        ShowPerInfo();
        cout<<"Salary is: "<<Salary<<endl;
        cout<<"Employee id is: "<<EmployeeId<<endl;
        cout<<"Faculty is: "<<Faculty<<endl;
    }
};
class Officer:public Person{
    private:
    int WorkingHour;
    int OverTime;
    public:
    float payment;
    Officer(){
        cout<<"Officer Empty Constructor"<<endl;
    }
    Officer(string n,int a,string m, int w,int o):Person(n,a,m){
        WorkingHour=w;
        OverTime=o;
    }
    void Payment(float a){
        payment=a;
    }
    void ShowOfficerInfo(){
        ShowPerInfo();
        cout<<"Working Hour is: "<<WorkingHour<<endl;
        cout<<"Over Time is: "<<OverTime<<endl;
        cout<<"Basic Payment : "<<payment<<endl;
        cout<<"Over Time payment: "<<2000*OverTime<<endl;
        cout<<"Net Payment is: "<<payment+(2000*OverTime)<<endl;
    }
    ~Officer(){
        cout<<"Officer Disconstructor "<<endl;
    }
};

int main(){
    Person a1("Ravid", 20 , "male");
    Student b1("farhan",21,"male",3.12,"cse");
    Teacher c1;
    c1.SetName("Wazeh");
    c1.SetAge(25);
    c1.SetGender("Male");
    c1.SetSelary(100000);
    c1.SetId(501);
    c1.SetFaculty("English");
    Officer d1("Shetu",22,"Female",8,2);
    d1.Payment(15000);
    cout<<"Person Details----\n"<<endl;
    a1.ShowPerInfo();
    cout<<endl;
    cout<<endl;
    cout<<"Student Details----\n"<<endl;
    b1.ShowStdinfo();
    cout<<endl;
    cout<<endl;
    cout<<"Teacher Details----\n"<<endl;
    c1.ShowTeacherInfo();
    cout<<endl;
    cout<<endl;
    cout<<"Officer Details----\n"<<endl;
    d1.ShowOfficerInfo();
    cout<<endl;
    cout<<endl;
}