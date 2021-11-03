#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::database::sqlite
{
	class SQLiteDatabase;
}
namespace android::os
{
	class CancellationSignal;
}
namespace java::lang
{
	class StringBuilder;
}

namespace android::database::sqlite
{
	class SQLiteQueryBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLiteQueryBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SQLiteQueryBuilder(QAndroidJniObject obj);
		
		// Constructors
		SQLiteQueryBuilder();
		
		// Methods
		static void appendColumns(java::lang::StringBuilder arg0, jarray arg1);
		static jstring buildQueryString(jboolean arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		void appendWhere(jstring arg0);
		void appendWhereEscapeString(jstring arg0);
		void appendWhereStandalone(jstring arg0);
		jstring buildQuery(jarray arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		jstring buildQuery(jarray arg0, jstring arg1, jarray arg2, jstring arg3, jstring arg4, jstring arg5, jstring arg6);
		jstring buildUnionQuery(jarray arg0, jstring arg1, jstring arg2);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, JObject arg2, jint arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		jstring buildUnionSubQuery(jstring arg0, jarray arg1, JObject arg2, jint arg3, jstring arg4, jstring arg5, jarray arg6, jstring arg7, jstring arg8);
		jint _delete(android::database::sqlite::SQLiteDatabase arg0, jstring arg1, jarray arg2);
		JObject getCursorFactory();
		JObject getProjectionGreylist();
		JObject getProjectionMap();
		jstring getTables();
		jlong insert(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1);
		jboolean isDistinct();
		jboolean isStrict();
		jboolean isStrictColumns();
		jboolean isStrictGrammar();
		JObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7);
		JObject query(android::database::sqlite::SQLiteDatabase arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, jstring arg5, jstring arg6, jstring arg7, android::os::CancellationSignal arg8);
		void setCursorFactory(JObject arg0);
		void setDistinct(jboolean arg0);
		void setProjectionGreylist(JObject arg0);
		void setProjectionMap(JObject arg0);
		void setStrict(jboolean arg0);
		void setStrictColumns(jboolean arg0);
		void setStrictGrammar(jboolean arg0);
		void setTables(jstring arg0);
		jint update(android::database::sqlite::SQLiteDatabase arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::database::sqlite

