//
// Created by badcw on 2019/11/5.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; ; ++i) {
        printf("The result of No. %d Case is:  ", i);
        system("python3 rand.py");
        system("./std < test/data.in > test/std.out");
        system("./my < test/data.in > test/my.out");
        if (system("diff test/std.out test/my.out")) {
            printf("Wrong Answer\n");
            exit(0);
        }
        printf("Accepted\n");
    }
    return 0;
}