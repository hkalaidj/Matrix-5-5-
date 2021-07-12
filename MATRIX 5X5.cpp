#include <iostream>

using namespace std;

int main()
{

    int A[5][5]={{1,3,2,4,2},{2,4,2,1,0},{1,0,2,3,4},{2,7,4,1,0},{3,5,1,3,4}};
    int B[5][5]={{1,4,6,7,2},{2,3,1,0,7},{2,0,1,5,1},{3,8,5,1,0},{1,2,5,3,7}};

 cout<<" "<<endl;
    cout<<"Matrix A "<<endl;
    for (int i=0;i<5;i++){
            for (int j=0;j<5;j++)
       {

            cout<<" "<<A[i][j]<<" ";



    }
cout<<" "<<endl;

    }
    cout<<" "<<endl;
    cout<<"Matrix B "<<endl;
    for (int i=0;i<5;i++){
            for (int j=0;j<5;j++)
       {

 cout<<" "<<B[i][j]<<" ";

}  cout<<" "<<endl;
    }cout<<" "<<endl;

cout<<" Matrix C = Matrix A x Matrix B "<<endl;



for (int i=0;i<5;i++){
            for (int j=0;j<5;j++){
int c=0;
{

for (int z=0;z<5;z++){
 c+=A[i][z]*B[z][j];}
cout<<" "<<c<<" ";}

 }cout<<" "<<endl;

       }cout<<" "<<endl;


}








