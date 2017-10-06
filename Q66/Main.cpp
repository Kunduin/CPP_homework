#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<bitset>

using namespace std;

int main()
{
	int result[100];
	string init;
	cin >> init;
	vector<int> all_p;
	vector<int> all_d;
	map<int,vector<int>> my_map;
	int m = init.length();

	for (int i = 0, k = 0; i < m; i++, k++)
	{
		while (((k+1)&k)==0)
		{
			vector<int> thisPair;
			my_map.insert(make_pair(k, thisPair));
			all_p.push_back(k);
			k++;
		}
		result[k] = (init[i]-48);
		all_d.push_back(k);
	}

	for (int e : all_d)
	{
		bitset<9> tmp_bit(e+1);
		for (int i = 0; i < 9; i++)
		{
			if (tmp_bit[i])
			{
				my_map[pow(2,i)-1].push_back(e);
			}
		}
	}

	for (int e : all_p)
	{
		vector<int> this_p = my_map[e];
		int tmp=result[this_p[0]];
		for (int i = 1; i < this_p.size(); i++)
		{
			tmp ^= result[this_p[i]];
		}
		result[e] = tmp;
	}

	for (int i = 0; i < m + all_p.size(); i++)
	{
		cout << result[i];
	}

}