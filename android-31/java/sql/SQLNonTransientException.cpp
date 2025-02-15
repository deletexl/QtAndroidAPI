#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./SQLNonTransientException.hpp"

namespace java::sql
{
	// Fields
	
	// QJniObject forward
	SQLNonTransientException::SQLNonTransientException(QJniObject obj) : java::sql::SQLException(obj) {}
	
	// Constructors
	SQLNonTransientException::SQLNonTransientException()
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"()V"
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SQLNonTransientException::SQLNonTransientException(JThrowable arg0)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0, JString arg1)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0, JThrowable arg1)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0, JString arg1, jint arg2)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0, JString arg1, JThrowable arg2)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	SQLNonTransientException::SQLNonTransientException(JString arg0, JString arg1, jint arg2, JThrowable arg3)
		: java::sql::SQLException(
			"java.sql.SQLNonTransientException",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::sql

