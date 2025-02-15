#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class BugreportManager_BugreportCallback : public JObject
	{
	public:
		// Fields
		static jint BUGREPORT_ERROR_ANOTHER_REPORT_IN_PROGRESS();
		static jint BUGREPORT_ERROR_INVALID_INPUT();
		static jint BUGREPORT_ERROR_RUNTIME();
		static jint BUGREPORT_ERROR_USER_CONSENT_TIMED_OUT();
		static jint BUGREPORT_ERROR_USER_DENIED_CONSENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit BugreportManager_BugreportCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BugreportManager_BugreportCallback(QJniObject obj);
		
		// Constructors
		BugreportManager_BugreportCallback();
		
		// Methods
		void onEarlyReportFinished() const;
		void onError(jint arg0) const;
		void onFinished() const;
		void onProgress(jfloat arg0) const;
	};
} // namespace android::os

