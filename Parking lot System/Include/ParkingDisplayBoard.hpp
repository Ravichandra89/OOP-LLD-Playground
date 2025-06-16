#ifndef PARKING_DISPLAY_BOARD_HPP
#define PARKING_DISPLAY_BOARD_HPP

#include "ParkingSpot.hpp"
#include "Enums.hpp"

#include <string>
#include <iostream>
#include <map>
using namespace std;

class ParkingDisplayBoard {
        string boardId;
        map<ParkingSpotType, int> freeSpotsCount;
    
    public : 
        // Constructor
        ParkingDisplayBoard() = default;
        ParkingDisplayBoard(const string & id) : boardId(id){};

        // Update the free spots count for each type of parking spot;
        void updateFreeSpotsCount(const map<ParkingSpotType, int> & freeSpots) {
            freeSpotsCount = freeSpots;
            show();
        }

        // show the display board
        void show() const {
            cout << "[Display Board Id: " << boardId << " Free spots counts : ]" << endl;
            
            // Iterate through the map
            for (const auto & it : freeSpotsCount) {
                string spotType;
                
                switch(it.first) {
                    case ParkingSpotType::COMPACT: 
                        spotType = "COMPACT";
                        break;
                    
                    case ParkingSpotType::LARGE:
                        spotType = "LARGE";
                        break;
                    
                    case ParkingSpotType::HANDICAPPED:
                        spotType = "HANDICAPPED";
                        break;
                    
                    case ParkingSpotType::MOTORCYCLE:
                        spotType = "MOTORCYCLE";
                        break;

                    case ParkingSpotType::ELECTRIC:
                        spotType = "ELECTRIC";
                        break;

                    default: 
                        spotType = "UNKOWN";
                        break;
                }
                // showing the type free spots count
                cout << spotType << " : " << it.second << endl;
            }

        }

};

#endif