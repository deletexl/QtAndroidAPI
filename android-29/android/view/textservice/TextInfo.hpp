#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::textservice
{
	class TextInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextInfo(QJniObject obj);
		
		// Constructors
		TextInfo(android::os::Parcel arg0);
		TextInfo(JString arg0);
		TextInfo(JString arg0, jint arg1, jint arg2);
		TextInfo(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents() const;
		JString getCharSequence() const;
		jint getCookie() const;
		jint getSequence() const;
		JString getText() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textservice

