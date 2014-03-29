#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
//#include <error>

using namespace std;


int main(int argc, char const *argv[])
{
    double bs_x[] = { 35, -3, 76, 76, -3 };
    double bs_y[] = { 35, 77, 77, -3, -3 };
    double tdoa[384][4];
    ifstream infile("otdoa.txt");
    if (!infile) 
    {
        cout << "Cannot open otdoa.txt" << endl;
        return -1;
    }

    return 0;
}