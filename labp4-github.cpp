/*Smartphone Operations*/
#include <bits/stdc++.h>
using namespace std;
class Smartphone
{
public:

    virtual void takeSelfie()=0;
    virtual void makeCall()=0;
};
class Andriod:public Smartphone
{
public:
    void takeSelfie()
    {
        cout<<"Andriod take Selfie!"<<endl;
    }
    void makeCall()
    {
        cout<<"Andriod make Call"<<endl;
    }
};
class Iphone:public Smartphone
{
public:
    void takeSelfie()
    {
        cout<<"Iphone take Selfie!"<<endl;
    }
    void makeCall()
    {
        cout<<"Iphone make Call;"<<endl;
    }
    };
    int main()
    {
        Smartphone*phone1 =new Andriod();
        Smartphone*phone2 =new Iphone();
//calling function use (->)
        phone1->takeSelfie();
        phone1->makeCall();
        cout<<" "<<endl;
        phone2->takeSelfie();
        phone2->makeCall();
//Relesing allocted memory:
        delete phone1;
        delete phone2;
        return 0;
    }
