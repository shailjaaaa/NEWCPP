#include <iostream>
using namespace std;

int main()
{
    int rate, qty, amt;
    float dis, billamt, gst, netbill;
    cout << "Rate of item:";
    cin >> rate;
    cout << "Quantity:";
    cin >> qty;
    amt = rate * qty;
    dis = amt * 0.05;
    billamt = amt - dis;
    gst = billamt * 0.18;
    netbill = gst + billamt;
    cout << "rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill" << endl;
    cout << rate << "\t" << qty << "\t" << amt << "\t" << dis << "\t" << billamt << "\t" << gst << "\t" << netbill;

    return 0;
}