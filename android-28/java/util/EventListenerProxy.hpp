#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class EventListenerProxy : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EventListenerProxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventListenerProxy(QAndroidJniObject obj);
		
		// Constructors
		EventListenerProxy(JObject arg0);
		
		// Methods
		JObject getListener();
	};
} // namespace java::util

