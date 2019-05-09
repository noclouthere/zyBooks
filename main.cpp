#include <iostream>
#include <algorithm>
#include "PlaylistNode.h"
using namespace std;

void PrintMenu(string);




int main() {
    PlaylistNode* first;

    string playlist;
    std::cout << "Enter playlist's title:" << std::endl;
    getline(cin, playlist);
    //Create the menu with an additional line
    cout << endl;
    string response = "";
    while(response != "q"){
        PrintMenu(playlist);
        //validate the response
        string validResponses[] = {"a","d","c","s","t","o","q"};
        while (std::find(validResponses,validResponses+7,response) == validResponses+7){
            cin >> response;
        }
        //Run methods of the PlaylistNode
        if(response == "a"){
            //Get the info
           string uId, songName, artistName;
           int songLength;
           cout << "ADD SONG" << endl;
           cout << "Enter song's unique ID:" << endl;
           cin >> uId;
           cout << "Enter song's name:"<<endl;
           getline(cin,songName);
           cout << "Enter artist's name:" << endl;
           getline(cin,artistName);
           cout << "Enter song's length (in seconds):" << endl;
           cin >> songLength;
           PlaylistNode* newSong = new PlaylistNode(uId, songName, artistName, songLength);

        }
        else if (response == "d"){

        }
        else if (response == "s"){

        }
        else if (response == "t"){

        }
        else if (response == "o"){

        }
        else if (response == "q"){

        }
    }

    return 0;
}


void PrintMenu(string playlist){

        cout << playlist << " PLAYLIST MENU"<<endl;
        cout << "a - Add song" << endl;
        cout << "d - Remove song" << endl;
        cout << "c - Change position of song" << endl;
        cout << "s - Output songs by specific artist" << endl;
        cout << "t - Output total time of playlist (in seconds)" << endl;
        cout << "o - Output full playlist" << endl;
        cout << "q - Quit" << endl;
        cout << endl << "Choose an option:" << endl;

}