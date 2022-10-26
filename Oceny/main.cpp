#include <iostream>

using namespace std;

int main()
{
    int oceny;
    cin >> oceny;
    int * tab;
    tab = new int[ oceny ];
    int jed = 0, dwa = 0, trzy = 0, czter = 0, piec = 0, szesc = 0;
    for( int i = 0; i < oceny; i++ )
    {
        cin >> tab[ i ];
    }

    for( int i = 0; i < oceny; i++ )
    {
        if( tab[ i ] == 1 ) jed++;
        else if( tab[ i ] == 2 ) dwa++;
        else if( tab[ i ] == 3 ) trzy++;
        else if( tab[ i ] == 4 ) czter++;
        else if( tab[ i ] == 5 ) piec++;
        else szesc++;

    }

    cout << jed << " " << dwa << " " << trzy << " " << czter << " " << piec << " " << szesc << endl;

    delete[] tab;
    return 0;
}
