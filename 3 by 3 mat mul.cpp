#include<iostream>
using namespace std;
class mat{
    private:
        int a[10][10],b[10][10],c[10][10],i,j,k;
    public:
//input
    void get()
        {
            cout<<"enter first matrix: "<<endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cin>>a[i][j];
                }      
            }
            cout<<"enter second matrix: "<<endl;
            for (i = 0; i < 3; i++)
            {
                for ( j = 0; j < 3; j++)
                {
                    cin>>b[i][j];
                }        
            }
            cout<<endl;
            cout<<"the first matrix is: "<<endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout<<"  " <<a[i][j];
                }     
                cout<<endl; 
            }
            cout<<endl;
            cout<<"the second matrix is: "<<endl;
            for (i = 0; i < 3; i++)
            {
                for ( j = 0; j < 3; j++)
                {
                    cout<<"  "<<b[i][j];
                }  
                cout<<endl;      
            }
        }
    //for output
    void show()
    {   
        int mul = 0;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    {
                        for(k=0;k<3;k++)
                        {
                            mul = a[i][k]*b[k][i];
                            c[i][j]=mul;
                        }
                    }	
                }
            }
        cout<<"multiplication of 3x3 matrix is: ";
        cout<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"  " <<c[i][j]; 
            }
            cout<<endl;
        }
    }
};
int main()
    {
        mat m1;
        m1.get();
        m1.show();
        return 0;
    }