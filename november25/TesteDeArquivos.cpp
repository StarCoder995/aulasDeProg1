#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs = std::filesystem;
int main(){
    int i = 0;
    const fs :: path pasta = fs :: current_path();
    string listaArquivos[5];
    for (auto const& iteradorDePasta : fs :: directory_iterator{pasta}){
        listaArquivos[i] = iteradorDePasta.path().string();
        cout << listaArquivos[i];
        i++;
    }

}