// TODO: add header file guard here 
#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H
#include <iostream>

// TODO: declare your namespace here
namespace sict {
	// TODO: define the Passenger class here
	class Passenger {
		private:
			char m_name[32], m_destination[32];
			int m_yearDeparture, m_monthDeparture, m_dayDeparture;
		public:
			Passenger();
			Passenger(const char *PassengerName, const char* PassengerDestination);
			Passenger(const char *PassengerName, const char* PassengerDestination, int year, int month, int day);
			bool isEmpty() const;
			void display() const;
			const char* name() const;
			bool canTravelWith(const Passenger&) const;
	};
}

#endif // !SICT_PASSENGER_H_