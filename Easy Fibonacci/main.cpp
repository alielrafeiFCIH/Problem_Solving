    #include <iostream>
    #include <iomanip>

    using namespace std;


    int main()
    {
        cout << fixed << setprecision(2);
        int X;
        float Y;
        double products [6] = {0,4.00, 4.50, 5.00, 2.00,1.50}, total;
        cin >> X >> Y;
        total = products[X] * Y;
        cout << "Total: R " << total;
        return 0;
    }
