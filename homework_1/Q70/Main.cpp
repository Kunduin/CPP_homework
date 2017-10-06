#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iomanip>

using namespace std;

int main()
{
	map<string, vector<double>> student_map;
	map<string, vector<double>> course_map;

	long long n_student;
	cin >> n_student;
	for (long long i = 0; i < n_student; i++)
	{
		string student_name;
		string student_num;
		string student_course;
		long long student_score;
		cin >> student_name;
		cin >> student_num;
		cin >> student_course;
		cin >> student_score;

		auto it_student = student_map.find(student_name);
		auto it_course = course_map.find(student_course);
		if (it_student == student_map.end())
		{
			vector<double> vec_score;
			vec_score.push_back(student_score);
			student_map[student_name] = vec_score;
		}
		else
		{
			student_map[student_name].push_back(student_score);
		}

		if (it_course == course_map.end())
		{
			vector<double> vec_score_course;
			vec_score_course.push_back(student_score);
			course_map[student_course] = vec_score_course;
		}
		else
		{
			course_map[student_course].push_back(student_score);
		}
	}

	long long n_command;
	cin >> n_command;
	for (long i = 0; i < n_command; i++)
	{
		string command;
		cin >> command;
		if (command == "course")
		{
			string course_name;
			cin >> course_name;
			vector<double> course_score = course_map[course_name];
			double sum = 0;
			for (double e : course_score)
			{
				sum += e;
			}
			cout << course_name << " " << setiosflags(ios::fixed) << setprecision(2) << sum / course_score.size() << endl;
		}
		else
		{
			string student_name;
			cin >> student_name;
			vector<double> student_score = student_map[student_name];
			double sum = 0;
			for (double e : student_score)
			{
				sum += e;
			}
			cout <<student_name<<" "<< setiosflags(ios::fixed) << setprecision(2) << sum / student_score.size() << endl;

		}
	}


}