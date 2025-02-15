#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Video.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Video::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaStore_Video::MediaStore_Video(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Video::MediaStore_Video()
		: JObject(
			"android.provider.MediaStore$Video",
			"()V"
		) {}
	
	// Methods
	JObject MediaStore_Video::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
} // namespace android::provider

