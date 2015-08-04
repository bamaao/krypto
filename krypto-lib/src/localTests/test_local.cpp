#include "../main/cpp/MultiQuadTuple.h"
#include "../main/cpp/BridgeKey.h"
#include "../main/cpp/PublicKey.h"
#include <iostream>
#include <time.h>

using namespace std;

#define L 1
#define M 1 
#define H 2 
#define N 1
#define DEBUG false

void testEvaluateMQT(MultiQuadTuple<N, M> &f, BitVector<N> &x){ //f:N->M
	cout << "MQT EVALUATION TEST:" << endl << endl;

	cout << "x = ";
	x.print();
	cout << endl;

	BitVector<M> result = f(x);

	cout << "f(x) = ";
	result.print();
	cout << endl;

	cout << "---------------------------------" << endl;
}

void testLeftCompose(MultiQuadTuple<N, M> &f, BitVector<N> &x){ //C:L->N, f:N->M
	cout << "LEFT COMPOSE TEST:" << endl << endl;

	BitMatrix<L> C = BitMatrix<L>::randomMatrix(N << 6);

	BitVector<N> Cx = C.template operator*<N>(x);
	BitVector<M> f_Cx = f(Cx);

	MultiQuadTuple<L, M> fC = f*C;
	BitVector<M> fC_x = fC(x);

	cout << "f (C*x) = ";
	f_Cx.print();
	cout << endl;

	cout << "f*C (x) = ";
	fC_x.print();
	cout << endl;

	cout << "x = ";
	x.print();
	cout << endl;

	cout << "---------------------------------" << endl;
}

void testRightCompose(MultiQuadTuple<N, M> &f, BitVector<N> &x){ //f:N->M, D:M->H
	cout << "RIGHT COMPOSE TEST:" << endl << endl;

	BitMatrix<M> D = BitMatrix<M>::randomMatrix(H << 6); 

	MultiQuadTuple<N, H> Df = f.rMult<H>(D); 
	BitVector<H> Df_x = Df(x);

	BitVector<M> fx = f(x);
	BitVector<H> D_fx = D.template operator*<H>(fx);

	cout << "D * f(x) = ";
	D_fx.print();
	cout << endl;

	cout << "D*f(x) = ";
	Df_x.print();
	cout << endl;

	cout << "x = ";
	x.print();
	cout << endl;

	cout << "---------------------------------" << endl;
}

void testBridgeKeyInstantiation(PrivateKey<N, 2> &pk) {
	cout << "BRIDGE KEY TEST:" << endl << endl;

	BridgeKey<N, 2*N> bk(pk, BitMatrix<N>::squareIdentityMatrix());

	MultiQuadTuple<2*N, 2*N> u_g1 = bk.get_UNARY_g1();
	MultiQuadTuple<2*N, 2*N> u_g2 = bk.get_UNARY_g2();

	BitMatrix<4*N> Z = bk.get_LMM_Z();

	MultiQuadTuple<4*N, 3*N> b_g1 = bk.get_BINARY_g1();
	MultiQuadTuple<3*N, 3*N> b_g2 = bk.get_BINARY_g2();

	BitMatrix<2*N> Xx = bk.get_XOR_Xx();
	BitMatrix<2*N> Xy = bk.get_XOR_Xy();
	BitMatrix<3*N> Y = bk.get_XOR_Y();

	BitMatrix<2*N> Z1 = bk.get_AND_Z1();
	BitMatrix<2*N> Z2 = bk.get_AND_Z2();
	MultiQuadTuple<7*N, 2*N> z = bk.get_AND_z();

	cout << "---------------------------------" << endl;
}

void testPublicKey(PrivateKey<N, 2> &pk) {
	cout << "PUBLIC KEY TEST:" << endl << endl;

	BitMatrix<N> K = BitMatrix<N>::randomMatrix(N << 6);
	BridgeKey<N, 2> bk(pk, K);
	PublicKey<N, 2> pub(bk);

	BitVector<N> x;// = BitVector<N>::randomVector();
	BitVector<N> y;// = BitVector<N>::randomVector();
	BitVector<2*N> encryptedX = pk.encrypt(x);
	BitVector<2*N> encryptedY = pk.encrypt(y);


	cout << "x = ";
	x.print();
	cout << endl;

	cout << "y = ";
	y.print();
	cout << endl << "------" << endl;


	BitVector<2*N> encryptedLMM = pub.homomorphicLMM(encryptedX);
	BitVector<N> unencryptedLMM = pk.decrypt(encryptedLMM); //should be zero

	cout << "LMM: D(H(E(x))) = ";
	unencryptedLMM.print();
	cout << endl;

	cout << "K * x = ";
	(K.template operator*<N>(x)).print();
	cout << endl << "------" << endl;


	BitVector<2*N> encryptedXOR = pub.homomorphicXOR(encryptedX, encryptedY);
	BitVector<N> unencryptedXOR = pk.decrypt(encryptedXOR); //should be zero

	cout << "XOR: D(H(E(x))) = ";
	unencryptedXOR.print();
	cout << endl;

	cout << "x ^ y = ";
	(x ^ y).print();
	cout << endl << "------" << endl;


	BitVector<2*N> encryptedAND = pub.homomorphicAND(encryptedX, encryptedY);
	BitVector<N> unencryptedAND = pk.decrypt(encryptedAND); //should be zero

	cout << "AND: D(H(E(x))) = ";
	unencryptedAND.print();
	cout << endl;

	cout << "x & y = ";
	(x & y).print();
	cout << endl;

	cout << "---------------------------------" << endl;
}

int main(int argc, char **argv) {
	clock_t begin = clock();

	MultiQuadTuple<N, M> f = MultiQuadTuple<N, M>::randomMultiQuadTuple();
	BitVector<N> x = BitVector<N>::randomVector();

	// testLeftCompose(f, x);
	// testRightCompose(f, x);
	// testEvaluateMQT(f, x);

	PrivateKey<N, 2> pk;

 	// testBridgeKeyInstantiation(pk);
	testPublicKey(pk);

 	clock_t end = clock();
 	cout << "Time elapsed: " << double(end - begin) / CLOCKS_PER_SEC << " sec" << endl;
	return 0;
}