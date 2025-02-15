#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class IntentSender;
}
namespace android::service::autofill
{
	class Dataset;
}
namespace android::service::autofill
{
	class InlinePresentation;
}
namespace android::view::autofill
{
	class AutofillId;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::widget
{
	class RemoteViews;
}
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::service::autofill
{
	class Dataset_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Dataset_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Dataset_Builder(QJniObject obj);
		
		// Constructors
		Dataset_Builder();
		Dataset_Builder(android::widget::RemoteViews arg0);
		
		// Methods
		android::service::autofill::Dataset build() const;
		android::service::autofill::Dataset_Builder setAuthentication(android::content::IntentSender arg0) const;
		android::service::autofill::Dataset_Builder setId(JString arg0) const;
		android::service::autofill::Dataset_Builder setInlinePresentation(android::service::autofill::InlinePresentation arg0) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3) const;
		android::service::autofill::Dataset_Builder setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3, android::service::autofill::InlinePresentation arg4) const;
	};
} // namespace android::service::autofill

