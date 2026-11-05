#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main (){
    cout<<"Rentrez votre mot de passe: ";
    string mot_de_passe;
    getline(cin, mot_de_passe);
    int score = 0;
     while(mot_de_passe.empty()){
        cout<<"Il faut au moins un caractère"<<endl;
        cout<<"Rentrez votre mot de passe: ";
        getline(cin, mot_de_passe);
    }
    if(mot_de_passe.length() >= 12 ){
        score = score + 3;
    }
    else{
        score = score - 4;
    }
    for(int i = 0; i < mot_de_passe.length(); i++){
        if(islower((unsigned char)mot_de_passe[i])){
            score++;
            break;
        }
    }
    for(int i = 0; i < mot_de_passe.length(); i++){
        if(isupper((unsigned char)mot_de_passe[i])){
            score++;
            break;
        }
    }
    for(int i = 0; i < mot_de_passe.length(); i++){
        if(isdigit((unsigned char)mot_de_passe[i])){
            score++;
            break;
        }
    }
    for(int i = 0; i < mot_de_passe.length(); i++){
        if(ispunct((unsigned char)mot_de_passe[i])){
            score++;
            break;
        }
    }
    for(int i = 0; i < (mot_de_passe.length()) - 1; i++ ){
        if(mot_de_passe[i] == mot_de_passe[i+1]){
            score = score - 2;
            break;
        }
    }
    if(score < 0){
        score = 0;
    }
    if(score >= 0 && score <= 2){
        cout<<"Votre mot de passe est faible, il vous est vivement conseillé de le changer !"<<endl;
    }
    if(score >= 3 && score <= 4){
        cout<<"Votre mot de passe est moyen, il vous est vivement conseillé de le changer !"<<endl;
    }
    if(score >= 5 && score <= 6){
        cout<<"Votre mot de passe est fort, il peut malgré tout être amélioré "<<endl;
    }
    if(score == 7){
        cout<<"Votre mot de passe est robuste, gardez en tête que rien n'est infaillible"<<endl;
    }
}