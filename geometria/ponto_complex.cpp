// Ponto 2D como número complexo (rotação = multiplicação, escalar/vetorial via conj)
// Complexidade: O(1) por operação
// Encaixes: tipo de P — long long para giros de 90° (exato), long double para ângulo qualquer
// Status: rascunho
// Testado em:
//   - https://codeforces.com/problemset/problem/474/C
//   - https://atcoder.jp/contests/abc259/tasks/abc259_b
//
// Cuidados:
//   - complex não tem operator< (set/sort/map precisam de comparador ou pair)
//   - p.real()=3 não compila: use p.real(3)
//   - cin >> p espera "(x,y)": leia x e y separados e monte P(x,y)
//   - abs, arg e polar só fazem sentido com ponto flutuante

typedef long double T;
typedef complex<T> P;
const P I(0,1);              // multiplicar por I gira 90° anti-horário
const T PI=acos((T)-1);

T dot(P a,P b){return (conj(a)*b).real();}   // escalar
T cross(P a,P b){return (conj(a)*b).imag();} // vetorial (z)
T dist2(P a,P b){return norm(a-b);}          // distância ao quadrado

// gira p por ang (radianos) em torno de c; para 90° use (p-c)*I+c
P rot(P p,P c,T ang){return (p-c)*polar((T)1,ang)+c;}

// ângulo com sinal de a para b, em (-PI, PI]
T ang(P a,P b){return arg(conj(a)*b);}
