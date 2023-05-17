#include <iostream>
using namespace std;



int main()
{
    int num,media, suma, cont =0;
    
    do
    {
       cout<<"ingrese un numero"<<endl;
       cin>>num;
      if(num>0){
          suma=suma+num;
        cont++;          
      }
    }
   while (num>=0);
   media=suma/cont;
   cout<<"la media es"<<media;
    return 0;
}
