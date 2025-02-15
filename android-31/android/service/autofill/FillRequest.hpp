#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::inputmethod
{
	class InlineSuggestionsRequest;
}
class JString;

namespace android::service::autofill
{
	class FillRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_COMPATIBILITY_MODE_REQUEST();
		static jint FLAG_MANUAL_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getClientState() const;
		JObject getFillContexts() const;
		jint getFlags() const;
		jint getId() const;
		android::view::inputmethod::InlineSuggestionsRequest getInlineSuggestionsRequest() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

