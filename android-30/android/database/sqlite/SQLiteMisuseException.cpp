#include "../../../JString.hpp"
#include "./SQLiteMisuseException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteMisuseException::SQLiteMisuseException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteMisuseException::SQLiteMisuseException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
			"()V"
		) {}
	SQLiteMisuseException::SQLiteMisuseException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteMisuseException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

