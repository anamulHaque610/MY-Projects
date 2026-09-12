#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"=========================="<<endl;
    cout<<"Daily Activities Analyzer"<<endl;
    cout<<"=========================="<<endl;
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
    cout<<endl<<"Free Time:";
    float Free_hours=24-(studies_hours+sleep_hours+reels_hours);
    cout<<Free_hours<<" hrs"<<endl;
    if((studies_hours+reels_hours+sleep_hours)>24)
    {
        cout<<"Invalid! Total hours cannot be more than 24. "<<endl;
        return 0;
    }
    
    if(studies_hours<4)
    {
        cout<<endl<<"Alarming About Study!!"<<endl;
        cout<<"Advice"<<endl;
        cout<<"You must study more than 4 hours"<<endl;
    }
    else{
        cout<<"Congratulations! You Finished Your Daily Studies"<<endl;
    }


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
    // Activities Percentage Calculation
    cout<<endl<<"My Activities Percentage"<<endl;
    cout<<"==================================="<<endl;
    cout<<"Study Time:";
    float Study_percentage= (studies_hours/24)*100;
    cout<<Study_percentage<<"%"<<endl;
    cout<<endl<<"Sleep Time:";
    float Sleep_percentage= (sleep_hours/24)*100;
    cout<<Sleep_percentage<<"%"<<endl;
    cout<<endl<<"Reels/Youtube Time:";
    float Reels_percentage= (reels_hours/24)*100;
    cout<<Reels_percentage<<"%"<<endl;
    
    cout<<endl<<"Free Time Percentage";
    float Free_time_percentage= (Free_hours/24)*100;
    cout<<Free_time_percentage<<"%"<<endl;
    cout<<endl<<"Daily Activity Score"<<endl;
    cout<<"================================="<<endl;
    //rating
    int study_rating,reels_rating,sleep_rating;
   
    //study rating
    cout<<"My Study Rating: ";
    
    if(studies_hours>=6)
    {
        study_rating=4;

    }
    else if(studies_hours>=4)
    {
        study_rating=3;
    }
    else{
        study_rating=0;
    }
    cout<<study_rating<<endl;

    
    //reels rating

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
    
    
    //sleep rating
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
    else{
        sleep_rating=0;
    }
    cout<<sleep_rating<<endl;
    int total_rating = study_rating+reels_rating+sleep_rating;
    
    cout<<endl<<"My Performance:"<<total_rating<<"/10"<<endl;
    cout<<endl;
    cout<<"==========================="<<endl;
    cout<<"       Daily Reports"<<endl;
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
    cout<<endl;
    if(total_rating>=9)
    {
        cout<<"Excellent Day"<<endl;
    }
   else if(total_rating>=7)
    {
        cout<<"Very Good Day"<<endl;
    }
   else if(total_rating>=5)
    {
        cout<<"Good Day"<<endl;
    }
    else
    {
        cout<<"Need Improvement"<<endl;
    }
    return 0;
}  
    


