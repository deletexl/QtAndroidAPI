#pragma once

#include "./SQLException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLTransientException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLTransientException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTransientException(QJniObject obj);
		
		// Constructors
		SQLTransientException();
		SQLTransientException(JString arg0);
		SQLTransientException(JThrowable arg0);
		SQLTransientException(JString arg0, JString arg1);
		SQLTransientException(JString arg0, JThrowable arg1);
		SQLTransientException(JString arg0, JString arg1, jint arg2);
		SQLTransientException(JString arg0, JString arg1, JThrowable arg2);
		SQLTransientException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

