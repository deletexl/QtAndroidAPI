#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Intent.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./WebChromeClient_FileChooserParams.hpp"

namespace android::webkit
{
	// Fields
	jint WebChromeClient_FileChooserParams::MODE_OPEN()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_OPEN_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN_MULTIPLE"
		);
	}
	jint WebChromeClient_FileChooserParams::MODE_SAVE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_SAVE"
		);
	}
	
	// QJniObject forward
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams()
		: JObject(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V"
		) {}
	
	// Methods
	JArray WebChromeClient_FileChooserParams::parseResult(jint arg0, android::content::Intent arg1)
	{
		return callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.object()
		);
	}
	android::content::Intent WebChromeClient_FileChooserParams::createIntent() const
	{
		return callObjectMethod(
			"createIntent",
			"()Landroid/content/Intent;"
		);
	}
	JArray WebChromeClient_FileChooserParams::getAcceptTypes() const
	{
		return callObjectMethod(
			"getAcceptTypes",
			"()[Ljava/lang/String;"
		);
	}
	JString WebChromeClient_FileChooserParams::getFilenameHint() const
	{
		return callObjectMethod(
			"getFilenameHint",
			"()Ljava/lang/String;"
		);
	}
	jint WebChromeClient_FileChooserParams::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	JString WebChromeClient_FileChooserParams::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean WebChromeClient_FileChooserParams::isCaptureEnabled() const
	{
		return callMethod<jboolean>(
			"isCaptureEnabled",
			"()Z"
		);
	}
} // namespace android::webkit

