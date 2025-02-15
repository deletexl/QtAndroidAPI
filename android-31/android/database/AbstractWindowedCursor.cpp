#include "../../JByteArray.hpp"
#include "./CharArrayBuffer.hpp"
#include "./CursorWindow.hpp"
#include "../../JString.hpp"
#include "./AbstractWindowedCursor.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	AbstractWindowedCursor::AbstractWindowedCursor(QJniObject obj) : android::database::AbstractCursor(obj) {}
	
	// Constructors
	AbstractWindowedCursor::AbstractWindowedCursor()
		: android::database::AbstractCursor(
			"android.database.AbstractWindowedCursor",
			"()V"
		) {}
	
	// Methods
	void AbstractWindowedCursor::copyStringToBuffer(jint arg0, android::database::CharArrayBuffer arg1) const
	{
		callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	JByteArray AbstractWindowedCursor::getBlob(jint arg0) const
	{
		return callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		);
	}
	jdouble AbstractWindowedCursor::getDouble(jint arg0) const
	{
		return callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat AbstractWindowedCursor::getFloat(jint arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint AbstractWindowedCursor::getInt(jint arg0) const
	{
		return callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong AbstractWindowedCursor::getLong(jint arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort AbstractWindowedCursor::getShort(jint arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	JString AbstractWindowedCursor::getString(jint arg0) const
	{
		return callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint AbstractWindowedCursor::getType(jint arg0) const
	{
		return callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	android::database::CursorWindow AbstractWindowedCursor::getWindow() const
	{
		return callObjectMethod(
			"getWindow",
			"()Landroid/database/CursorWindow;"
		);
	}
	jboolean AbstractWindowedCursor::hasWindow() const
	{
		return callMethod<jboolean>(
			"hasWindow",
			"()Z"
		);
	}
	jboolean AbstractWindowedCursor::isBlob(jint arg0) const
	{
		return callMethod<jboolean>(
			"isBlob",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isFloat(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFloat",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isLong(jint arg0) const
	{
		return callMethod<jboolean>(
			"isLong",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isNull(jint arg0) const
	{
		return callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean AbstractWindowedCursor::isString(jint arg0) const
	{
		return callMethod<jboolean>(
			"isString",
			"(I)Z",
			arg0
		);
	}
	void AbstractWindowedCursor::setWindow(android::database::CursorWindow arg0) const
	{
		callMethod<void>(
			"setWindow",
			"(Landroid/database/CursorWindow;)V",
			arg0.object()
		);
	}
} // namespace android::database

