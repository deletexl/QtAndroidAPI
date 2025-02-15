#pragma once

#include "../../../JObject.hpp"

namespace android::app::slice
{
	class Slice;
}
namespace android::os
{
	class Parcel;
}
namespace android::widget::inline
{
	class InlinePresentationSpec;
}
class JObject;
class JString;

namespace android::service::autofill
{
	class InlinePresentation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InlinePresentation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlinePresentation(QJniObject obj);
		
		// Constructors
		InlinePresentation(android::app::slice::Slice arg0, android::widget::inline::InlinePresentationSpec arg1, jboolean arg2);
		
		// Methods
		static android::service::autofill::InlinePresentation createTooltipPresentation(android::app::slice::Slice arg0, android::widget::inline::InlinePresentationSpec arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::widget::inline::InlinePresentationSpec getInlinePresentationSpec() const;
		android::app::slice::Slice getSlice() const;
		jint hashCode() const;
		jboolean isPinned() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

