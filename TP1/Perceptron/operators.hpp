#ifndef OPERATORS
#define OPERATORS


#include <vector>
#include <iostream>
#include <stdexcept>
#include <cmath> 	

using namespace std;



double operator*(const vector<double>& U, const vector<double>& V){
	try{
		if(U.size() != V.size()){
			throw string("ERREUR : Dimension incompatible !");
		}
		else{
			double produit = 0;
			for(int i = 0 ; i < U.size() ; i++)
				produit += U[i] * V[i];
			return produit;
		}
	}
	catch(string const& chaine){
       cerr << chaine << endl;
       return 0;
   	}
}

vector<double> operator*(const double &alpha, const vector<double>& U){
	vector<double> W(U.size() , 0);
	for(int i = 0 ; i < U.size() ; i++)
				W[i] = alpha*U[i];
	return W;
}

vector<double> operator*(const vector<double>& U, const double &alpha){
	vector<double> W(U.size() , 0);
	for(int i = 0 ; i < U.size() ; i++)
				W[i] = alpha*U[i];
	return W;
}



vector<double> operator/(const vector<double> & U, const double &m){
	try{
		if( m == 0){
			throw string("ERREUR : can not devise with zero !");
		}
		else{
			vector<double> W(U.size() , 0);
			for(int i = 0 ; i < U.size() ; i++)
						W[i] = U[i]/m;
			return W;
		}
	}
	catch(string const& chaine){
    	cerr << chaine << endl;
    	vector<double> W (U.size(), 0);
		return W;
   	}
}


vector<double> operator-(const vector<double> & U, const vector<double> & V){
	try{
		if(U.size() != V.size()){
			throw string("ERREUR : Dimension incompatible !1");
		}
		else{
			vector<double> W(U.size() , 0);
			for(int i = 0 ; i < U.size() ; i++){
					W[i] = U[i] - V[i];
			}
			return W;
		}
	}
	catch(string const& chaine){
    	cerr << chaine << endl;
    	vector<double> W (U.size(), 0);
		return W;
   	}
}

vector<double> operator+(const vector<double> & U, const vector<double> & V){
	try{
		if(U.size() != V.size()){
			throw string("ERREUR : Dimension incompatible !2");
		}
		else{
			vector<double> W(U.size() , 0);
			for(int i = 0 ; i < U.size() ; i++){
					W[i] = U[i] + V[i];
			}
			return W;
		}
	}
	catch(string const& chaine){
    	cerr << chaine << endl;
    	vector<double> W (U.size(), 0);
		return W;
   	}
}

vector<vector<double>> identite(int n){
	vector<vector<double>> I( n , vector<double>( n , 0 ));
	for(int i = 0 ; i < n ; i++)
		I[i][i] = 1;
	return I;
}

// void print(vector<double> U){
// 	for(int i=0; i<U.size(); i++)
// 		printf(" %.2f\n",U[i]);
// }

// void print(vector<string> U){
// 	for(int i=0; i<U.size(); i++)
// 		cout<<" "<<U[i]<<endl;
// 		//printf(" %s\n",U[i]);
// }

// void print(vector<vector<double>>U){
// 	for(int i=0; i<U.size(); i++){
// 		for(int j=0; j<U[0].size(); j++){
// 			if(U[i][j] < 0)
// 				printf(" %.0f",U[i][j]);
// 			else
// 				printf("  %.0f",U[i][j]);
// 		}
// 		printf("\n");
// 	}
// }

#endif

