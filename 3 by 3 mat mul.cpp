#include<iostream>
using namespace std;
class mat{
    private:
        int a[3][3],b[3][3],c[3][3],i,j,k;
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
                            mul =mul + a[i][k]*b[k][j]; /* Pagal aurat, matrix multliplication garna ni aauna, a[1][1]*b[1][1]+a[1][2]*b[2][1]+a[1][3]*b[3][1],                        
                                 tya a11 * b11 ko value mul ma hala ani mul ma a12 * a21 add gara ani feri mul ma a13*a31 ko value add gara; same for remaining
                                 */
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
