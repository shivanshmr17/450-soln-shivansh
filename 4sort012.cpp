#include<iostream>

using namespace std ;

int main()
{
    int a[9]=  {1,2,0,0,1,2,0,1,2} ;
    int zero= 0  ,one = 0 ,two = 0;
    int i ;
      for(i=0 ;i<8;i++)
        {
            if(a[i] == 0 )
            zero++ ;
            else if(a[i] == 1)
            one++ ;
            else
            two++ ;
        }
        int k = 0 ;
        for(i= 0 ;i<zero ;i++)a[k++] =0;
        for(i= 0 ;i<one ;i++)a[k++] =1;
        for(i= 0 ;i<two;i++)a[k++] =2;
        for(i=0 ;i<9;i++)
       {
        cout<<a[i] ;
       }
    return 0 ;

    }