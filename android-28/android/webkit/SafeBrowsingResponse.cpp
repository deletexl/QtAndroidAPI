#include "./SafeBrowsingResponse.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	SafeBrowsingResponse::SafeBrowsingResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SafeBrowsingResponse::SafeBrowsingResponse()
		: JObject(
			"android.webkit.SafeBrowsingResponse",
			"()V"
		) {}
	
	// Methods
	void SafeBrowsingResponse::backToSafety(jboolean arg0) const
	{
		callMethod<void>(
			"backToSafety",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::proceed(jboolean arg0) const
	{
		callMethod<void>(
			"proceed",
			"(Z)V",
			arg0
		);
	}
	void SafeBrowsingResponse::showInterstitial(jboolean arg0) const
	{
		callMethod<void>(
			"showInterstitial",
			"(Z)V",
			arg0
		);
	}
} // namespace android::webkit

