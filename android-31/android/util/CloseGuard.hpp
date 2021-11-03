#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class CloseGuard : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloseGuard(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloseGuard(QAndroidJniObject obj);
		
		// Constructors
		CloseGuard();
		
		// Methods
		void close();
		void open(jstring arg0);
		void warnIfOpen();
	};
} // namespace android::util

