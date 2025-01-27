#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Typeface;
}

namespace android::provider
{
	class FontsContract_FontRequestCallback : public JObject
	{
	public:
		// Fields
		static jint FAIL_REASON_FONT_LOAD_ERROR();
		static jint FAIL_REASON_FONT_NOT_FOUND();
		static jint FAIL_REASON_FONT_UNAVAILABLE();
		static jint FAIL_REASON_MALFORMED_QUERY();
		static jint FAIL_REASON_PROVIDER_NOT_FOUND();
		static jint FAIL_REASON_WRONG_CERTIFICATES();
		
		// QJniObject forward
		template<typename ...Ts> explicit FontsContract_FontRequestCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_FontRequestCallback(QJniObject obj);
		
		// Constructors
		FontsContract_FontRequestCallback();
		
		// Methods
		void onTypefaceRequestFailed(jint arg0) const;
		void onTypefaceRetrieved(android::graphics::Typeface arg0) const;
	};
} // namespace android::provider

