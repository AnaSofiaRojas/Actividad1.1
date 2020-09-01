#include <iostream>
using namespace std;


template<class T>
T SumaI(T n)
{
    int i;
    int suma=0;
    for(i=1;i<=n;i++)
    {
        suma+=i;
    }
    return suma;
}


template<class T>
T SumaR(T n)
{

    if (n==1)
    {
        return n; 
    }
    else
    {
        return n + SumaR(n-1); 
         
    }
    
}

template<class T>
T Suma(T n)
{
    return (n*(n+1))/2;

}



int main()
{
    int _n,r1,r2,r3;
    cout<<"Numero: "<<endl;
    cin>> _n;
    if(_n<0)
    {
        cout<<"Error";
    }
    else
    {
        r1=SumaI(_n);
        r2=SumaR(_n);
        r3=Suma(_n);
        cout<<"La suma es: " <<r1<<endl;
        cout<<"La suma es: " <<r2<<endl;
        cout<<"La suma es: " <<r3<<endl;

    }
    
      
}
