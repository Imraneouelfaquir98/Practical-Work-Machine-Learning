#include "adaline.h"
#include "operators.h"
#include <stdio.h>
#include <math.h>

Adaline::Adaline()
{

}

vector<double> Adaline::training(vector<double> W, vector<Point> S)
{
    if(S.size()>0){
        int t=0;
        while(t<300 && Ls(W,S) != 0){
            for(int i=0; i<S.size(); i++){
                W = W + 0.2*(S[i].y - W*S[i].X)*S[i].X;
                if(Ls(W,S) == 0)
                    break;
            }
            t++;
        }
    }
    else
        printf("There is no data for training?");
    return W;
}

int Adaline::Ls(vector<double> W, vector<Point> S)
{
    int ls = 0;
    for(int i=0; i<S.size(); i++)
    {
        if((W*S[i].X)*S[i].y <= 0){
            ls++;
        }
    }
    return ls;
}
