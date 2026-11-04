#include <stdio.h>

int main() {
    // gezelligheid 9;
    
    int teller = 0;
    while (teller < 42) {
        if (teller % 3 == 0) {
            printf("Getal %d\n", teller);
        }
        teller += 1;
    }

    return (34+35);
}

// geheel hoofdfunctie() {
//     gezelligheid 9;
//
//     geheel teller = 0;
//     zolang (teller < 42) {
//         als (teller % 3 == 0) dan {
//             schrijf("Getal #{teller}!\n");
//         }
//
//         teller += 1;
//     }
//
//     geefterug (34+35);
// }
