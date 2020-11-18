#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

class Data
{
protected:
    vector<int> DATE;
    vector<double> MSFT;
    vector<double> AMZN;
    vector<double> SP500;
public:
    /*vector<int> DATE;
    vector<double> MSFT;
    vector<double> AMZN;
    vector<double> SP500;*/
    Data()
    {
        DATE.insert(DATE.end(), { 1,2,6,7,8,9,10,13,14,15,16,17,20,21,22,23,24,27,28,29,30,31 });
        AMZN.insert(AMZN.end(), { +4.13,+4.55,+10.59,-8.53,+11.46,+15.13,+15.76,-12.28,-11.56,-8.84,-8.52,-7.15,+15.64,-17.08,-15.65,-11.42,+12.26,+13.98,-11.94,+13.18,+13.86,+18.07 });
        MSFT.insert(MSFT.end(), { +2.18,+3.94,+6.18,-4.94,+7.25,+8.00,-7.67,-4.35,+4.99,-4.84,-2.76,-2.24,+6.33,-5.20,+6.71,-2.07,-1.44,+2.73,-1.80,+2.83,-2.75,+3.31 });
        SP500.insert(SP500.end(), { +1.04,+1.50,+3.11,-2.00,+2.79,-2.21,+3.28,-2.32,+3.69,+4.63,+4.27,+4.57,+5.45,+6.68,+7.30,-5.97,-5.32,+6.10,-5.41,+6.72,-4.79,+5.60 });
    }

    vector<int> getDATE() {
        return DATE;
    }
    vector<double> getAMZN() {
        return AMZN;
    }
    vector<double> getMSFT() {
        return MSFT;
    }
    vector<double> getSP500() {
        return SP500;
    }

    friend void searchMaxDay(const Data& d,int k);
    friend void searchMinDay(const Data& d, int k);
    friend void maxSearch(const Data& D, int key);//For sorting
    friend void minSearch(const Data& D, int key);//For sorting

};

//Question 1
void searchMaxDay(const Data& D, int k)
{
    int i = 0;
    int day = 0;

    vector<int> Date = D.DATE;
    vector<double> Amazon = D.AMZN;
    vector<double> Microsoft = D.MSFT;

    //Finding the index of the "day" passed to the function
    for (i = 0; i < Date.size(); i++)
    {
        if (Date[i] == k)
        {
            day = i;
            break;
        }
    }


    if (Amazon[day] > Microsoft[day])
    {
        if (Amazon[day] > 0)
        {
            cout << "    Date        AMZN(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Amazon[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Amazon[day] << endl << endl;
        }
        else
        {
            cout << "    Date        AMZN(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      " << fixed << setprecision(2) << Amazon[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      " << fixed << setprecision(2) << Amazon[day] << endl << endl;
        }
    }

    else
    {
        if (Microsoft[day] > 0)
        {
            cout << "    Date        MSFT(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Microsoft[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Microsoft[day] << endl << endl;
        }
        else
        {
            cout << "    Date        MSFT(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      " << fixed << setprecision(2) << Microsoft[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      " << fixed << setprecision(2) << Microsoft[day] << endl << endl;
        }
    }

}


//Question 2
void searchMinDay(const Data& D, int k)
{
    int i = 0;
    int day = 0;

    vector<int> Date = D.DATE;
    vector<double> Amazon = D.AMZN;
    vector<double> Microsoft = D.MSFT;

    //Finding the index of the "day" passed to the function
    for (i = 0; i < Date.size(); i++)
    {
        if (Date[i] == k)
        {
            day = i;
            break;
        }
    }

    if (Amazon[day] < Microsoft[day])
    {
        if (Amazon[day] > 0)
        {
            cout << "    Date        AMZN(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Amazon[day] << endl << endl;
            else
                cout << "" << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Amazon[day] << endl << endl;
        }
        else
        {
            cout << "    Date        AMZN(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      " << fixed << setprecision(2) << Amazon[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      " << fixed << setprecision(2) << Amazon[day] << endl << endl;
        }
    }

    else
    {
        if (Microsoft[day] > 0)
        {
            cout << "    Date        MSFT(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Microsoft[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      +" << fixed << setprecision(2) << Microsoft[day] << endl << endl;
        }
        else
        {
            cout << "    Date        MSFT(%)" << endl;
            if (k < 10)
                cout << " 0" << Date[day] << "/07/2020      " << fixed << setprecision(2) << Microsoft[day] << endl << endl;
            else
                cout << " " << Date[day] << "/07/2020      " << fixed << setprecision(2) << Microsoft[day] << endl << endl;
        }
    }

}

//Question 3 5
template <typename T>
void Swap(vector<T>& vect, int j)
{
    T temp;
    temp = vect[j];
    vect[j] = vect[j + 1];
    vect[j + 1] = temp;
}

//Increasing order
void maxSearch(const Data& D, int key)
{
    int i = 0, j = 0, k = 0;
    double temp;
    vector<int> Date;
    vector<double> Microsoft;
    vector<double> Amazon;
    vector<double> SP500;

    Microsoft = D.MSFT;
    Date = D.DATE;
    Amazon = D.AMZN;
    SP500 = D.SP500;

    //Amazon
    if (key == 3)
    {
        cout << " ----------------------------------------------------------------------------- " << endl;
        cout << "|      Date      |      AMZN(%)      |      MSFT(%)      |     S&P500(%)      |" << endl;
        cout << "|-----------------------------------------------------------------------------|" << endl;

        //Sorting 
        for (i = 0; i < Amazon.size(); i++)
        {
            for (j = 0; j < Amazon.size() - 1 - i; j++)
            {
                if (Amazon[j] > Amazon[j + 1])
                {
                    Swap<int>(Date, j);
                    Swap<double>(Amazon, j);
                    Swap<double>(Microsoft, j);
                    Swap<double>(SP500, j);
                }
            }
        }

        //Displaying
        for (i = 0; i < Amazon.size(); i++)
        {
            if (Date[i] < 10)
            {
                if (Amazon[i] > 0 && Amazon[i] < 10)
                {
                    if (Amazon[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] > 0 && Amazon[i] > 10)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] < 0 && Amazon[i] > -10)
                    cout << "|   0" << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
            }
            else
            {
                if (Amazon[i] > 0)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << SP500[i] << "        |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] < 0)
                {
                    if (Amazon[i] > -10)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (Microsoft[i] > 0)
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                        else
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                    }
                }

            }

        }//End of for loop
        cout << " ----------------------------------------------------------------------------- ";
        cout << endl << endl;
    }//End of 'if'

    //Micros0ft
    else if (key == 5)
    {
        cout << " ----------------------------------------------------------------------------- " << endl;
        cout << "|      Date      |      MSFT(%)      |      AMZN(%)      |      SP500(%)      |" << endl;
        cout << "|-----------------------------------------------------------------------------|" << endl;

        //Sorting
        for (i = 0; i < Microsoft.size(); i++)
        {
            for (j = 0; j < Microsoft.size() - 1 - i; j++)
            {
                if (Microsoft[j] > Microsoft[j + 1])
                {
                    Swap<int>(Date, j);
                    Swap<double>(Microsoft, j);
                    Swap<double>(Amazon, j);
                    Swap<double>(SP500, j);
                }
            }
        }

        //Displaying
        for (i = 0; i < Microsoft.size(); i++)
        {
            if (Date[i] < 10)
            {
                if (Microsoft[i] > 0 && Microsoft[i] < 10)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (Amazon[i] < 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |         " << Amazon[i] << "      |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else if (Amazon[i] > 10)
                        {
                            if (SP500[i] > 0)
                                cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                        else if (Amazon[i] < 10)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;

                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Microsoft[i] < 0 && Microsoft[i] > -10)
                    cout << "|   0" << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
            }
            else
            {
                if (Microsoft[i] > 0)
                {
                    if (Amazon[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "        |" << endl;
                    }
                    else
                    {
                        if (Amazon[i] < -10)
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |        " << Amazon[i] << "     |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Microsoft[i] < 0)
                {
                    if (Microsoft[i] > -10)
                    {
                        if (Amazon[i] < 0)
                        {
                            if (Amazon[i] < -10)
                            {
                                if (SP500[i] > 0)
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                                else
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            }
                            else
                            {
                                if (SP500[i] > 0)
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                                else
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |         " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            }

                        }
                        else
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                    }
                }

            }
        }//End of for loop
        cout << " ----------------------------------------------------------------------------- ";
        cout << endl << endl;
    }//End of 'else'
}

//Question 4 and 6
//Decreasing order
void minSearch(const Data& D, int key)
{
    int i = 0, j = 0, k = 0;
    double temp;
    vector<int> Date;
    vector<double> Microsoft;
    vector<double> Amazon;
    vector<double> SP500;

    Microsoft = D.MSFT;
    Date = D.DATE;
    Amazon = D.AMZN;
    SP500 = D.SP500;

    //Amazon
    if (key == 4)
    {
        cout << " ----------------------------------------------------------------------------- " << endl;
        cout << "|      Date      |      AMZN(%)      |      MSFT(%)      |      S&P500(%)     |" << endl;
        cout << "|-----------------------------------------------------------------------------|" << endl;

        //Sorting 
        for (i = 0; i < Amazon.size(); i++)
        {
            for (j = 0; j < Amazon.size() - 1 - i; j++)
            {
                if (Amazon[j] < Amazon[j + 1])
                {
                    Swap<int>(Date, j);
                    Swap<double>(Amazon, j);
                    Swap<double>(Microsoft, j);
                    Swap<double>(SP500, j);
                }
            }
        }

        //Displaying
        for (i = 0; i < Amazon.size(); i++)
        {
            if (Date[i] < 10)
            {
                if (Amazon[i] > 0 && Amazon[i] < 10)
                {
                    if (Amazon[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] > 0 && Amazon[i] > 10)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] < 0 && Amazon[i] > -10)
                    cout << "|   0" << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
            }
            else
            {
                if (Amazon[i] > 0)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << SP500[i] << "        |" << endl;
                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |       +" << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Amazon[i] < 0)
                {
                    if (Amazon[i] > -10)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (Microsoft[i] > 0)
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       +" << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                        else
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |       " << Amazon[i] << "      |       " << fixed << setprecision(2) << Microsoft[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                    }
                }

            }

        }//End of for loop
        cout << " ----------------------------------------------------------------------------- ";
        cout << endl << endl;
    }//End of 'if'

    //Micros0ft
    else if (key == 6)
    {
        cout << " ----------------------------------------------------------------------------- " << endl;
        cout << "|      Date      |      MSFT(%)      |      AMZN(%)      |      S&P500(%)     |" << endl;
        cout << "|-----------------------------------------------------------------------------|" << endl;

        //Sorting
        for (i = 0; i < Microsoft.size(); i++)
        {
            for (j = 0; j < Microsoft.size() - 1 - i; j++)
            {
                if (Microsoft[j] < Microsoft[j + 1])
                {
                    Swap<int>(Date, j);
                    Swap<double>(Microsoft, j);
                    Swap<double>(Amazon, j);
                    Swap<double>(SP500, j);
                }
            }
        }

        //Displaying
        for (i = 0; i < Microsoft.size(); i++)
        {
            if (Date[i] < 10)
            {
                if (Microsoft[i] > 0 && Microsoft[i] < 10)
                {
                    if (Microsoft[i] > 0)
                    {
                        if (Amazon[i] < 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |         " << Amazon[i] << "      |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else if (Amazon[i] > 10)
                        {
                            if (SP500[i] > 0)
                                cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                        else if (Amazon[i] < 10)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;

                    }
                    else
                    {
                        if (SP500[i] > 0)
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Microsoft[i] < 0 && Microsoft[i] > -10)
                    cout << "|   0" << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
            }
            else
            {
                if (Microsoft[i] > 0)
                {
                    if (Amazon[i] > 0)
                    {
                        if (SP500[i] > 0)
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "        |" << endl;
                    }
                    else
                    {
                        if (Amazon[i] < -10)
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << Date[i] << "/07/2020   |        +" << fixed << setprecision(2) << Microsoft[i] << "      |        " << Amazon[i] << "     |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                    }
                }
                else if (Microsoft[i] < 0)
                {
                    if (Microsoft[i] > -10)
                    {
                        if (Amazon[i] < 0)
                        {
                            if (Amazon[i] < -10)
                            {
                                if (SP500[i] > 0)
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                                else
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      " << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            }
                            else
                            {
                                if (SP500[i] > 0)
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                                else
                                    cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |       " << Amazon[i] << "       |         " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            }

                        }
                        else
                        {
                            if (SP500[i] > 0)
                                cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        +" << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                            else
                                cout << "|   " << Date[i] << "/07/2020   |        " << fixed << setprecision(2) << Microsoft[i] << "      |      +" << Amazon[i] << "       |        " << fixed << setprecision(2) << SP500[i] << "       |" << endl;
                        }
                    }
                }

            }
        }//End of for loop
        cout << " ----------------------------------------------------------------------------- ";
        cout << endl << endl;
    }//End of 'else'
}

//Function to find the the largest element for Question 7 and 8
void maxSearch(vector<int>& vectDate, vector<double >& vectData)
{
    int i = 0, k = 0;
    double max = 0;
    for (i = 0; i < vectData.size(); i++)
    {
        if (vectData[i] > max)
        {
            max = vectData[i];
            k = i;
        }
    }
    if (max >= 0)
    {
        if (vectDate[k] < 10)
            cout << " 0" << vectDate[k] << "/07/2020      +" << fixed << setprecision(2) << max << endl << endl;
        else
            cout << " " << vectDate[k] << "/07/2020      +" << fixed << setprecision(2) << max << endl << endl;
    }
    else
    {
        if (vectDate[k] < 10)
            cout << " 0" << vectDate[k] << "/07/2020      " << fixed << setprecision(2) << max << endl << endl;
        else
            cout << " " << vectDate[k] << "/07/2020      " << fixed << setprecision(2) << max << endl << endl;
    }
}


//Function to find the smallest element for question 7 and 8
void minSearch(vector<int>& vectDate, vector<double >& vectData)
{
    int i = 0, k = 0;
    double min = 100;
    for (i = 0; i < vectData.size(); i++)
    {
        if (vectData[i] < min)
        {
            min = vectData[i];
            k = i;
        }
    }
    if (min >= 0)
    {
        if (vectDate[k] < 10)
            cout << " 0" << vectDate[k] << "/07/2020      +" << fixed << setprecision(2) << min << endl << endl;
        else
            cout << " " << vectDate[k] << "/07/2020      +" << fixed << setprecision(2) << min << endl << endl;
    }
    else
    {
        if (vectDate[k] < 10)
            cout << " 0" << vectDate[k] << "/07/2020      " << fixed << setprecision(2) << min << endl << endl;
        else
            cout << " " << vectDate[k] << "/07/2020      " << fixed << setprecision(2) << min << endl << endl;
    }

}


//Question 7
class AMZNHnL : private Data
{
    int i = 0;
    int k = 0;
    double max, min;
public:
    AMZNHnL()
    {
        max = 0;
        min = 100;
    }

    ~AMZNHnL()
    {
        max = 0;
        min = 100;
    }
    void AMZNH()
    {
        AMZNHnL Highest;
        cout << "    Date        AMZN(%)" << endl;
        maxSearch(Highest.DATE, Highest.AMZN);
    }

    void AMZNL()
    {
        AMZNHnL Lowest;
        cout << "    Date        AMZN(%)" << endl;
        minSearch(Lowest.DATE, Lowest.AMZN);
    }

};



//Question 8
class MSFTHnL : private Data
{
    int i = 0;
    int k = 0;
    double max, min;
public:
    MSFTHnL()
    {
        max = 0;
        min = 100;
    }

    ~MSFTHnL()
    {
        max = 0;
        min = 100;
    }

    void MSFTH()
    {
        MSFTHnL Highest;
        cout << "    Date        MSFT(%)" << endl;
        maxSearch(Highest.DATE, Highest.MSFT);
    }

    void MSFTL()
    {
        MSFTHnL Lowest;
        cout << "    Date        MSFT(%)" << endl;
        minSearch(Lowest.DATE, Lowest.MSFT);
    }

};


//Question 9 and 10
class AMZNSP500 : private Data
{
    int i, j, max, min;
public:
    AMZNSP500()
    {
        i = 0;
        j = 0;
        max = 0;
        min = 0;
    }

    ~AMZNSP500()
    {
        i = 0;
        j = 0;
        max = 0;
        min = 0;
    }

    //Question 9
    void AMZNHSP500()
    {
        cout << " --------------------------------------------------------- " << endl;
        cout << "|      Date      |      AMZN(%)      |      S&P500(%)     |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        for (i = 0; i < AMZN.size(); i++)
        {
            if (AMZN[i] > SP500[i])
            {
                if (DATE[i] < 10)
                {
                    if (AMZN[i] > 0 && SP500[i] > 0)
                    {
                        if (AMZN[i] < 10)
                            cout << "|   0" << DATE[i] << "/07/2020   |        +" << fixed << setprecision(2) << AMZN[i] << "      |        +" << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "      |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] > 0 && SP500[i] < 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "      |        " << SP500[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (AMZN[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "      |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] > 0 && SP500[i] < 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "      |        " << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << AMZN[i] << "       |        " << SP500[i] << "       |" << endl;
                    }
                }

            }
        }
        cout << " --------------------------------------------------------- ";
        cout << endl << endl;
    }//end of AMZNHSP500

    //Question 10
    void AMZNLSP500()
    {
        cout << " ---------------------------------------------------------" << endl;
        cout << "|      Date      |      AMZN(%)      |      S&P500(%)     |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        for (i = 0; i < AMZN.size(); i++)
        {
            if (AMZN[i] < SP500[i])
            {
                if (DATE[i] < 10)
                {
                    if (AMZN[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] < 0 && SP500[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << AMZN[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] < 0 && SP500[i] < 0)
                    {
                        if (AMZN[i] > -10)
                            cout << "|   0" << DATE[i] << "/07/2020   |        " << fixed << setprecision(2) << AMZN[i] << "      |        " << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << AMZN[i] << "      |        " << SP500[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (AMZN[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << AMZN[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] < 0 && SP500[i] > 0)
                    {
                        if (AMZN[i] > -10)
                            cout << "|   " << DATE[i] << "/07/2020   |        " << fixed << setprecision(2) << AMZN[i] << "      |        +" << SP500[i] << "       |" << endl;
                        else
                            cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << AMZN[i] << "      |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (AMZN[i] < 0 && SP500[i] < 0)
                    {

                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << AMZN[i] << "      |        " << SP500[i] << "       |" << endl;
                    }
                }

            }
        }
        cout << " --------------------------------------------------------- ";
        cout << endl << endl;
    }//End of AMZNLSP500

};


//Question 11 and 12
class MSFTSP500 : private Data
{
    int i, j, max, min;
public:
    MSFTSP500()
    {
        i = 0;
        j = 0;
        max = 0;
        min = 0;
    }

    ~MSFTSP500()
    {
        i = 0;
        j = 0;
        max = 0;
        min = 0;
    }

    //Question 11
    void MSFTHSP500()
    {
        cout << " --------------------------------------------------------- " << endl;
        cout << "|      Date      |      MSFT(%)      |      S&P500(%)     |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        for (i = 0; i < MSFT.size(); i++)
        {
            if (MSFT[i] > SP500[i])
            {
                if (DATE[i] < 10)
                {
                    if (MSFT[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        if (MSFT[i] == 8)
                            cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |        " << SP500[i] << "       |" << endl;
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |           " << SP500[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (MSFT[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |        " << SP500[i] << "       |" << endl;
                    }
                }

            }
        }
        cout << " --------------------------------------------------------- ";
        cout << endl << endl;
    }//end of MSFTHSP500

    //Question 12
    void MSFTLSP500()
    {
        cout << " ---------------------------------------------------------" << endl;
        cout << "|      Date      |      MSFT(%)      |      S&P500(%)     |" << endl;
        cout << "|---------------------------------------------------------|" << endl;
        for (i = 0; i < MSFT.size(); i++)
        {
            if (MSFT[i] < SP500[i])
            {
                if (DATE[i] < 10)
                {
                    if (MSFT[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && SP500[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && SP500[i] < 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |        " << SP500[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (MSFT[i] > 0 && SP500[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && SP500[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |        +" << SP500[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && SP500[i] < 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |        " << SP500[i] << "       |" << endl;
                    }
                }

            }
        }
        cout << " --------------------------------------------------------- ";
        cout << endl << endl;
    }//End of MSFTLSP500

};


//Question 13 and 14
class AMZNMSFT:private Data
{
    int i, highAMZN, highMSFT;
public:

    //Question 13
    AMZNMSFT()
    {
        i = 0;
        highAMZN = 0;
        highMSFT = 0;
    }

    ~AMZNMSFT()
    {
        i = 0;
        highAMZN = 0;
        highMSFT = 0;
    }

    void HighAMZN()
    {
        cout << " -------------------------------------------------------- " << endl;
        cout << "|      Date      |      AMZN(%)      |      MSFT(%)      |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
        for (i = 0; i < MSFT.size(); i++)
        {
            if (AMZN[i] > MSFT[i])
            {
                if (DATE[i] < 10)
                {
                    if (AMZN[i] > 0 && MSFT[i] > 0)
                    {
                        if (AMZN[i] < 10)
                        {
                            cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << "+" << AMZN[i] << "       |       +" << MSFT[i] << "       |" << endl;
                        }
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |      " << fixed << setprecision(2) << "+" << AMZN[i] << "       |       +" << MSFT[i] << "       |" << endl;
                        
                    }
                    else
                    {
                        if (AMZN[i] == 8)
                            cout << "|   0" << DATE[i] << "/07/2020   |      " << fixed << setprecision(2) << "+" << AMZN[i] << "       |       " << MSFT[i] << "       |" << endl;
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |      " << fixed << setprecision(2) << AMZN[i] << "       |          " << MSFT[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (AMZN[i] > 0 && MSFT[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |      " << fixed << setprecision(2) << "+" << AMZN[i] << "       |       +" << MSFT[i] << "       |" << endl;
                    }
                    else if(AMZN[i]>0 &&MSFT[i]<0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |      " << fixed << setprecision(2) << "+" << AMZN[i] << "       |       " << MSFT[i] << "       |" << endl;
                    }
                    else if (AMZN[i] < 0 && MSFT[i] < 0)
                    {

                    }
                }

            }
        }
        cout << " -------------------------------------------------------- ";
        cout << endl << endl;
    }//End of HighAMZN

    //Question 14
    void HighMSFT()
    {
        cout << " -------------------------------------------------------- " << endl;
        cout << "|      Date      |      MSFT(%)      |      AMZN(%)      |" << endl;
        cout << "|--------------------------------------------------------|" << endl;
        for (i = 0; i < MSFT.size(); i++)
        {
            if (MSFT[i] > AMZN[i])
            {
                if (DATE[i] < 10)
                {
                    if (MSFT[i] > 0 && AMZN[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << "+" << MSFT[i] << "       |      +" << AMZN[i] << "      |" << endl;
                    }
                    else if (MSFT[i] < 0 && AMZN[i] > 0)
                    {
                        cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |      +" << AMZN[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && AMZN[i] < 0)
                    {
                        if(AMZN[i]>-10)
                            cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |       " << AMZN[i] << "       |" << endl;
                        else
                            cout << "|   0" << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |      " << AMZN[i] << "       |" << endl;
                    }
                }
                else
                {
                    if (MSFT[i] > 0 && AMZN[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |      +" << AMZN[i] << "      |" << endl;
                    }
                    else if (MSFT[i] > 0 && AMZN[i] < 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       +" << fixed << setprecision(2) << MSFT[i] << "       |      " << AMZN[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && AMZN[i] > 0)
                    {
                        cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |      +" << AMZN[i] << "       |" << endl;
                    }
                    else if (MSFT[i] < 0 && AMZN[i] < 0)
                    {
                        if(AMZN[i]>-10)
                            cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |       " << AMZN[i] << "       |" << endl;
                        else
                            cout << "|   " << DATE[i] << "/07/2020   |       " << fixed << setprecision(2) << MSFT[i] << "       |      " << AMZN[i] << "       |" << endl;
                    }
                }

            }
        }
        cout << " -------------------------------------------------------- ";
        cout << endl << endl;
    }//End of HighMSFT
    
};

int main()
{
    /*vector<double> vect1;
    vector<double> vect2;
    vector<double> vect3;
    vector<double> vect4;
    Data d;
    //vect1 = d.getDATE();
    //vect2 = d.getAMZN();
    //vect3 = d.getMSFT();
    //vect4 = d.getSP500();
    */
    cout << endl << endl << endl;
    cout << "----------------------------  Stock Market Analysis of Amazon and Microsoft for July 2020  -----------------------------" << endl << endl << endl;

    cout << "  The official code for Amazon is 'AMZN'" << endl;
    cout << "  The official code for Microsoft is 'MSFT'" << endl;
    cout << "  The official code for the Industry Standard is 'S&P500'" << endl << endl;

    cout << "  Here is a list of 14 Questions and functionalities." << endl;
    cout << "  These are divided into five categories which can further be used for the basic analysis." << endl;
    cout << "  Please enter the serial number you'd like to choose" << endl << endl;

    string option = "Y";
    while (option[0] == 'y' || option[0] == 'Y')
    {
        cout << "   General Analysis" << endl;
        cout << "    1) On a particular date, which company had the highest Stock Percentage ?" << endl;
        cout << "    2) On a particular date, which company had the lowest Stock Percentage ?" << endl;
        cout << "    3) Display the complete data in increasing order of Stock Percentage for Amazon " << endl;
        cout << "    4) Display the complete data in decreasing order of Stock Percentage for Amazon " << endl;
        cout << "    5) Display the complete data in increasing order of Stock Percentage for Microsoft " << endl;
        cout << "    6) Display the complete data in decreasing order of Stock Percentage for Microsoft " << endl << endl;

        cout << "   Individual Analysis of 'AMZN' and 'MSFT'" << endl;
        cout << "    7) On which day did 'AMZN' have the highest and the lowest Stock Percentage ?" << endl;
        cout << "    8) On which day did 'MSFT' have the highest and the lowest Stock Percentage ?" << endl << endl;

        cout << "   Comparitive analysis of 'AMZN' with 'S&P500'" << endl;
        cout << "    9) On which days did 'AMZN' have higher Stock Percentage than 'S&P500' ?" << endl;
        cout << "    10) On which days did 'AMZN' have lower Stock Percentage than 'S&P500' ?" << endl << endl;

        cout << "   Comparitive analysis of 'MSFT' with 'S&P500'" << endl;
        cout << "    11) On which days did 'MSFT' have higher Stock Percentage than 'S&P500' ?" << endl;
        cout << "    12) On which days did 'MSFT' have lower Stock Percentage than 'S&P500' ?" << endl << endl;

        cout << "   Comparitive analysis of 'AMZN' with 'MSFT'" << endl;
        cout << "    13) On which days did 'AMZN' have higher Stock Percentage the 'MSFT' ?" << endl;
        cout << "    14) On which days did 'MSFT' have higher Stock Percentage the 'AMZN' ?" << endl << endl;

        int choose = 0;
        cin >> choose;
        cout << endl;


        switch (choose)
        {
        case 1:
        {
            int date = 0;
            cout << "Please enter just the date you would like to choose. (For Example -> 13)" << endl;
            cin >> date;
            cout << endl;
            Data D;
            searchMaxDay(D, date);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 2:
        {
            int date = 0;
            cout << "Please enter just the date you would like to choose. (For Example -> 13)" << endl;
            cin >> date;
            cout << endl;
            Data D;
            searchMinDay(D, date);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 3:
        {
            Data D;
            cout << "Displaying the complete data in increasing order of Stock Percentage for 'AMZN'" << endl << endl;
            maxSearch(D, 3);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 4:
        {
            Data D;
            cout << "Displaying the complete data in decreasing order of Stock Percentage for 'AMZN'" << endl << endl;
            minSearch(D, 4);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 5:
        {
            Data D;
            cout << "Displaying the complete data in increasing order of Stock Percentage for 'MSFT'" << endl << endl;
            maxSearch(D, 5);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 6:
        {
            Data D;
            cout << "Displaying the complete data in decreasing order of Stock Percentage for 'AMZN'" << endl << endl;
            minSearch(D, 6);
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 7:
        {
            AMZNHnL A;
            cout << "--------  Highest  --------" << endl << endl;
            A.AMZNH();
            cout << endl;
            cout << "--------  Lowest  --------" << endl << endl;
            A.AMZNL();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }

        case 8:
        {
            MSFTHnL M;
            cout << "--------  Highest  --------" << endl << endl;
            M.MSFTH();
            cout << endl;
            cout << "--------  Lowest  --------" << endl << endl;
            M.MSFTL();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 9:
        {
            cout << "The days when 'AMZN' had higher Stock Percentage than 'S&P500' -->" << endl << endl;
            AMZNSP500 AS;
            AS.AMZNHSP500();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 10:
        {
            cout << "The days when 'AMZN' had lower Stock Percentage than 'S&P500' -->" << endl << endl;
            AMZNSP500 AS;
            AS.AMZNLSP500();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 11:
        {
            cout << "The days when 'MSFT' had higher Stock Percentage than 'S&P500' -->" << endl << endl;
            MSFTSP500 MS;
            MS.MSFTHSP500();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 12:
        {
            cout << "The days when 'MSFT' had lower Stock Percentage than 'S&P500' -->" << endl << endl;
            MSFTSP500 MS;
            MS.MSFTLSP500();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }

        case 13:
        {
            cout << "The days when 'AMZN' had higher Stock Percentage than 'MSFT' -->" << endl << endl;
            AMZNMSFT AM;
            AM.HighAMZN();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        case 14:
        {
            cout << "The days when 'MSFT' had higher Stock Percentage than 'AMZN' -->" << endl << endl;
            AMZNMSFT AM;
            AM.HighMSFT();
            cout << endl << endl;
            cout << "Would you like to Continue? (Y/N)" << endl;
            cin >> option;
            cout << endl;
            if (option[0] == 'y' || option[0] == 'Y')
                continue;
            else
                break;
            break;
        }
        }//End of Switch
    }//End of while loop

    return 0;
}