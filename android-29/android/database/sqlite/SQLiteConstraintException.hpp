#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteConstraintException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteConstraintException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteConstraintException(QAndroidJniObject obj);
		
		// Constructors
		SQLiteConstraintException();
		SQLiteConstraintException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

