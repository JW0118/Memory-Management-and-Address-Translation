//Josh Wells
//P676W568
//Programming Assignment 3
//1Apr24

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <iomanip>

using namespace std;

const int PAGE_SIZE = 1024;  // Page size in bytes
const int FRAME_SIZE = 1024; // Frame size in bytes
const int NUM_PAGES = 50;    // Number of pages in logical memory
const int NUM_FRAMES = 50;    // Number of frames in physical memory


int main() {
    string input;
    int logicalAddress;

   //initializing page frame table
    vector<int> pageFrameTable(NUM_PAGES, -1); 

    //Filling page frame table with frames
    for (int i = 0; i < NUM_PAGES; ++i) {
        pageFrameTable[i] = i % NUM_FRAMES;
    }


        do{
            //prompting user
            cout << "Enter logical address in hexadecimal (0x3A7F). Type done' to end:" << endl;
            cout << "> ";

         
            getline(cin, input); //taking input

            //checking if user is done with program
            if (input == "done") {
                break;
            }

            // converting user input into integer
            stringstream ss(input);
            ss >> hex >> logicalAddress;
            
            // getting page number and offset from address
            int pageNumber = logicalAddress / PAGE_SIZE;
            int offset = logicalAddress & 0xFF;
           
            //checking if page number is within storage capacity
            if (pageNumber < NUM_PAGES) { 

                cout << "\nLogical Address: 0x" << hex << logicalAddress << " => Page Number: 0x" << hex << pageNumber << " => Offset: 0x" << hex << offset << endl << endl;
            }
            else {
                cout << "Invalid Page Number: 0x" << hex << pageNumber << endl;
            }
        
        } while (input != "done");
}
