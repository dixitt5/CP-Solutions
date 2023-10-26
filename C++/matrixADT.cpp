#include<iostream>
using namespace std;

struct matrixType{
    int matDimension;
    int matValues[10][10];
};

class MatrixADT{
    private:
        matrixType resultMatrix;

    public:
        void initializeResultMatrix(int);
        matrixType add(matrixType, matrixType);
        matrixType subtract(matrixType, matrixType);
        matrixType multiply(matrixType, matrixType);
        void printResult();
};

void MatrixADT::initializeResultMatrix(int dim){
    resultMatrix.matDimension = dim;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            resultMatrix.matValues[i][j] = 0;
        }
    }
}

matrixType MatrixADT::add(matrixType M1, matrixType M2){
    int dim = M1.matDimension;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            resultMatrix.matValues[i][j] = M1.matValues[i][j] + M2.matValues[i][j];
        }
    }
    return M1;
}

matrixType MatrixADT::subtract(matrixType M1, matrixType M2){
    int dim = M1.matDimension;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            resultMatrix.matValues[i][j] = M1.matValues[i][j] - M2.matValues[i][j];
        }
    }
    return M1;
}

matrixType MatrixADT::multiply(matrixType M1, matrixType M2){
    int dim = M1.matDimension;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            resultMatrix.matValues[i][j] = 0;
            for(int k = 0; k < dim; k++){
                resultMatrix.matValues[i][j] += M1.matValues[i][k] * M2.matValues[k][j];
            }
        }
    }
    return M1;
}

void MatrixADT::printResult(){
    int dim = resultMatrix.matDimension;
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim - 1; j++){
            cout << resultMatrix.matValues[i][j] << " ";
        }
        cout << resultMatrix.matValues[i][dim - 1] << "\n";
    }
    cout << "Done";
}

int main(){
    MatrixADT maX;
    matrixType M1, M2;
    char op;
    int dim;
    cout<<"Enter dimension (size) ";
    cin >> dim;
    cout<<"Enter operation: ";
    cin >> op;
    M1.matDimension = M2.matDimension = dim;
    cout<<"Enter the first matrix ";
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cin >> M1.matValues[i][j];
        }
    }
    cout<<"Enter 2nd matrix: ";
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            cin >> M2.matValues[i][j];
        }
    }

    maX.initializeResultMatrix(dim);

    switch(op){
        case '+':
            M1 = maX.add(M1, M2);
            break;
        case '-':
            M1 = maX.subtract(M1, M2);
            break;
        case '*':
            M1 = maX.multiply(M1, M2);
            break;
    }

    maX.printResult();
    return 0;
}