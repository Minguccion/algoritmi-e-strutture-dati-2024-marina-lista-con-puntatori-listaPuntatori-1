#include <iostream>
#include "ListaPuntatori.cpp" 

int main() {
    ListaPuntatori<int> lista;
    int n;

        // 1. Creazione della lista
    std::cout << "Quanti elementi vuoi inserire nella lista? ";
    std::cin >> n;
        //2. inserimento elementi
    for (int i = 0; i < n; ++i) {
        int valore;
        std::cout << "che elementi vuoi inserire " << (i + 1) << ": ";
        std::cin >> valore;
        lista.inslista(valore, i + 1);
    }

        //3.  Visualizzazione della lista
    std::cout << "\nGli elementi della lista sono: ";
    for (int i = 1; i <= lista.lunghezza(); ++i) {
        std::cout << lista.leggilista(i) << " ";
    }
    std::cout << "\n";

    //4. Ricerca e Manipolazione
    int elemcercato;
    std::cout << "\nche elemento vuoi cercare: ";
    std::cin >> elemcercato;
    if (lista.contiene(elemcercato)) {
        int occorrenze = lista.contaOccorrenze(elemcercato);
        std::cout << "L'elemento " << elemcercato << " è presente " << occorrenze << " volte.\n";
    } else {
        std::cout << "L'elemento " << elemcercato << " non esiste .\n";
    }

    // 5. Calcolo e Confronto
    std::cout << "\nmax elementi lista: " << lista.massimo() << "\n";
    std::cout << "min elementi lista: " << lista.minimo() << "\n";
    std::cout << "somma è: " << lista.somma() << "\n";

    // Modifica della lista: aggiornamento di un elemento
    int posaggiornata, nuovovalore;
    std::cout << "\npos elemento da aggiornare: ";
    std::cin >> posaggiornata;
    std::cout << " nuovo valore: ";
    std::cin >> nuovovalore;
    lista.scrivilista(nuovovalore, posaggiornata);

    // Visualizzazione della lista aggiornata
    std::cout << "\nelementi aggiornati: ";
    for (int i = 1; i <= lista.lunghezza(); ++i) {
        std::cout << lista.leggilista(i) << " ";
    }
    std::cout << "\n";

    // Rimozione di un elemento dalla lista tramite posizione
    int posrimossa;
    std::cout << "\nos elem da rimuovere: ";
    std::cin >> posrimossa;
    lista.canclista(posrimossa);

 
    std::cout << "\nelem lista dopo rimozione: ";
    for (int i = 1; i <= lista.lunghezza(); ++i) {
        std::cout << lista.leggilista(i) << " ";
    }
    std::cout << "\n";


    int valoredatogliere;
    std::cout << "\nvalore elem da togliere: ";
    std::cin >> valoredatogliere;
    for (int i = 1; i <= lista.lunghezza(); ++i) {
        if (lista.leggilista(i) == valoredatogliere) {
            lista.canclista(i);
            break;
        }
    }


    std::cout << "\nGli elementi della lista dopo la rimozione del valore sono: ";
    for (int i = 1; i <= lista.lunghezza(); ++i) {
        std::cout << lista.leggilista(i) << " ";
    }
    std::cout << "\n";

    return 0;
}
