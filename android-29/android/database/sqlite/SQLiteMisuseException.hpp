#pragma once

#include "./SQLiteException.hpp"

class JString;

namespace android::database::sqlite
{
	class SQLiteMisuseException : public android::database::sqlite::SQLiteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLiteMisuseException(const char *className, const char *sig, Ts...agv) : android::database::sqlite::SQLiteException(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteMisuseException(QJniObject obj);
		
		// Constructors
		SQLiteMisuseException();
		SQLiteMisuseException(JString arg0);
		
		// Methods
	};
} // namespace android::database::sqlite

