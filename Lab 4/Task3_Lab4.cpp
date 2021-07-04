#include <bits/stdc++.h>
using namespace std;

class StudentResult{
private:
    static int const passingMark=33;
    int subjectMark[6];
    bool pass;
public:

    void displayMarks(){
        for(int i=0;i<sizeof(subjectMark)/sizeof(int);i++){
            cout << subjectMark[i] << ' ';
        }
    }
    void setMarks(int m[]){
        for(int i=0;i<sizeof(subjectMark)/sizeof(int);i++){
            subjectMark[i]=m[i];
        }
    }
    void checkPassing(){
        pass=true;
        //cout << passingMark <<' ';
        for(int i=0;i<sizeof(subjectMark)/sizeof(int);i++){
            //cout << subjectMark[i] << ' ';
            if(subjectMark[i]<passingMark){
                cout << subjectMark[i];
                pass=false;
                break;
            }
        }
        if(pass=true) cout << "\nStudent has passed the semester.Congratulations!!!";
        else if(pass=false) cout << "\nStudent has failed.Try again next year";
    }
};
int main()
{
    StudentResult s;
    int a[]={32,75,80,90,45,65};
    s.setMarks(a);
    s.displayMarks();
    s.checkPassing();
}
