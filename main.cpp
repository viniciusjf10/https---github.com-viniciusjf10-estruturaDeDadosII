#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

using namespace std;

//COLOCAR OS VALORES NA STRUCT   KLEITON
//SALVAR OS VALORES NO ARQUIVO   KLEITON

//IMPORTAR N REGISTROS EM UM ARRANJO DE REGISTROS   KLEITON
//TESTE DE VALIDAÇÃO DO ID  ÁGATA E NIKOLAS
//PRINTAR 10 VALORES OU COLOCAR 100 VALORES NO TXT DE SAIDA    ÁGATA  E  NIKOLAS

//FAZER O RELATORIO  TODOS


void leituraDeLinhasTrack() 
{
    string idAux;
    string nameAux;
    string popularityAux;
    float popularityAuxFloat;
    
    string durationAux;
    float durationAuxFloat;
    
    string explicitoAux;
    bool explicitoAuxBool;
    
    string artistaAux;
    string idArtistAux;
    string realeseAux;
    
    string danceabilityAux;
    float danceabilityAuxFloat;
    
    string energyAux;
    float energyAuxFloat;
    
    string keyAux;
    int keyAuxInt;
    
    string loudnessAux;
    float loudnessAuxFloat;
    
    string modeAux;
    int modeAuxInt;
    
    string speechinessAux;
    float speechinessAuxFloat;
    
    string acousticnessAux;
    float acousticnessAuxFloat;
    
    string instrumentalnessAux;
    float instrumentalnessAuxFloat;
    
    string livenessAux;
    float livenessAuxFloat;
    
    string valenceAux;
    float valenceAuxFloat;
    
    string tempoAux;
    float tempoAuxFloat;
    
    string signatureAux;
    int signatureAuxInt;

     
    fstream arq("tracks.csv", ios_base::in | ios_base::out | ios_base::app);
    int j = 0;
    while (j <= 10)
    {
        getline(arq, idAux, ',');
        getline(arq, nameAux, ',');
        getline(arq, popularityAux, ',');
        getline(arq, durationAux, ',');
        getline(arq, explicitoAux, ',');
        getline(arq, artistaAux, ',');
        getline(arq, idArtistAux, ',');
        getline(arq, realeseAux, ',');
        getline(arq, danceabilityAux, ',');
        getline(arq, energyAux, ',');
        getline(arq, keyAux, ',');
        getline(arq, loudnessAux, ',');
        getline(arq, modeAux, ',');
        getline(arq, speechinessAux, ',');
        getline(arq, acousticnessAux, ',');
        getline(arq, instrumentalnessAux, ',');
        getline(arq, livenessAux, ',');
        getline(arq, valenceAux, ',');
        getline(arq, tempoAux, ',');
        getline(arq, signatureAux, '\n');

        if (j > 0)
        {
            int n = idAux.lenght();
            char idAuxChar[n+1];
            strcpy(idAuxChar, s.c_str());
            
            n = nameAux.lenght();
            char nameAuxChar[n+1];
            strcpy(nameAuxChar, s.c_str());

            popularityAuxFloat = stof (popularityAux);
            
            durationAuxFloat = stof (durationAux);
            
            explicitoAuxBool = stoi (explicitoAuxBool);
            
            n = artistaAux.lenght();
            char artistaAuxChar[n+1];
            strcpy(artistaAuxChar, s.c_str());

            n = idArtistAux.lenght();
            char idArtistAuxChar[n+1];
            strcpy(idArtistAuxChar, s.c_str());

            n = realeaseAux.lenght();
            char releaseAuxChar[n+1];
            strcpy(releaseAuxChar, s.c_str());

            danceabilityAuxFloat = stof (danceabilityAux);
            
            energyAuxFloat = stof (energyAux);

            keyAuxInt = stoi (keyAux);
        
            loudnessAuxFloat = stof (loudnessAux);

            modeAuxInt = stoi (modeAux);

            speechinessAuxFloat = stof (speechinessAux);
        
            acousticnessAuxFloat = stof (acousticnessAux);

            instrumentalnessAuxFloat = stof (instrumentalnessAux);
        
            livenessAuxFloat = stof (livenessAux);
            
            valenceAuxFloat = stof (valenceAux);
            
            tempoAuxFloat = stof (tempoAux);

            signatureAuxInt = stof (signatureAux);
        }
        j += 1;
    }
    arq.close();

}
void leituraDeLinhasArtists()
{
    string idAux = "";
    string followAux = "";
    string genresAux = "";
    string nameAux = "";
    string popularityAux = "";
    float popularityAuxFloat;
    fstream arq("artists.csv", ios_base::in | ios_base::out | ios_base::app);
    int v = 0;
    while (v <= 10) // MUDAR PARA TAM ARQUIVO DPS.
    {
        getline(arq, idAux, ',');
        getline(arq, followAux, ',');
        getline(arq, genresAux, ',');
        getline(arq, nameAux, ',');
        getline(arq, popularityAux, '\n');

        if (v > 0)
        {
            int n = idAux.lenght();
            char idAuxChar[n+1];
            strcpy(idAuxChar, s.c_str()); 

            n = followAux.lenght();
            char followAuxChar[n+1];
            strcpy(followAuxChar, s.c_str());

            n = genresAux.lenght();
            char genresAuxChar[n+1];
            strcpy(genresAuxChar, s.c_str());         

            n = nameAux.lenght();
            char nameAuxChar[n+1];
            strcpy(nameAuxChar, s.c_str());          
            
            popularityAuxFloat = stof(popularityAux);     
            
        }
        v += 1;
    }
    arq.close();
}

void verificaArquivosBin(){
    ifstream artBin("artists.bin");
    ifstream trackBin("tracks.bin");
    if ((artBin.is_open()) && (trackBin.is_open())){
        cout << "Todos arquivos binarios ja existem." << endl;
    }
    else if ((artBin.is_open()) && (!trackBin.is_open())){
        cout << "O arquivo artist.bin existe, porem o arquivo tracks.bin nao. Sera feita sua construcao" << endl;
        //leituraDeLinhasTrack();
    }
    else if ((!artBin.is_open()) && (trackBin.is_open())){
        cout << "O arquivo tracks.bin existe, porem o arquivo artists.bin nao. Sera feita sua construcao" << endl;
        //leituraDeLinhasArtists();
    }
    else{
        cout << "Nenhum arquivo binario existe. Ambos serao construidos" << endl;
        cout << "Iniciando leitura de artistas" << endl;
        //leituraDeLinhasArtists();
        cout << "Iniciando leitura de tracks" << endl;
        //leituraDeLinhasTrack();
    }
}

int main()
{
    verificaArquivosBin();
    return 0;
}