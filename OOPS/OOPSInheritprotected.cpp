#include<iostream>
using namespace std;
class Human
{
    protected://protected members can only be accessed by same class or inherited class
    string name;
    int weight;
    float height;
    public:
    string get_name()//we can also make Human() constructor but practice ;>
    {
        return this->name;
    }
    int get_weight()
    {
        return this->weight;
    }
    float get_height()
    {
        return this->height;
    }
    void set_details(string name,int weight,float height)
    {
        this->name=name;
        this->weight=weight;
        this->height=height;
    }
};
class Male: public Human
{
    protected:
    int age;
    public:
    int get_age()
    {
        return this->age;
    }
    void set_age(int age)
    {
        this->age=age;
    }
};
class Female: protected Human// we inherited in protected mode so we can inherit parent class members
{
    protected:
    int age;
    public:
    int get_age()
    {
        return this->age;
    }
    string get_name()
    {
        return this->name;
    }
    int get_weight()
    {
        return this->weight;
    }
    float get_height()
    {
        return this->height;
    }
    void set_details(string name,int weight,float height)
    {
        this->name=name;
        this->weight=weight;
        this->height=height;
    }
    void set_age(int age)
    {
        this->age=age;
    }
};
int main()
{
    Male yash;
    yash.set_details("Yashvardhan Ahuja",65,6.1);
    yash.set_age(19);
    cout<<"MALE:-"<<endl;
    cout<<"Name: "<<yash.get_name()<<endl;
    cout<<"Age: "<<yash.get_age()<<endl;
    cout<<"Weight: "<<yash.get_weight()<<endl;
    cout<<"Height: "<<yash.get_height()<<" ft"<<endl;


    Female urva;
    urva.set_details("Urvashi Ahuja",43,5.3);
    urva.set_age(14);
    cout<<"FEMALE:-"<<endl;
    cout<<"Name: "<<urva.get_name()<<endl;
    cout<<"Age: "<<urva.get_age()<<endl;
    cout<<"Weight: "<<urva.get_weight()<<endl;
    cout<<"Height: "<<urva.get_height()<<" ft"<<endl;

    
    return 0;
}
/*
  base class    inherited   result

  public        public      public
  public        private     private
  public        protected   protected

  protected     public      protected
  protected     private     private
  protected     protected   protected

  #private members cannot be inherited

  private       public      not accessible
  private       private     not accessible
  private       protected   not accessible

*/