#include "../../../JString.hpp"
#include "./SQLiteFullException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteFullException::SQLiteFullException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteFullException::SQLiteFullException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteFullException",
			"()V"
		) {}
	SQLiteFullException::SQLiteFullException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteFullException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

