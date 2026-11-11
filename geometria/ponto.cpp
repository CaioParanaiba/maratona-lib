// Ponto/vetor 2D em inteiros (soma, subtração, escalar, vetorial, distância², orientação)
// Complexidade: O(1) por operação
// Encaixes: tipo das coordenadas (long long; troque por long double se a entrada não for inteira)
// Status: rascunho
// Testado em:
//   - https://codeforces.com/problemset/problem/598/C

struct P{
    long long x,y;

    P operator+(const P& p) const {return {x+p.x,y+p.y};}
    P operator-(const P& p) const {return {x-p.x,y-p.y};}
    long long operator*(const P& p) const {return x*p.x+y*p.y;} // escalar
    long long operator^(const P& p) const {return x*p.y-y*p.x;} // vetorial (z)
};

istream& operator>>(istream& in,P& p){
    in >> p.x >> p.y;
    return in;
}

// distância ao quadrado (sem raiz, exato em inteiros)
long long dist2(P a,P b){
    P d=a-b;
    return d*d;
}

// a -> b -> c: +1 esquerda (anti-horário), -1 direita (horário), 0 colineares
int orient(P a,P b,P c){
    long long cr=(b-a)^(c-a);
    return (cr>0)-(cr<0);
}
