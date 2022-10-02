#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
    float x11, x12, x13, x21, x22, x23, x31, x32, x33, ix11, ix12, ix13, ix21, ix22, ix23, ix31, ix32, ix33;

    cout<<"Masukkan matriks 3x3 yang ingin diinverskan:\n\n";
    cin>>x11>>x12>>x13;
    cin>>x21>>x22>>x23;
    cin>>x31>>x32>>x33;
    if ((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32) == 0)
    {
        cout<<"\n\nMatriks ini tidak memiliki invers";
    }
        else
        {
            cout<<"\nInversnya adalah:\n\n";
            
            ix11= (1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x22*x33)-(x23*x32));
            ix12= 0-(1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x12*x33)-(x13*x32));
            ix13= (1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x12*x23)-(x13*x22));
            ix21= 0-(1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x21*x33)-(x23*x31));
            ix22= (1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x11*x33)-(x13*x31));
            ix23= 0-(1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x11*x23)-(x13*x21));
            ix31= (1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x21*x32)-(x22*x31));
            ix32= 0-(1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x11*x32)-(x12*x31));
            ix33= (1/((x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-(x13*x22*x31)-(x12*x21*x33)-(x11*x23*x32)))*((x11*x22)-(x12*x21));
            
            if (ix11 == -0)
                {ix11 = 0;}
            if (ix12 == -0)
                {ix12 = 0;}
            if (ix13 == -0)
                {ix13 = 0;}
            if (ix21 == -0)
                {ix21 = 0;}
            if (ix22 == -0)
                {ix22 = 0;}
            if (ix23 == -0)
                {ix23 = 0;}
            if (ix31 == -0)
                {ix31 = 0;}
            if (ix32 == -0)
                {ix32 = 0;}
            if (ix33 == -0)
                {ix33 = 0;}

            cout<<floor(1000*ix11)/1000<<"\t";
            cout<<floor(1000*ix12)/1000<<"\t";
            cout<<floor(1000*ix13)/1000<<"\n";
            cout<<floor(1000*ix21)/1000<<"\t";
            cout<<floor(1000*ix22)/1000<<"\t";
            cout<<floor(1000*ix23)/1000<<"\n";
            cout<<floor(1000*ix31)/1000<<"\t";
            cout<<floor(1000*ix32)/1000<<"\t";
            cout<<floor(1000*ix33)/1000;
        }
    return 0;
}