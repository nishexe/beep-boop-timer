#include<iostream>
#include<windows.h>
#include<thread>
using namespace std;
void beep_boop();
int main(int argc, char **argv){
    system("cls");
    if(argc < 2){
        cerr<<"Please Specify Time In Seconds!"<<"\n";
    }else if(argc > 2){
        cerr<<"Invalid Number Of Arguments Recieved!"<<"\n";
    }else{
        int counts = atoi(argv[1]);
        bool timer_ended = false;
        while(counts != 0){
            int hours = counts / 3600;
            int minsec = counts % 3600;
            int mins = minsec / 60;
            int secs = minsec % 60;
            cout<<"H:"<<hours<<" M:"<<mins<<" S:"<<secs<<"\n";
            this_thread::sleep_for(chrono::milliseconds(1000));
            system("cls");
            counts--;
        }
        if (counts == 0) timer_ended = true;
        if(timer_ended){
            beep_boop();
        }
    }
}
void beep_boop(){
    system("cls");
    cout<<"TIMER ENDED!"<<"\n";
    while(true){
        Beep(300,500);
    }
}