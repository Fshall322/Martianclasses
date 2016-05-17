#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Martian {
private :
    string color;
    int numOfEyes;
    double height;
    int Iq;

public :
    void setColor(string);
    string getColor();
    void setNumOfEyes(int);
    int getNumOfEyes();
    void setHeight(double);
    double getHeight();
    void setIq(int);
    int getIq();
};

int main(int argc, char** argv) {

    Martian george, penelope, cas;
    //george.setColor("");
    george.setNumOfEyes(13);
    george.setHeight(8.5);
    george.setIq(100);
    penelope.setColor("yellow");
    penelope.setNumOfEyes(5);
    penelope.setHeight(7.6);
    penelope.setIq(125);
    string color;
    int eyes;
    int Iq;
    double height;

    cout<<"Please set the color for cas"<<endl;
    cin>>color;
    cas.setColor(color);
    cout<<"Cas's color is: "<<cas.getColor();

    //cout<<"Martian1 is "<<george.getColor()<<endl;
    return 0;
}

void Martian :: setColor(string c){
    color = c;
}

string Martian :: getColor(){
    return color;
}

void Martian :: setNumOfEyes(int n){
    numOfEyes = n;
}
int Martian :: getNumOfEyes(){
    return numOfEyes;
}

void Martian :: setHeight(double h){
    height = h;
}

double Martian :: getHeight(){
    return height;
}

void Martian :: setIq(int i){
    Iq = i;
}

int Martian :: getIq(){
    return Iq;
}