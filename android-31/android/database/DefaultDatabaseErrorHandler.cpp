#include "./sqlite/SQLiteDatabase.hpp"
#include "./DefaultDatabaseErrorHandler.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DefaultDatabaseErrorHandler::DefaultDatabaseErrorHandler()
		: JObject(
			"android.database.DefaultDatabaseErrorHandler",
			"()V"
		) {}
	
	// Methods
	void DefaultDatabaseErrorHandler::onCorruption(android::database::sqlite::SQLiteDatabase arg0) const
	{
		callMethod<void>(
			"onCorruption",
			"(Landroid/database/sqlite/SQLiteDatabase;)V",
			arg0.object()
		);
	}
} // namespace android::database

