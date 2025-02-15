#include "../../../JString.hpp"
#include "./SQLiteBlobTooBigException.hpp"

namespace android::database::sqlite
{
	// Fields
	
	// QJniObject forward
	SQLiteBlobTooBigException::SQLiteBlobTooBigException(QJniObject obj) : android::database::sqlite::SQLiteException(obj) {}
	
	// Constructors
	SQLiteBlobTooBigException::SQLiteBlobTooBigException()
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"()V"
		) {}
	SQLiteBlobTooBigException::SQLiteBlobTooBigException(JString arg0)
		: android::database::sqlite::SQLiteException(
			"android.database.sqlite.SQLiteBlobTooBigException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::database::sqlite

