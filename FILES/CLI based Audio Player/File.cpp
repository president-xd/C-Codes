#include <iostream>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Welcome To Our Music Player" << endl;
    cout << endl;
    cout << "Press 1 for Hairun Khairun Music" << endl;
    cout << "Press 2 for Mask Off Music" << endl;
    cout << "Press 3 for In the End Music" << endl;
    cout << "Press 4 for Childhood Music" << endl;
    cout << "Press 5 for Amrof Col Music" << endl;
    cout << "Press 6 for Swaha x Faded Music" << endl;
    cout << "Press 7 for Yalan Music" << endl;
    cout << "Press 8 for Kavakaz Music" << endl;
    cout << "Press 9 for Uzak Volin Music" << endl;
    cout << "Press 10 for Drive Forever Music" << endl;
    cout << endl;
}

// Function to play the selected music
void playMusic(int choice) {
    switch (choice) {
        case 1:
            PlaySound(TEXT("HariunKhairun.wav"), NULL, SND_SYNC);
            break;
        case 2:
            PlaySound(TEXT("Mask Off Remix - Tupac Mask Off.wav"), NULL, SND_SYNC);
            break;
        case 3:
            PlaySound(TEXT("in_the_end.wav"), NULL, SND_SYNC);
            break;
        case 4:
            PlaySound(TEXT("childhood.wav"), NULL, SND_SYNC);
            break;
        case 5:
            PlaySound(TEXT("Amrof_col.wav"), NULL, SND_SYNC);
            break;
        case 6:
            PlaySound(TEXT("Swaha X Faded Ringtone by ROYAL MUSIC MANIA.wav"), NULL, SND_SYNC);
            break;
        case 7:
            PlaySound(TEXT("Yalan_Dunya.wav"), NULL, SND_SYNC);
            break;
        case 8:
            PlaySound(TEXT("Kavakaz.wav"), NULL, SND_SYNC);
            break;
        case 9:
            PlaySound(TEXT("Uzak Violin - Uzak Violin Beat Mix - Bgm.wav"), NULL, SND_SYNC);
            break;
        case 10:
            PlaySound(TEXT("Drive_Forever_Remix.wav"), NULL, SND_SYNC);
            break;
        default:
            cout << "Invalid Entry" << endl;
            break;
    }
}

int main() {
    int input;

    displayMenu();

    cout << "Enter number of desired music: ";
    cin >> input;

    cout << "Playing Song.......... " << endl;

    playMusic(input);

    cout << "Song stopped" << endl;

    return 0;
}
