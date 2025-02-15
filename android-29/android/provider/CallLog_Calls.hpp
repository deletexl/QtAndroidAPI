#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class CallLog_Calls : public JObject
	{
	public:
		// Fields
		static jint ANSWERED_EXTERNALLY_TYPE();
		static jint BLOCKED_TYPE();
		static JString BLOCK_REASON();
		static jint BLOCK_REASON_BLOCKED_NUMBER();
		static jint BLOCK_REASON_CALL_SCREENING_SERVICE();
		static jint BLOCK_REASON_DIRECT_TO_VOICEMAIL();
		static jint BLOCK_REASON_NOT_BLOCKED();
		static jint BLOCK_REASON_NOT_IN_CONTACTS();
		static jint BLOCK_REASON_PAY_PHONE();
		static jint BLOCK_REASON_RESTRICTED_NUMBER();
		static jint BLOCK_REASON_UNKNOWN_NUMBER();
		static JString CACHED_FORMATTED_NUMBER();
		static JString CACHED_LOOKUP_URI();
		static JString CACHED_MATCHED_NUMBER();
		static JString CACHED_NAME();
		static JString CACHED_NORMALIZED_NUMBER();
		static JString CACHED_NUMBER_LABEL();
		static JString CACHED_NUMBER_TYPE();
		static JString CACHED_PHOTO_ID();
		static JString CACHED_PHOTO_URI();
		static JString CALL_SCREENING_APP_NAME();
		static JString CALL_SCREENING_COMPONENT_NAME();
		static android::net::Uri CONTENT_FILTER_URI();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri CONTENT_URI_WITH_VOICEMAIL();
		static JString COUNTRY_ISO();
		static JString DATA_USAGE();
		static JString DATE();
		static JString DEFAULT_SORT_ORDER();
		static JString DURATION();
		static JString EXTRA_CALL_TYPE_FILTER();
		static JString FEATURES();
		static jint FEATURES_HD_CALL();
		static jint FEATURES_PULLED_EXTERNALLY();
		static jint FEATURES_RTT();
		static jint FEATURES_VIDEO();
		static jint FEATURES_WIFI();
		static JString GEOCODED_LOCATION();
		static jint INCOMING_TYPE();
		static JString IS_READ();
		static JString LAST_MODIFIED();
		static JString LIMIT_PARAM_KEY();
		static jint MISSED_TYPE();
		static JString NEW();
		static JString NUMBER();
		static JString NUMBER_PRESENTATION();
		static JString OFFSET_PARAM_KEY();
		static jint OUTGOING_TYPE();
		static JString PHONE_ACCOUNT_COMPONENT_NAME();
		static JString PHONE_ACCOUNT_ID();
		static JString POST_DIAL_DIGITS();
		static jint PRESENTATION_ALLOWED();
		static jint PRESENTATION_PAYPHONE();
		static jint PRESENTATION_RESTRICTED();
		static jint PRESENTATION_UNKNOWN();
		static jint REJECTED_TYPE();
		static JString TRANSCRIPTION();
		static JString TYPE();
		static JString VIA_NUMBER();
		static jint VOICEMAIL_TYPE();
		static JString VOICEMAIL_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit CallLog_Calls(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallLog_Calls(QJniObject obj);
		
		// Constructors
		CallLog_Calls();
		
		// Methods
		static JString getLastOutgoingCall(android::content::Context arg0);
	};
} // namespace android::provider

