#include <iostream>
#include <map>
#include <vector>
#include <numeric>    
#include <string>
using namespace std;

int main(){
    map<string,vector<int>>students;

    students["Alice"] ={80,90,85};
    students["Bob"] ={75,65,70};
    students["Charlie"] ={90,88,92};

    cout<<"Student Records:\n";
    map<string, double>averages; 

    for(const auto& entry : students){
        const string& name = entry.first;
        const vector<int>& marks = entry.second;
        double avg = accumulate(marks.begin(), marks.end(), 0.0) / marks.size();
        averages[name] = avg;

        cout<<"Student: "<<name<<", Marks: ";
        for(int mark : marks){
            cout<<mark<<" ";
        }
        cout<<", Average: "<<avg<<endl;
    }

    string topperName;
    double maxAvg = 0.0;

    for(const auto& entry : averages){
        if(entry.second > maxAvg){
            maxAvg = entry.second;
            topperName = entry.first;
        }
    }
    cout <<"\nTopper: "<<topperName<<" with average "<<maxAvg<<endl;
}
