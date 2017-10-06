#include<iostream>
#include<string>
#include<vector>

using namespace std;

void my_add(vector<long long>&, long long);
void my_sub(vector<long long>&, long long);
void my_mul(vector<long long>&, long long);
void my_pow(vector<long long>&, long long);
long long my_sqa(vector<long long>&);
void my_print(vector<long long>&);


int main()
{
	long long n_num=0;
	cin >> n_num;
	vector<long long> num;
	for (long long i = 0; i < n_num; i++)
	{
		long long tmp=0;
		cin >> tmp;
		num.push_back(tmp);
	}
	long long n_code=0;
	cin >> n_code;
	long long count = 0;
	bool judgeSqa = false;
	long long theSqa = 0;

	for (long long i = 0; i < n_code; i++)
	{
		string com="";
		cin >> com;
		long long tmp_para;

		if (com == "add")
		{
			judgeSqa = false;
			cin >> tmp_para;
			my_add(num, tmp_para);
		}
		else if (com == "sub")
		{
			judgeSqa = false;
			cin >> tmp_para;
			my_sub(num, tmp_para);
		}
		else if (com == "mul")
		{
			judgeSqa = false;
			cin >> tmp_para;
			my_mul(num, tmp_para);
		}
		else if (com == "pow")
		{
			judgeSqa = false;
			cin >> tmp_para;
			my_pow(num, tmp_para);
		}
		else if (com == "sqa")
		{

			judgeSqa = true;
			theSqa=my_sqa(num);
			cout << theSqa << endl;
		}
		else if (com == "print")
		{

			
				my_print(num);
			
			judgeSqa = false;

		}
	}
}


void my_add(vector<long long> &num,long long para)
{
	for (long long i = 0; i < num.size(); i++)
	{
		num[i] += para;
	}
}

void my_sub(vector<long long> &num,long long para)
{
	for (long long i = 0; i < num.size(); i++)
	{
		num[i] -= para;
	}
}

void my_mul(vector<long long> &num,long long para)
{
	for (long long i = 0; i < num.size(); i++)
	{
		num[i] *= para;
	}
}

void my_pow(vector<long long> &num,long long para)
{
	for (long long i = 0; i < num.size(); i++)
	{
		long long result = 1;
		for (long long k = 0; k < para; k++)
		{
			result *= num[i];
		}
		num[i] = result;
	}
}

long long my_sqa(vector<long long> &num)
{
	long long sum=0;
	for (long long i = 0; i < num.size(); i++)
	{
		sum += num[i]*num[i];
	}
	return sum;
}

void my_print(vector<long long> &num)
{
	for (long long i = 0; i < num.size(); i++)
	{

		if (i != num.size()-1)
		{
			cout << num[i] << " ";
		}
		else
		{
			cout << num[i];
		}
	}

}