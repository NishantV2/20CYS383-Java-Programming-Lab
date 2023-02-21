#include<iostream>
using namespace std;

class IPL{
public:
void schedule()
{
cout << "Match No : 1 " "Date : 25/03/2022 " "Mumbai Indians VS Chennai Super Kings " "Location : Wankhede Staidum " "Time : 20:00 IST\n";
cout << "Match No : 2 " "Date : 26/03/2022 " "Royal Challengers Bangalore VS Sunrisers Hyderbad " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
cout << "Match No : 3 " "Date : 27/03/2022 " "Chennai Super Kings VS Kolkata Knight Riders " "Location : Eden Gardens " "Time : 20:00 IST\n";
cout << "Match No : 4 " "Date : 28/03/2022 " "Mumbai Indians VS Royal Challengers Bangalore " "Location : Arun Jaitley Stadium " "Time : 20:00 IST\n";
cout << "Match No : 5 " "Date : 29/03/2022 " "Sunrisers Hyderbad VS Kolkata Knight Riders " "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
cout << "Match No : 6 " "Date : 31/03/2022 " "Mumbai Indians VS Kolkata Knight Riders " "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
cout << "Match No : 7 " "Date : 01/04/2022 " "Chennai Super Kings VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 16:00 IST\n";
cout << "Match No : 8 " "Date : 01/04/2022 " "Royal Challengers Bangalore VS Kolkata Knight Riders " "Location : Wankhede Stadium " "Time : 20:00 IST\n";
cout << "Match No : 9 " "Date : 02/04/2022 " "Mumbai Indians  VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 20:00 IST\n";
cout << "Match No : 10 " "Date : 03/04/2022 " "Chennai Super Kings  VS Royal Challengers Bangalore " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
}
void cskschedule()
{
    cout << "Match No : 1 " "Date : 25/03/2022 " "Mumbai Indians VS Chennai Super Kings " "Location : Wankhede Staidum " "Time : 20:00 IST\n";
    cout << "Match No : 3 " "Date : 27/03/2022 " "Chennai Super Kings VS Kolkata Knight Riders " "Location : Eden Gardens " "Time : 20:00 IST\n";
    cout << "Match No : 7 " "Date : 01/04/2022 " "Chennai Super Kings VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 16:00 IST\n";
    cout << "Match No : 10 " "Date : 03/04/2022 " "Chennai Super Kings  VS Royal Challengers Bangalore " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
}
void mischedule()
{
 cout << "Match No : 1 " "Date : 25/03/2022 " "Mumbai Indians VS Chennai Super Kings " "Location : Wankhede Staidum " "Time : 20:00 IST\n";   
 cout << "Match No : 4 " "Date : 28/03/2022 " "Mumbai Indians VS Royal Challengers Bangalore " "Location : Arun Jaitley Stadium " "Time : 20:00 IST\n";
 cout << "Match No : 6 " "Date : 31/03/2022 " "Mumbai Indians VS Kolkata Knight Riders " "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
 cout << "Match No : 9 " "Date : 02/04/2022 " "Mumbai Indians  VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 20:00 IST\n";
}
void srhschedule()
{
    cout << "Match No : 2 " "Date : 26/03/2022 " "Royal Challengers Bangalore VS Sunrisers Hyderbad " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 5 " "Date : 29/03/2022 " "Sunrisers Hyderbad VS Kolkata Knight Riders " "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 7 " "Date : 01/04/2022 " "Chennai Super Kings VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 16:00 IST\n";
    cout << "Match No : 9 " "Date : 02/04/2022 " "Mumbai Indians  VS Sunrisers Hyderbad " "Location : Eden Garden " "Time : 20:00 IST\n";
}
void rcbschedule()
{
    cout << "Match No : 2 " "Date : 26/03/2022 " "Royal Challengers Bangalore VS Sunrisers Hyderbad " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 4 " "Date : 28/03/2022 " "Mumbai Indians VS Royal Challengers Bangalore " "Location : Arun Jaitley Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 8 " "Date : 01/04/2022 " "Royal Challengers Bangalore VS Kolkata Knight Riders " "Location : Wankhede Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 10 " "Date : 03/04/2022 " "Chennai Super Kings  VS Royal Challengers Bangalore " "Location : Chinnaswamy Stadium " "Time : 20:00 IST\n";
}
void kkrschedule()
{
    cout << "Match No : 3 " "Date : 27/03/2022 " "Chennai Super Kings VS Kolkata Knight Riders " "Location : Eden Gardens " "Time : 20:00 IST\n";
    cout << "Match No : 5 " "Date : 29/03/2022 " "Sunrisers Hyderbad VS Kolkata Knight Riders" "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 6 " "Date : 31/03/2022 " "Mumbai Indians VS Kolkata Knight Riders " "Location : Chidambaram Stadium " "Time : 20:00 IST\n";
    cout << "Match No : 8 " "Date : 01/04/2022 " "Royal Challengers Bangalore VS Kolkata Knight Riders " "Location : Wankhede Stadium " "Time : 20:00 IST\n";
}

};

void sus(IPL obj,int x){
    cout << "------- Indian Premier League Scheduler !---------\n\n";
cout << "1.View IPL Teams \n";
cout << "2.View Team Players \n";
cout << "3.View Match Scheduling \n";
cout << "4.View Details of your Favourite Team \n";
cout << "5.View Stadiums \n";
int choice;
cout << "Enter your Choice : ";
cin >> choice;
if (choice == 1)
{
    cout << "1. Chennai Super Kings (CSK) \n";
    cout << "2. Mumbai Indians (MI) \n";
    cout << "3. Royal Challengers Bangalore (RCB) \n";
    cout << "4. Sunrisers Hyderbad (SRH) \n";
    cout << "5. Kolkata Knight Riders (KKR) \n";
}
else if (choice == 2)
{
    string a;
    cout << "Enter the Team Name to View their Players : ";
    cin >> a;
    if (a == "ChennaiSuperKings" || a == "CSK" || a == "Csk")
    {
        cout << "1.  MS Dhoni (Captain + Wicket Keeper)\n";
        cout << "2.  Ravindra Jadeja (All - Rounder)\n";
        cout << "3.  Ruturaj Gaikwad (Batter) \n";
        cout << "4.  Deepak Chahar (Bowler) \n";
        cout << "5.  Ambati Rayudu (Batter) \n";
        cout << "6.  Robin Uthappa (All Rounder + Wicket Keeper)\n";
        cout << "7.  Moeen Ali (All Rounder)\n";
        cout << "8.  Shivam Dube (Bowler) \n";
        cout << "9.  KM Asif (Bowler)\n";
        cout << "10. Devon Conway ( Batter)\n";
        cout << "11. Narayan Jagadeesan (Batter)\n";
    }
    else if (a == "MumbaiIndians" || a == "MI" || a == "Mi")
    {
        cout << "1.  Rohit Sharma (Captain + Batter )\n";
        cout << "2.  Suryakumar Yadav (Batter) \n";
        cout << "3.  Tim David (Batter) \n";
        cout << "4.  Tilak Varma (Batter) \n";
        cout << "5.  Ramandeep Singh (All Rounder) \n";
        cout << "6.  Rahul Buddhi (All Rounder) \n";
        cout << "7.  Daniel Sams (Bowler) \n";
        cout << "9.  Dewald Brevis (All ROunder) \n";
        cout << "10. Aryan Juyal (Wicket Keeper) \n";
        cout << "11. Ishan Kishan (Batter + Wicket Keeper) \n";
        cout << "12. Jasprit Bumrah (Bowler) \n";
    }
    else if(a == "RoyalChallengersBangalore" || a == "RCB" || a == "Rcb")
    {
        cout << "1.Virat Kolhi (Batter) \n";
        cout << "2.Harshal Patel (All-Rounder) \n";
        cout << "3.Dinesh Karthik (Wicket-Keeper) \n";
        cout << "4.Mohammed Siraj (Bowler) \n";
        cout << "5.Maxwell (Batter) \n";
        cout << "6.Faf Du Plessis (Batter) \n";
        cout << "7.Josh Hazelwood (Bowler) \n";
        cout << "8.Anuj Rawat (Wicket-Keeper, All- Rounder) \n";
        cout << "9.David Willey (Batter) \n";
        cout << "10.Siddharth Kaul (Bowler)\n"; 
        cout << "11.Finn Allen (Batter) \n";

    }
    else if(a == "SunrisersHyderbad" || a == "SRH" || a == "Srh")
    {
        cout << "1. Washington Sundar (Bowler + All Rounder) \n";
        cout << "2. Bhuvneshwar Kumar (Captain + Bowler) \n";
        cout << "3. Kartik Tyagi (Bowler) \n";
        cout << "4. T Natarajan (Bowler + All Rounder) \n";
        cout << "5. Umran Malik (Bowler) \n";
        cout << "6. Fazalhaq Farooqi (All Rounder) \n";
        cout << "7. Marco Jansen (Batter) \n";
        cout << "8. Abishek Sharma (Batter) \n";
        cout << "9. Glenn Phillips (All Rounder + Batter ) \n";
        cout << "10.Rahul Tripathi (Batter) \n";
        cout << "11.Aiden Markram (Batter) \n";
    }
    else if(a == "KolkataKnightRiders" || a == "KKR" || a == "Kkr")
    {
        cout << "1. Shreyas Iyer (Batter + Captain) \n";
        cout << "1. Rinku Singh (Batter) \n";
        cout << "1. Nitish Rana (Batter) \n";
        cout << "1. Anukul Roy (Bowler) \n";
        cout << "1. Andre Russell (All Rounder) \n";
        cout << "1. Venkatesh Iyer (All Rounder) \n";
        cout << "1. Umesh Yadav (Batter) \n";
        cout << "1. Harshit Rana (Bowler) \n";
        cout << "1. Tim Southee (Bowler) \n";
        cout << "1. Varun Chakaravarthy (All Rounder) \n";
        cout << "1. Sunil Narine (Batter + All Rounder) \n";
    }
}
    else if (choice == 3)
    {
        obj.schedule();
    }
    else if (choice == 4)
    {
        string b;
        cout << "Enter your Favourite IPL Team to Get Their Schedule : ";
        cin >> b;
        if (b == "ChennaiSuperKings" || b == "CSK" || b == "Csk")
        {
            obj.cskschedule();
        }
        else if (b == "KolkataKnightRiders" || b == "KKR" || b == "Kkr")
        {
            obj.kkrschedule();
        }
        else if(b == "SunrisersHyderbad" || b == "SRH" || b == "Srh")
        {
            obj.srhschedule();
        }
        else if(b == "RoyalChallengersBangalore" || b == "RCB" || b == "Rcb")
        {
            obj.rcbschedule();
        }
        else if (b == "MumbaiIndians" || b == "MI" || b == "Mi")
        {
            obj.mischedule();
        }
    }
else if (choice == 5)
{
    cout << "S No \t" "Stadium Name \t\t" "\tLocation\t\n";
    cout << "1.\t" "Chidambaram Stadium\t\t" "Chennai\t\n";
    cout << "2.\t" "Eden Gardens\t\t" "\tKolkata\t\n";
    cout << "3.\t" "Wankhede Stadium\t\t" "Mumbai\t\n";
    cout << "4.\t" "Chinnaswamy Stadium\t\t" "Bengaluru\t\n";
    cout << "5.\t" "Arun Jaitley Stadium\t\t" "Delhi\t\n";
}
else
{
cout << "Enter a Valid Choice";
}

cout << "1.Exit \n2.Restart again \n Choose one of the options: ";
cin>>x;
if(x != 1 || x != 2)
{
    cout << "Enter a Valid Choice" << endl;
}
}


int main()
{
    IPL obj;
    int x;
do {

    sus(obj,x);
}while(x == 2);
return 0;
}