#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class BatchUpdates;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::service::autofill
{
	class BatchUpdates_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BatchUpdates_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BatchUpdates_Builder(QJniObject obj);
		
		// Constructors
		BatchUpdates_Builder();
		
		// Methods
		android::service::autofill::BatchUpdates build() const;
		android::service::autofill::BatchUpdates_Builder transformChild(jint arg0, JObject arg1) const;
		android::service::autofill::BatchUpdates_Builder updateTemplate(android::widget::RemoteViews arg0) const;
	};
} // namespace android::service::autofill

