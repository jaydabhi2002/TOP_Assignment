#include <iostream>
#include <iomanip>
using namespace std;
int n;
class cricketer
{
public:
    int TotalRun = 0;
    float AverageRun;
    int bestParformance = 0;
    string name;
};
class batsman : public cricketer
{
public:
    int run[5];
    void inputRun()
    {
        cout << "\nEnter batsMam Name : ";
        getline(cin, name);
        getline(cin, name);
        int j = 0;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter match Run [" << ++j << "] : ";
            cin >> run[i];
        }
    }
    void calculateAvrg()
    {
        for (int i = 0; i < 5; i++)
        {
            TotalRun += run[i];
            AverageRun = (float)TotalRun / (float)7;
        }
        for (int i = 0; i < 5; i++)
        {
            if (run[i] > AverageRun)
            {
                bestParformance++;
            }
        }
    }

    void DisplayData()
    {
        cout << "\t\t\t-::DISPLAY INFORMATION ::-\n=====================================\n";
        cout << "\n\nName :" << name;
        cout << "\nCricket Match Run : ";
        for (int i = 0; i < 5; i++)
        {
            cout << run[i] << ",";
        }
        cout << "\nTotal Run : " << TotalRun << endl;
        cout << "Average Run : " << fixed << setprecision(2) << AverageRun << endl;
        cout << "Best Performance : " << bestParformance << endl;
    }
};
int main()
{

    cout << "Enter Total Batsman : ";
    cin >> n;
    batsman s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].inputRun();
        s[i].calculateAvrg();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].DisplayData();
    }

    return 0;
}