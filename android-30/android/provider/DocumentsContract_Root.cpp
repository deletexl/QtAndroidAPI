#include "../../JString.hpp"
#include "./DocumentsContract_Root.hpp"

namespace android::provider
{
	// Fields
	JString DocumentsContract_Root::COLUMN_AVAILABLE_BYTES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_AVAILABLE_BYTES",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_CAPACITY_BYTES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_CAPACITY_BYTES",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_DOCUMENT_ID()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_DOCUMENT_ID",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_FLAGS()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_FLAGS",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_ICON()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ICON",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_MIME_TYPES()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_MIME_TYPES",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_QUERY_ARGS()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_QUERY_ARGS",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_ROOT_ID()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_ROOT_ID",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_SUMMARY()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_SUMMARY",
			"Ljava/lang/String;"
		);
	}
	JString DocumentsContract_Root::COLUMN_TITLE()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		);
	}
	jint DocumentsContract_Root::FLAG_EMPTY()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_EMPTY"
		);
	}
	jint DocumentsContract_Root::FLAG_LOCAL_ONLY()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_LOCAL_ONLY"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_CREATE()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_CREATE"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_EJECT()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_EJECT"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_IS_CHILD()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_IS_CHILD"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_RECENTS()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_RECENTS"
		);
	}
	jint DocumentsContract_Root::FLAG_SUPPORTS_SEARCH()
	{
		return getStaticField<jint>(
			"android.provider.DocumentsContract$Root",
			"FLAG_SUPPORTS_SEARCH"
		);
	}
	JString DocumentsContract_Root::MIME_TYPE_ITEM()
	{
		return getStaticObjectField(
			"android.provider.DocumentsContract$Root",
			"MIME_TYPE_ITEM",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	DocumentsContract_Root::DocumentsContract_Root(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

