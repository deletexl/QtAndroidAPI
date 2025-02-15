#pragma once

#include "./SQLNonTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLIntegrityConstraintViolationException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLIntegrityConstraintViolationException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLIntegrityConstraintViolationException(QJniObject obj);
		
		// Constructors
		SQLIntegrityConstraintViolationException();
		SQLIntegrityConstraintViolationException(JString arg0);
		SQLIntegrityConstraintViolationException(JThrowable arg0);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1);
		SQLIntegrityConstraintViolationException(JString arg0, JThrowable arg1);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, JThrowable arg2);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

