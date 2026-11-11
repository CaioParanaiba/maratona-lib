// Ordenação por ângulo polar e comparação de ângulos, tudo em inteiros (sem atan2)
// Complexidade: O(n log n) para ordenar
// Encaixes: campos extras em P (ex.: id do vetor); critério de desempate de vetores colineares
// Status: rascunho
// Testado em:
//   - https://codeforces.com/problemset/problem/598/C

struct P{
    long long x,y;
    long long operator*(const P& p) const {return x*p.x+y*p.y;} // escalar
    long long operator^(const P& p) const {return x*p.y-y*p.x;} // vetorial (z)
};

// 0 = semiplano de cima (ângulo em [0,pi)), 1 = de baixo
int half(P p){
    return p.y<0 || (p.y==0 && p.x<0);
}

// ordena por ângulo polar, começando no eixo x positivo, anti-horário
bool cmp(P a,P b){
    if(half(a)!=half(b)) return half(a)<half(b);
    return (a^b)>0;
}

// vetor cujo ângulo é o ângulo não orientado entre a e b, em [0,pi]
// (é o conj(a)*b dos complexos, com a parte imaginária em módulo)
P angv(P a,P b){
    return {a*b,llabs(a^b)};
}

// ângulo entre (a,b) menor que entre (c,d)? → (angv(a,b)^angv(c,d))>0
// cuidado: coordenadas até 1e4 dão produtos até ~1e17, ainda cabe em long long
