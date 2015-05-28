#include<iostream>
#include <fstream> 
#include <ctime>
using namespace std;

int main ()
{
    int nmerci = 10;
    int d[] ={4,10,16,24,36,44,56,74,88,94};
    
    
    srand((unsigned)time(0));
    
    int n = 98;
    int m [n][n];
    for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                    m[i][j]= 0;
    
    m[1][2]= 10;
    m[2][1]= 10;
    m[1][33]= 7;
    m[33][1]= 7;
    m[1][34]= 5;
    m[34][1]= 5;
    m[1][65]= 5;
    m[65][1]= 5;
    m[1][66]= 7;
    m[66][1]= 7;
    m[1][97]= 10;
    m[97][1]= 10;
    m[2][3]= 1;
    m[3][2]= 1;
    m[3][4]= 4;
    m[4][3]= 4;
    m[3][5]= 1;
    m[5][3]= 1;
    m[5][6]= 4;
    m[6][5]= 4;
    m[5][7]= 1;
    m[7][5]= 1;
    m[7][8]= 4;
    m[8][7]= 4;
    m[7][9]= 1;
    m[9][7]= 1;
    m[9][10]= 4;
    m[10][9]= 4;
    m[9][11]= 1;
    m[11][9]= 1;
    m[11][12]= 4;
    m[12][11]= 4;
    m[11][13]= 1;
    m[13][11]= 1;
    m[13][14]= 4;
    m[14][13]= 4;
    m[13][15]= 1;
    m[15][13]= 1;
    m[15][16]= 4;
    m[16][15]= 4;
    m[15][17]= 1;
    m[17][15]= 1;
    m[17][18]= 3;
    m[18][17]= 3;
    m[18][19]= 1;
    m[19][18]= 1;
    m[19][20]= 4;
    m[20][19]= 4;
    m[21][19]= 1;
    m[19][21]= 1;
    m[22][21]= 4;
    m[21][22]= 4;
    m[21][23]= 1;
    m[23][21]= 1;
    m[23][24]= 4;
    m[24][23]= 4;
    m[23][25]= 1;
    m[25][23]= 1;
    m[25][26]= 4;
    m[26][25]= 4;
    m[25][27]= 1;
    m[27][25]= 1;
    m[27][28]= 4;
    m[28][27]= 4;
    m[27][29]= 1;
    m[29][27]= 1;
    m[29][30]= 4;
    m[30][29]= 4;
    m[29][31]= 1;
    m[31][29]= 1;
    m[31][32]= 4;
    m[32][31]= 4;
    m[31][33]= 1;
    m[33][31]= 1;
    m[33][34]= 2;
    m[34][33]= 2;
    m[34][35]= 1;
    m[35][34]= 1;
    m[35][36]= 4;
    m[36][35]= 4;
    m[35][37]= 1;
    m[37][35]= 1;
    m[37][38]= 4;
    m[38][37]= 4;
    m[37][39]= 1;
    m[39][37]= 1;
    m[39][40]= 4;
    m[40][39]= 4;
    m[39][41]= 1;
    m[41][39]= 1;
    m[41][42]= 4;
    m[42][41]= 4;
    m[41][43]= 1;
    m[43][41]= 1;
    m[43][44]= 4;  
    m[44][43]= 4;
    m[45][43]= 1;
    m[43][45]= 1;
    m[45][46]= 4;
    m[46][45]= 4;
    m[45][47]= 1;
    m[47][45]= 1;
    m[47][48]= 4;
    m[48][47]= 4;
    m[47][49]= 1;  
    m[49][47]= 1;
    m[49][50]= 3;
    m[50][49]= 3;
    m[50][51]= 1;
    m[51][50]= 1;
    m[51][52]= 4;
    m[52][51]= 4;
    m[51][53]= 1;
    m[53][51]= 1;
    m[53][54]= 4;
    m[54][53]= 4;  
    m[53][55]= 1;
    m[55][53]= 1;
    m[55][56]= 4;
    m[56][55]= 4;
    m[55][57]= 1;
    m[57][55]= 1;
    m[57][58]= 4;
    m[58][57]= 4;
    m[57][59]= 1;
    m[59][57]= 1;
    m[59][60]= 4;
    m[60][59]= 4;
    m[59][61]= 1;
    m[61][59]= 1;
    m[61][62]= 4;
    m[62][61]= 4;
    m[61][63]= 1;
    m[63][61]= 1;
    m[63][64]= 4;
    m[64][63]= 4;
    m[63][65]= 1;  
    m[65][63]= 1;
    m[65][66]= 2;
    m[66][65]= 2;
    m[66][67]= 1;
    m[67][66]= 1;
    m[67][68]= 4;
    m[68][67]= 4;
    m[67][69]= 1;
    m[69][67]= 1;
    m[69][70]= 4;
    m[70][69]= 4;  
    m[69][71]= 1;
    m[71][69]= 1;
    m[71][72]= 4;
    m[72][71]= 4;
    m[71][73]= 1;
    m[73][71]= 1;
    m[73][74]= 4;
    m[74][73]= 4;
    m[73][75]= 1;
    m[75][73]= 1;
    m[75][76]= 4;
    m[76][75]= 4;
    m[75][77]= 1;
    m[77][75]= 1;
    m[77][78]= 4;
    m[78][77]= 4;
    m[77][79]= 1;
    m[79][77]= 1;
    m[79][80]= 4;
    m[80][79]= 4;
    m[79][81]= 1;  
    m[81][79]= 1;
    m[81][82]= 3;
    m[82][81]= 3;
    m[82][83]= 1;
    m[83][82]= 1;
    m[83][84]= 4;
    m[84][83]= 4;
    m[83][85]= 1;
    m[85][83]= 1;
    m[85][86]= 4;
    m[86][85]= 4;  
    m[85][87]= 1;
    m[87][85]= 1;
    m[87][88]= 4;
    m[88][87]= 4;
    m[87][89]= 1;
    m[89][87]= 1;
    m[89][90]= 4;
    m[90][89]= 4;
    m[89][91]= 1;
    m[91][89]= 1;
    m[91][92]= 4;
    m[92][91]= 4;
    m[91][93]= 1;
    m[93][91]= 1;
    m[93][94]= 4;
    m[94][93]= 4;
    m[93][95]= 1;
    m[95][93]= 1;
    m[95][96]= 4;
    m[96][95]= 4;
    m[95][97]= 1;
    m[97][95]= 1;  


    m[31][35]=2;
    m[35][31]=2;
    m[29][37]=2; 
    m[37][29]=2;
    m[27][39]=2;
    m[39][27]=2;
    m[25][41]=2; 
    m[41][25]=2;
    m[23][43]=2;
    m[43][23]=2;
    m[21][45]=2; 
    m[45][21]=2;
    m[19][47]=2;
    m[47][19]=2;
    m[63][67]=2;
    m[67][63]=2; 
    m[61][69]=2;
    m[69][61]=2;
    m[59][71]=2;
    m[71][59]=2; 
    m[57][73]=2;
    m[73][57]=2;
    m[55][75]=2;
    m[75][55]=2; 
    m[53][77]=2;
    m[77][53]=2;
    m[51][79]=2;
    m[79][51]=2; 
    m[18][49]=2;
    m[49][18]=2;
    m[50][81]=2;
    m[81][50]=2;
 
            


    int V[n-1], W [n-1];
    for(int i=0; i<n-1; i++)
    {
            V[i] =0;
            W[i] = 0;
    }

    W[4] = rand()%100;
    W[6] = rand()%100;
    W[8] = rand()%100;
    W[10] = rand()%100;
    W[12] = rand()%100;
    W[14] = rand()%100;
    W[16] = rand()%100;
    W[20] = rand()%100;
    W[22] = rand()%100;
    W[24] = rand()%100;
    W[26] = rand()%100;
    W[28] = rand()%100;    
    W[30] = rand()%100;
    W[32] = rand()%100;
    W[36] = rand()%100;
    W[38] = rand()%100;
    W[40] = rand()%100;
    W[42] = rand()%100;    
    W[44] = rand()%100;
    W[46] = rand()%100;
    W[48] = rand()%100;
    W[52] = rand()%100;
    W[54] = rand()%100;
    W[56] = rand()%100;    
    W[58] = rand()%100;
    W[60] = rand()%100;
    W[62] = rand()%100;
    W[64] = rand()%100;
    W[68] = rand()%100;
    W[70] = rand()%100;    
    W[72] = rand()%100;
    W[74] = rand()%100;
    W[76] = rand()%100;
    W[78] = rand()%100;
    W[80] = rand()%100;
    W[84] = rand()%100;    
    W[86] = rand()%100;
    W[88] = rand()%100;
    W[90] = rand()%100;
    W[92] = rand()%100;
    W[94] = rand()%100;
    W[96] = rand()%100;
    

    V[4] = rand()%1000;
    V[6] = rand()%1000;
    V[8] = rand()%1000;
    V[10] = rand()%1000;
    V[12] = rand()%1000;
    V[14] = rand()%1000;
    V[16] = rand()%1000;
    V[20] = rand()%1000;
    V[22] = rand()%1000;
    V[24] = rand()%1000;
    V[26] = rand()%1000;
    V[28] = rand()%1000;    
    V[30] = rand()%1000;
    V[32] = rand()%1000;
    V[36] = rand()%1000;
    V[38] = rand()%1000;
    V[40] = rand()%1000;
    V[42] = rand()%1000;    
    V[44] = rand()%1000;
    V[46] = rand()%1000;
    V[48] = rand()%1000;
    V[52] = rand()%1000;
    V[54] = rand()%1000;
    V[56] = rand()%1000;    
    V[58] = rand()%1000;
    V[60] = rand()%1000;
    V[62] = rand()%1000;
    V[64] = rand()%1000;
    V[68] = rand()%1000;
    V[70] = rand()%1000;    
    V[72] = rand()%1000;
    V[74] = rand()%1000;
    V[76] = rand()%1000;
    V[78] = rand()%1000;
    V[80] = rand()%1000;
    V[84] = rand()%1000;    
    V[86] = rand()%1000;
    V[88] = rand()%1000;
    V[90] = rand()%1000;
    V[92] = rand()%1000;
    V[94] = rand()%1000;
    V[96] = rand()%1000;
    
    int nsd =0;
    
    ofstream fout("datiAGV.txt"); 
      if(fout.is_open()){
                         
                        fout <<"\nnNodi:"<<n-1; 
                        fout<<"\nnMerci:"<<nmerci;
                         
                        fout<<"\npesiArchi: [";
                        for(int i=1; i<n; i++)
                        {
                         for(int j=1; j<n; j++)
                                      fout << m[i][j]<<" "; 
                         fout<<"\n";
                        }
                        fout<<"]\n";
                        
                        fout<<"SD: [";
                        for(int i =0; i<nmerci; i++){
                                fout<<" 1 "<<d[i];
                                nsd++;}
                        for(int i=1; i<nmerci; i++){
                                fout<<" "<<d[0]<<" "<<d[i];
                                nsd++;}
                        for(int i=2; i<nmerci; i++){
                                fout<<" "<<d[1]<<" "<<d[i];
                                nsd++;}
                        for(int i=3; i<nmerci; i++){
                                fout<<" "<<d[2]<<" "<<d[i];
                                nsd++;}
                        for(int i=4; i<nmerci; i++){
                                fout<<" "<<d[3]<<" "<<d[i];
                                nsd++;}
                        for(int i=5; i<nmerci; i++){
                                fout<<" "<<d[4]<<" "<<d[i];
                                nsd++;}
                       for(int i=6; i<nmerci; i++){
                                fout<<" "<<d[5]<<" "<<d[i];
                                nsd++;}
                        for(int i=7; i<nmerci; i++){
                                fout<<" "<<d[6]<<" "<<d[i];
                                nsd++;}
                        for(int i=8; i<nmerci; i++){
                                fout<<" "<<d[7]<<" "<<d[i];
                                nsd++;}
                        for(int i=9; i<nmerci; i++){
                                fout<<" "<<d[8]<<" "<<d[i];
                                nsd++;}/*
                        for(int i=10; i<nmerci; i++){
                                fout<<" "<<d[9]<<" "<<d[i];
                                nsd++;}
                        for(int i=11; i<nmerci; i++){
                                fout<<" "<<d[10]<<" "<<d[i];
                                nsd++;}
                        for(int i=12; i<nmerci; i++){
                                fout<<" "<<d[11]<<" "<<d[i];
                                nsd++;}
                        for(int i=13; i<nmerci; i++){
                                fout<<" "<<d[12]<<" "<<d[i];
                                nsd++;}
                        for(int i=14; i<nmerci; i++){
                                fout<<" "<<d[13]<<" "<<d[i];
                                nsd++;}
                        */
                        fout<<" ]\n";
                        
                        fout <<"\nnSD:"<<nsd*2; 
                        
                        fout<<"\npMerci: [";
                        for(int i=0; i<nmerci; i++)
                                fout<<W[d[i]]<<" ";
                        fout<<"]\n";
                        
                        fout<<"vMerci: [";
                        for(int i=0; i<nmerci; i++)
                                fout<<V[d[i]]<<" ";
                        fout<<"]\n";
                      
      }
	else 
		cout << "File could not be opened." << endl;
		
	fout.flush();
    fout.close();	
	return 0;


    }