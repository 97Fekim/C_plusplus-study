#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor;	// 전방선언

class Patient
{
private:
	string			m_name;
	vector<Doctor*> m_doctor;


public:
	Patient(string name_in)
		: m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctor.push_back(new_doctor);
	}

	void meetDoctor();

	friend class Doctor;

};


class Doctor
{
private:
	string			 m_name;
	vector<Patient*> m_patient;

public:
	Doctor(string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patient.push_back(new_patient);
	}

	void meetPatient()
	{
		for (auto& ele : m_patient)
		{
			cout << "Meet patient : " << ele->m_name << endl;
		}
	}

	friend class Patient;

};


/* 컴파일러를 위해 Patient에 있던걸 아래로 가져왔다. */
void Patient::meetDoctor()
{
	for (auto& ele : m_doctor)
	{
		cout << "Meet doctor : " << ele->m_name << endl;
	}
}


int main()
{
	Patient* p1 = new Patient("jack jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctor();
	d1->meetPatient();

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;



	return 0;
}