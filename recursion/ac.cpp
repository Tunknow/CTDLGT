#include <iostream>
#include <string>
using namespace std;

bool is_beautiful(string tower1, string tower2) {
    for (int i = 0; i < tower1.length() - 1; i++) {
        if (tower1[i] == tower1[i+1]) {
            return false;
        }
        else if (tower2[i] == tower2[i+1]) {
            return false;
        }
    }
    return true;
}

void move_block(string& from_tower, string& to_tower, int index) {
    char block = from_tower[index];
    from_tower.erase(index, 1);
    to_tower += block;
}

bool make_beautiful(string& tower1, string& tower2) {
    if (is_beautiful(tower1, tower2)) {
        return true;
    }
    
    while (true) {
        bool found_adjacent = false;
        for (int i = 0; i < tower1.length() - 1; i++) {
            if (tower1[i] == tower1[i+1]) {
                move_block(tower1, tower2, i);
                found_adjacent = true;
                break;
            }
            else if (tower2[i] == tower2[i+1]) {
                move_block(tower2, tower1, i);
                found_adjacent = true;
                break;
            }
        }
        if (!found_adjacent) {
            break;
        }
    }
    
    return is_beautiful(tower1, tower2);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n1,n2;
    string tower1;
    string tower2;
    
    cin >> n1 >> n2 >> tower1 >> tower2;
    
    if (make_beautiful(tower1, tower2)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
	}
}
