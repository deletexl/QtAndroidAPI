#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteAbortException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteAbortException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteAbortException(QJniObject obj);
		
		// Constructors
		SQLiteAbortException();
		SQLiteAbortException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

