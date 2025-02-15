#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "./CharArrayBuffer.hpp"
#include "./ContentObserver.hpp"
#include "./DataSetObserver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "./CursorWrapper.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	CursorWrapper::CursorWrapper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CursorWrapper::CursorWrapper(JObject arg0)
		: JObject(
			"android.database.CursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		) {}
	
	// Methods
	void CursorWrapper::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CursorWrapper::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void CursorWrapper::deactivate() const
	{
		callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	JByteArray CursorWrapper::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	jint CursorWrapper::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jint CursorWrapper::getColumnIndex(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint CursorWrapper::getColumnIndexOrThrow(JString arg0) const
	{
		return callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JString CursorWrapper::getColumnName(jint arg0) const
	{
		return callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JArray CursorWrapper::getColumnNames() const
	{
		return callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		);
	}
	jint CursorWrapper::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble CursorWrapper::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	android::os::Bundle CursorWrapper::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jfloat CursorWrapper::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint CursorWrapper::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong CursorWrapper::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	android::net::Uri CursorWrapper::getNotificationUri() const
	{
		return callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;"
		);
	}
	jint CursorWrapper::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jshort CursorWrapper::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	JString CursorWrapper::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint CursorWrapper::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean CursorWrapper::getWantsAllOnMoveCalls() const
	{
		return callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z"
		);
	}
	JObject CursorWrapper::getWrappedCursor() const
	{
		return callObjectMethod(
			"getWrappedCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jboolean CursorWrapper::isAfterLast() const
	{
		return callMethod<jboolean>(
			"isAfterLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isBeforeFirst() const
	{
		return callMethod<jboolean>(
			"isBeforeFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isClosed() const
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	jboolean CursorWrapper::isFirst() const
	{
		return callMethod<jboolean>(
			"isFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::isLast() const
	{
		return callMethod<jboolean>(
			"isLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::move(jint arg0) const
	{
		return callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToFirst() const
	{
		return callMethod<jboolean>(
			"moveToFirst",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToLast() const
	{
		return callMethod<jboolean>(
			"moveToLast",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToNext() const
	{
		return callMethod<jboolean>(
			"moveToNext",
			"()Z"
		);
	}
	jboolean CursorWrapper::moveToPosition(jint arg0) const
	{
		return callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0
		);
	}
	jboolean CursorWrapper::moveToPrevious() const
	{
		return callMethod<jboolean>(
			"moveToPrevious",
			"()Z"
		);
	}
	void CursorWrapper::registerContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void CursorWrapper::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	jboolean CursorWrapper::requery() const
	{
		return callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	android::os::Bundle CursorWrapper::respond(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	void CursorWrapper::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void CursorWrapper::setNotificationUri(android::content::ContentResolver arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void CursorWrapper::unregisterContentObserver(android::database::ContentObserver arg0) const
	{
		callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.object()
		);
	}
	void CursorWrapper::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::database

