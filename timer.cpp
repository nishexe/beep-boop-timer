#include<iostream>
#include<windows.h>
#include<thread>
using namespace std;
int main(int argc, char **argv){
    if(argc < 2){
        cerr<<"Please Specify Time In Minutes!"<<"\n";
    }else if(argc > 2){
        cerr<<"Invalid Number Of Arguments Recieved!"<<"\n";
    }
    int counts = atoi(argv[1]);
    // cout<<"COUNTS: "<<counts<<"\n";
    while(counts != 0){
        int hours = counts / 3600;
        int minsec = counts % 3600;
        int mins = minsec / 60;
        int secs = minsec % 60;
        cout<<"HOURS: "<<hours<<" MINS: "<<mins<<" SECS: "<<secs<<"\n";
        this_thread::sleep_for(chrono::milliseconds(1000));
        counts--;
    }


    //When the timer finishes, this beep will played.
    // while(true){
    //     Beep(300,500);
    // }
}