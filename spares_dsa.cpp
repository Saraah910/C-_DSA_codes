#include <iostream>
using namespace std;

class Matrix {
    int matrix[100][100],n_rows;
    int n_cols;
    int spares[100][3];
    public:
        void acceptMatrix(){
            int a[10][10],i,j;
            cout<<"Entre no of rows: ";
            cin>>n_rows;
            cout<<"Entre the no of coloumns: ";
            cin>>n_cols;
            for(int i=0; i<n_rows; i++){
                for(int j=0; j<n_cols; j++){
                    cout<<"Entre elements: "<<"["<<i<<"]["<<j<<"]: ";
                    cin>>matrix[i][j];
                }
            }
        }
        void displayMatrix(){
            cout<<"\nMatrix is....."<<endl;
            for(int i=0; i<n_rows; i++){
                for(int j=0; j<n_cols; j++){
                    cout<<matrix[i][j]<<" ";
                }  
                cout<<endl;
            }
        }
            
        void sparesMatrix(){
            int k=1;
            for(int i=0; i<n_rows; i++){
                for(int j=0; j<n_cols; j++){
                    if(matrix[i][j]!=0){
                        spares[k][0]=i;
                        spares[k][1]=j;
                        spares[k][2]=matrix[i][j];
                        k++;
                    }
                }
            }
            spares[0][0]=n_rows;
            spares[0][1]=n_cols;
            spares[0][2]=k-1;
        }
        void displaySparse(){
            cout<<"\n\tThe spares mareix is....";
            cout<<"\n\tRows Colomns Values"<<endl;
            for(int i=0; i<=spares[0][2]; i++){
                cout<<"\n";
                for(int j=0; j<3; j++){
                    cout<<"\t"<<spares[i][j];
                }
            }
        }
        void SimpleTranspose(){
            int transpose[100][3],k=1;
            for(int z=0; z<spares[0][1]; z++){
                for(int i=1; i<=spares[0][2]; i++){
                    if(spares[i][1]==z){
                        transpose[k][0]=spares[i][1];
                        transpose[k][1]=spares[i][0];
                        transpose[k][2]=spares[i][2];
                        k++;
                    }
                }
            }
            // cout<<"\n";
            // cout<<"\n\tResult of Simple transpose is: "<<endl;
            // cout<<"\n\tRows Columns Values ";
            // for(int i=0; i<=transpose[0][2];i++){
            //     cout<<"\n";
            //     for(int j=0; j<3; j++){
            //         cout<<" \t"<<transpose[i][j];
            //     }
            // }
        }
        void fastTranspose(){
            int loc,col_no,i;
            int result[100][3];
            
            int total[spares[0][1]], index[spares[0][1]+1];
            for(i=0; i<spares[0][1]; i++){
                total[i]=0;
            }
            for(i=1; i<=spares[0][2]; i++){
                col_no=spares[i][1];
                total[col_no]++;
            }
            index[0]=1;
            for(i=1;i<=spares[0][1];i++){
                index[i]=index[i-1]+total[i-1];
            }
            result[0][0]=spares[0][1];
            result[0][1]=spares[0][0];
            result[0][2]=spares[0][2];
            
            for(i=1; i<=spares[0][2]; i++){
                col_no=spares[i][1];
                loc=index[col_no];
                result[loc][0]=spares[i][1];
                result[loc][1]=spares[i][0];
                result[loc][2]=spares[i][2];
                index[col_no]++;
            }
            cout<<"\n";
            cout<<"\n\tResult of fast transpose is: ";
            cout<<"\n\tRows Columns Values ";
            
            for(int i=0; i<=result[0][2];i++){
                cout<<"\n";
                for(int j=0; j<3; j++){
                    cout<<" \t"<<result[i][j];
                }
            }
        }
};

int main()
{
    Matrix m;
    m.acceptMatrix();
    m.displayMatrix();
    m.sparesMatrix();
    m.displaySparse();
    m.SimpleTranspose();
    m.fastTranspose();
    
    
    return 0;
}




