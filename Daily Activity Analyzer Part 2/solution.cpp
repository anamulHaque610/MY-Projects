#include<bits/stdc++.h>
using namespace std;

int main()
{
    int choice;
    cout<<"=========================="<<endl;
    cout<<"Daily Activities Analyzer"<<endl;
    cout<<"=========================="<<endl;
    
    //menu
    while(true)
    {
    cout<<"1.Analyze Daily Activity"<<endl;
    cout<<"2.View Previous Reports"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Enter Your Choice:";
    cin>>choice;
    if(choice==1)
    {
      string date;
    cout<<"Enter Date(DD:MM:YYYY)"<<endl;
    cin>>date;
    cout<<"\nDate:"<<date<<endl;

    float studies_hours,reels_hours,sleep_hours;

    cout<<endl<<"Activities 1: "<<endl;

    cout<<"Study Hours:";
    cin>>studies_hours;
    cout<<studies_hours<<" hrs"<<endl;

    cout<<endl;
    cout<<"Activities 2:"<<endl;
    cout<<"Reels/Youtube: ";
    cin>>reels_hours;
    cout<<reels_hours<<" hrs"<<endl;

    cout<<endl;
    cout<<"Activities 3:"<<endl;
    cout<<"Sleep Hours: ";
    cin>>sleep_hours;
    cout<<sleep_hours<<" hrs"<<endl;


    // Validation
    if(studies_hours<0 || reels_hours<0 || sleep_hours<0)
    {
        cout<<"Invalid! Hours cannot be negative."<<endl;
        return 0;
    }

    if((studies_hours+reels_hours+sleep_hours)>24)
    {
        cout<<"Invalid! Total hours cannot be more than 24."<<endl;
        return 0;
    }


    // Free Time
    float Free_hours=24-(studies_hours+sleep_hours+reels_hours);

    cout<<endl<<"Free Time:";
    cout<<Free_hours<<" hrs"<<endl;


    // Study Warning
    if(studies_hours<4)
    {
        cout<<endl<<"Alarming About Study!!"<<endl;
        cout<<"Advice"<<endl;
        cout<<"You must study more than 4 hours"<<endl;
    }
    else
    {
        cout<<"Congratulations! You Finished Your Daily Studies"<<endl;
    }


    // Sleep Warning
    if(sleep_hours<7)
    {
        cout<<endl<<"!!Alarming About Sleep"<<endl;
        cout<<"Advice"<<endl;
        cout<<"You must Sleep more than 7 hours"<<endl;
    }
    else
    {
        cout<<"Congratulation! You Fulfilled Your Sleep plan"<<endl;
    }


    // Activities Percentage
    cout<<endl<<"My Activities Percentage"<<endl;
    cout<<"==================================="<<endl;

    float Study_percentage=(studies_hours/24)*100;
    cout<<"Study Time:"<<Study_percentage<<"%"<<endl;

    float Sleep_percentage=(sleep_hours/24)*100;
    cout<<endl<<"Sleep Time:"<<Sleep_percentage<<"%"<<endl;

    float Reels_percentage=(reels_hours/24)*100;
    cout<<endl<<"Reels/Youtube Time:"<<Reels_percentage<<"%"<<endl;

    float Free_time_percentage=(Free_hours/24)*100;
    cout<<endl<<"Free Time Percentage:"<<Free_time_percentage<<"%"<<endl;


    // Daily Activity Score
    cout<<endl<<"Daily Activity Score"<<endl;
    cout<<"================================="<<endl;

    int study_rating,reels_rating,sleep_rating;


    // Study Rating
    cout<<"My Study Rating: ";

    if(studies_hours>=6)
    {
        study_rating=4;
    }
    else if(studies_hours>=4)
    {
        study_rating=3;
    }
    else
    {
        study_rating=0;
    }

    cout<<study_rating<<endl;


    // Reels Rating
    cout<<"My Reels Rating: ";

    if(reels_hours<=3)
    {
        reels_rating=3;
    }
    else if(reels_hours<=5)
    {
        reels_rating=2;
    }
    else
    {
        reels_rating=1;
    }

    cout<<reels_rating<<endl;


    // Sleep Rating
    cout<<"My Sleep Rating: ";

    if(sleep_hours>=7)
    {
        sleep_rating=3;
    }
    else if(sleep_hours>=5)
    {
        sleep_rating=2;
    }
    else if(sleep_hours>=3)
    {
        sleep_rating=1;
    }
    else
    {
        sleep_rating=0;
    }

    cout<<sleep_rating<<endl;


    // Total Rating
    int total_rating = study_rating+reels_rating+sleep_rating;

    cout<<endl<<"My Performance:"<<total_rating<<"/10"<<endl;


    // Daily Report
    cout<<endl;
    cout<<"==========================="<<endl;
    cout<<"       Daily Report"<<endl;
    cout<<"==========================="<<endl;

    cout<<endl<<"Date:"<<date<<endl;
    cout<<"Study Hours:"<<studies_hours<<" hrs"<<endl;
    cout<<"Reels Hours:"<<reels_hours<<" hrs"<<endl;
    cout<<"Sleep Hours:"<<sleep_hours<<" hrs"<<endl;
    cout<<"Free Hours:"<<Free_hours<<" hrs"<<endl;

    cout<<endl;
    cout<<"Study Rating:"<<study_rating<<"/4"<<endl;
    cout<<"Reels Rating:"<<reels_rating<<"/3"<<endl;
    cout<<"Sleep Rating:"<<sleep_rating<<"/3"<<endl;

    cout<<endl;
    cout<<"My Performance:"<<total_rating<<"/10"<<endl;


    // Performance Message
    if(total_rating>=9)
    {
        cout<<"Excellent Performance"<<endl;
    }
    else if(total_rating>=7)
    {
        cout<<"Good Performance"<<endl;
    }
    else if(total_rating>=5)
    {
        cout<<"Average Performance"<<endl;
    }
    else
    {
        cout<<"Need Improvement"<<endl;
    }


    // File Handling
    ofstream file("daily_report.txt",ios::app);

    if(!file)
    {
        cout<<endl<<"File Open Failed!"<<endl;
        return 0;
    }

    file<<"==========================="<<endl;
    file<<"       Daily Report"<<endl;
    file<<"==========================="<<endl;

    file<<"Date: "<<date<<endl;
    file<<"Study Hours: "<<studies_hours<<" hrs"<<endl;
    file<<"Reels Hours: "<<reels_hours<<" hrs"<<endl;
    file<<"Sleep Hours: "<<sleep_hours<<" hrs"<<endl;
    file<<"Free Hours: "<<Free_hours<<" hrs"<<endl;

    file<<endl;
    file<<"Study Rating: "<<study_rating<<"/4"<<endl;
    file<<"Reels Rating: "<<reels_rating<<"/3"<<endl;
    file<<"Sleep Rating: "<<sleep_rating<<"/3"<<endl;

    file<<endl;
    file<<"My Performance: "<<total_rating<<"/10"<<endl;

    if(total_rating>=9)
    {
        file<<"Excellent Performance"<<endl;
    }
    else if(total_rating>=7)
    {
        file<<"Good Performance"<<endl;
    }
    else if(total_rating>=5)
    {
        file<<"Average Performance"<<endl;
    }
    else
    {
        file<<"Need Improvement"<<endl;
    }

    file<<endl;

    file.close();

    cout<<endl<<"Report Saved Successfully!"<<endl;

    }
    //view previous reports
    if(choice==2){
        ifstream readfile("daily_report.txt");
        string line;
        if(!readfile)
    {
        cout<<"No Previous Report Found!"<<endl;
        return 0;
    }
        while(getline(readfile,line))
        {
            cout<<line<<endl;
        
        }
        readfile.close();
    }
    //exit
    if(choice==3)
    {
        cout<<"Thank you our Program is exit."<<endl;
        break;
    }
}
   return 0;
}