#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Number;
}
namespace org::json
{
	class JSONArray;
}
namespace org::json
{
	class JSONTokener;
}

namespace org::json
{
	class JSONObject : public __JniBaseClass
	{
	public:
		// Fields
		static jobject _NULL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JSONObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JSONObject(QAndroidJniObject obj);
		
		// Constructors
		JSONObject();
		JSONObject(jstring arg0);
		JSONObject(__JniBaseClass arg0);
		JSONObject(org::json::JSONTokener arg0);
		JSONObject(org::json::JSONObject &arg0, jarray arg1);
		
		// Methods
		static jstring numberToString(java::lang::Number arg0);
		static jstring quote(jstring arg0);
		static jobject wrap(jobject arg0);
		QAndroidJniObject accumulate(jstring arg0, jobject arg1);
		jobject get(jstring arg0);
		jboolean getBoolean(jstring arg0);
		jdouble getDouble(jstring arg0);
		jint getInt(jstring arg0);
		QAndroidJniObject getJSONArray(jstring arg0);
		QAndroidJniObject getJSONObject(jstring arg0);
		jlong getLong(jstring arg0);
		jstring getString(jstring arg0);
		jboolean has(jstring arg0);
		jboolean isNull(jstring arg0);
		QAndroidJniObject keys();
		jint length();
		QAndroidJniObject names();
		jobject opt(jstring arg0);
		jboolean optBoolean(jstring arg0);
		jboolean optBoolean(jstring arg0, jboolean arg1);
		jdouble optDouble(jstring arg0);
		jdouble optDouble(jstring arg0, jdouble arg1);
		jint optInt(jstring arg0);
		jint optInt(jstring arg0, jint arg1);
		QAndroidJniObject optJSONArray(jstring arg0);
		QAndroidJniObject optJSONObject(jstring arg0);
		jlong optLong(jstring arg0);
		jlong optLong(jstring arg0, jlong arg1);
		jstring optString(jstring arg0);
		jstring optString(jstring arg0, jstring arg1);
		QAndroidJniObject put(jstring arg0, jboolean arg1);
		QAndroidJniObject put(jstring arg0, jdouble arg1);
		QAndroidJniObject put(jstring arg0, jint arg1);
		QAndroidJniObject put(jstring arg0, jobject arg1);
		QAndroidJniObject put(jstring arg0, jlong arg1);
		QAndroidJniObject putOpt(jstring arg0, jobject arg1);
		jobject remove(jstring arg0);
		QAndroidJniObject toJSONArray(org::json::JSONArray arg0);
		jstring toString();
		jstring toString(jint arg0);
	};
} // namespace org::json

