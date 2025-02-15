#include "../../JByteArray.hpp"
#include "../content/ContentValues.hpp"
#include "./sqlite/SQLiteDatabase.hpp"
#include "../../JString.hpp"
#include "./DatabaseUtils_InsertHelper.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DatabaseUtils_InsertHelper::DatabaseUtils_InsertHelper(android::database::sqlite::SQLiteDatabase arg0, JString arg1)
		: JObject(
			"android.database.DatabaseUtils$InsertHelper",
			"(Landroid/database/sqlite/SQLiteDatabase;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	void DatabaseUtils_InsertHelper::bind(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"bind",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"bind",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jdouble arg1) const
	{
		callMethod<void>(
			"bind",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"bind",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"bind",
			"(II)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"bind",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void DatabaseUtils_InsertHelper::bind(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"bind",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void DatabaseUtils_InsertHelper::bindNull(jint arg0) const
	{
		callMethod<void>(
			"bindNull",
			"(I)V",
			arg0
		);
	}
	void DatabaseUtils_InsertHelper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::execute() const
	{
		return callMethod<jlong>(
			"execute",
			"()J"
		);
	}
	jint DatabaseUtils_InsertHelper::getColumnIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jlong DatabaseUtils_InsertHelper::insert(android::content::ContentValues arg0) const
	{
		return callMethod<jlong>(
			"insert",
			"(Landroid/content/ContentValues;)J",
			arg0.object()
		);
	}
	void DatabaseUtils_InsertHelper::prepareForInsert() const
	{
		callMethod<void>(
			"prepareForInsert",
			"()V"
		);
	}
	void DatabaseUtils_InsertHelper::prepareForReplace() const
	{
		callMethod<void>(
			"prepareForReplace",
			"()V"
		);
	}
	jlong DatabaseUtils_InsertHelper::replace(android::content::ContentValues arg0) const
	{
		return callMethod<jlong>(
			"replace",
			"(Landroid/content/ContentValues;)J",
			arg0.object()
		);
	}
} // namespace android::database

