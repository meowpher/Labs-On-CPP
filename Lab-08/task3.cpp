#include <iostream>
using namespace std;
class Matrix {
    int mat[10][10], r, c;
public:
    Matrix(int r=0, int c=0): r(r), c(c) {}
    void input() { for(int i=0; i<r; ++i) for(int j=0; j<c; ++j) cin>>mat[i][j]; }
    void display() const { for(int i=0; i<r; ++i) { for(int j=0; j<c; ++j) cout<<mat[i][j]<<" "; cout<<"\n"; } }
    friend Matrix addMatrices(const Matrix& a, const Matrix& b) {
        Matrix res(a.r, a.c);
        for(int i=0; i<a.r; ++i) for(int j=0; j<a.c; ++j) res.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        return res;
    }
};
int main() {
    int r, c; cin >> r >> c;
    Matrix m1(r, c), m2(r, c);
    m1.input(); m2.input();
    addMatrices(m1, m2).display();
}
