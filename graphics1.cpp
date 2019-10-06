#include<iostream>
#include<graphics.h>
#include<cstdlib>

using namespace std;

int main()
{
    int gdriver=DETECT, gmode, errorcode;
    int midx,midy;
    int stangle=45, endangle=135;
    int radius = 100;

    initgraph(&gdriver, &gmode, "");
    errorcode = graphresult();
    if(errorcode != grOk)
    {
        cout << "Graphics Error: " << grapherrormsg(errorcode) << endl;
        cout << "Press any key to halt:" << endl;
        getch();
        exit(1);
    }

    midx = getmaxx()/2;
    midy = getmaxy()/2;
    setcolor(COLOR(0,100,0));
    //circle(midx, midy,50);

    //pieslice(midx, midy, stangle, endangle, radius);
    sector(midx,midy,stangle,endangle,100,60);

    getch();
    closegraph();
    return 0;

}