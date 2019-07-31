    //SPOJ TOE2
    //BFS
    #include <stdio.h>
    #include <string.h>
    #include <string>
    #include <algorithm>
    #include <vector>
    #include <iostream>
    #include <set>
    #include <vector>
    #include <map>
    #include <queue>
    using namespace std;

    bool win (string str) {
    	bool is_full = true;
    	for (int i=0;i<str.size();i++) {
    		if (str[i] == '.') {
    			is_full = false;
    			break;
    		}
    	}
    	if (is_full) {
    		return true;
    	}

    	if (str[0] != '.' && str[0] == str[4] && str[4] == str[8]) {
    		return true;
    	} else if (str[2] != '.' && str[2] == str[4] && str[4] == str[6]) {
    		return true;
    	} else {
    		for (int i=0;i<3;i++) {
    			if (str[i*3 + 0] != '.' && str[i*3 + 0] == str[i*3 + 1] && str[i*3 + 1] == str[i*3 + 2]) {
    				return true;
    			}
    		}
    		for (int i=0;i<3;i++) {
    			if (str[0*3 + i] != '.' && str[0*3 + i] == str[1*3 + i] && str[1*3 + i] == str[2*3 + i]) {
    				return true;
    			}
    		}
    	}
    	return false;
    }

    void pre_calc (set<string> &valid) {
    	string state = ".........";
    	queue <string> state_q;
    	queue <int> turn_q;
    	char turn[] = "XO";
    	state_q.push(state);
    	turn_q.push(0);
    	valid.insert(state);

    	while (!state_q.empty()) {
    		string c_state = state_q.front();
    		int c_turn = turn_q.front();

    		state_q.pop();
    		turn_q.pop();

    		if (win(c_state)) {
    			continue;
    		}

    		for (int i=0;i<9;i++) {
    			if (c_state[i] == '.') {
    				string n_state = c_state;
    				n_state[i] = turn[c_turn];
    				if (valid.find(n_state) == valid.end()) {
    					valid.insert(n_state);
    					state_q.push(n_state);
    					turn_q.push(1-c_turn);
    				}
    			}
    		}
    	}

    	return;
    }

    int main () {
    	set <string> valid;
    	pre_calc (valid);

    	char str[10];
    	string state;
    	while (true) {
    		scanf ("%s",str);
    		state = str;
    		if (state == "end") {
    			break;
    		}
    		if (valid.find(state) != valid.end() && win(state)) {
    			printf ("valid\n");
    		} else {
    			printf ("invalid\n");
    		}
    	}

    	return 0;
    }
