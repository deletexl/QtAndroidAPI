#pragma once

#include "../DateTimeException.hpp"

class JString;
class JThrowable;

namespace java::time::zone
{
	class ZoneRulesException : public java::time::DateTimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneRulesException(const char *className, const char *sig, Ts...agv) : java::time::DateTimeException(className, sig, std::forward<Ts>(agv)...) {}
		ZoneRulesException(QJniObject obj);
		
		// Constructors
		ZoneRulesException(JString arg0);
		ZoneRulesException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time::zone

