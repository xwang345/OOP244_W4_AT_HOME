// Created by Xiaochen Wang
// Student ID: 015297153
// TODO: add your headers here 
#include <iostream>
#include<cstring>
#include<stdio.h>
#include "Passenger.h"

using namespace std;
// TODO: continue your namespace here
namespace sict {
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		*m_name = '\0';
		*m_destination = '\0';
		m_yearDeparture = 0;
		m_monthDeparture = 0;
		m_dayDeparture = 0;
	}

	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char *name, const char* destination) {
		if (*name == '\0' || *destination == '\0' ){
			*m_name = '\0';
			*m_destination = '\0';
			m_yearDeparture = 0;
			m_monthDeparture = 0;
			m_dayDeparture = 0;
		} else {
			strcpy(m_name, name);
			strcpy(m_destination, destination);
			m_yearDeparture = 2017;
			m_monthDeparture = 7;
			m_dayDeparture = 1;
		}
	}

	Passenger::Passenger(const char *PassengerName, const char *PassengerDestination, int years, int months, int days) {
		if(PassengerName != nullptr && strlen(PassengerName) > 0 &&
				PassengerDestination != nullptr && strlen(PassengerDestination) > 0 &&
				years >= 2017 && years <= 2020 && months >= 1 && months <=12 &&
				days >= 1 && days <= 31){
			strcpy(m_name, PassengerName);
			strcpy(m_destination, PassengerDestination);
			m_yearDeparture = years;
			m_monthDeparture = months;
			m_dayDeparture = days;
		}else{
			*m_name = '\0';
			*m_destination = '\0';
			m_yearDeparture = 0;
			m_monthDeparture = 0;
			m_dayDeparture = 0;
		}
	}


	bool Passenger::canTravelWith(const Passenger& psg) const{
		bool TF;
        TF = strcmp(psg.m_destination, m_destination) == 0 &&
            strcmp(psg.m_destination, m_destination) == 0 &&
            psg.m_yearDeparture == m_yearDeparture &&
            psg.m_monthDeparture == m_monthDeparture &&
            psg.m_dayDeparture == m_dayDeparture ? true : false;
		return TF;
	}

	const char* Passenger::name() const {
        return m_name;
	}

	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		bool TF;
		if (*m_name == '\0' || *m_destination == '\0') {
			TF = true;
		} else {
			TF = false;
		}
		return TF;
	}

	// TODO: implement display query here
	void Passenger::display() const {
		cout << m_name << " - " << m_destination << " on " << m_yearDeparture << "/";
        if(m_monthDeparture < 10) {
            cout << "0" << m_monthDeparture << "/";
            if (m_dayDeparture < 10) {
                cout << m_dayDeparture << endl;
            } else {
                cout << m_dayDeparture << endl;
            }
        } else {
            cout << m_monthDeparture << m_dayDeparture << endl;
        }

	}
}