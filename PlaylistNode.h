//
// Created by 105166 on 5/1/19.
//

#ifndef PLAYLISTNODE_PLAYLISTNODE_H
#define PLAYLISTNODE_PLAYLISTNODE_H

#include <iostream>
using namespace std;

class PlaylistNode {
private:
    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;

public:
    PlaylistNode();//default constructor
    PlaylistNode(string _uID, string _songName,
            string _artistName, int _songLength); //parameterized constructor
    //Setters or Mutators
    void InsertAfter(PlaylistNode*&);
    void SetNext(PlaylistNode*&);
    //Getters
    string GetID();
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlaylistNode* GetNext();
    void PrintPlaylistNode();

};


#endif //PLAYLISTNODE_PLAYLISTNODE_H
