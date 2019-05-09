//
// Created by 105166 on 5/1/19.
//

#include "PlaylistNode.h"

PlaylistNode::PlaylistNode() {
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    nextNodePtr = nullptr;
}

PlaylistNode::PlaylistNode(string _uID, string _songName, string _artistName, int _songLength) {
    uniqueID = _uID;
    songName = _songName;
    artistName = _artistName;
    songLength = _songLength;

}

void PlaylistNode::PrintPlaylistNode() {
    cout << "Unique ID: " << GetID() << endl;
    cout << "Song Name: " << GetSongName() << endl;
    cout << "Artist Name: " << GetArtistName() << endl;
    cout << "Song Length (in seconds): " << GetSongLength() << endl;
}

void PlaylistNode::InsertAfter(PlaylistNode*& next) {
    //Is the list empty
    PlaylistNode* current = this;

    while(current->nextNodePtr != nullptr) {
        current = current->nextNodePtr;
    }
    current->nextNodePtr = next;
    nextNodePtr = next;
}

void PlaylistNode::SetNext(PlaylistNode*& next) {
    nextNodePtr = next;
}

string PlaylistNode::GetID() {
    return uniqueID;
}

string PlaylistNode::GetSongName() {
    return songName;
}

string PlaylistNode::GetArtistName() {
    return artistName;
}

int PlaylistNode::GetSongLength() {
    return songLength;
}

PlaylistNode *PlaylistNode::GetNext() {
    return nextNodePtr;
}

