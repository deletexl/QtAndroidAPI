#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class SubscriptionManager_OnOpportunisticSubscriptionsChangedListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener(QJniObject obj);
		
		// Constructors
		SubscriptionManager_OnOpportunisticSubscriptionsChangedListener();
		
		// Methods
		void onOpportunisticSubscriptionsChanged() const;
	};
} // namespace android::telephony

