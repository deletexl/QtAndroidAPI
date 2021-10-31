#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}

namespace android::speech
{
	class SpeechRecognizer : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONFIDENCE_SCORES();
		static jint ERROR_AUDIO();
		static jint ERROR_CLIENT();
		static jint ERROR_INSUFFICIENT_PERMISSIONS();
		static jint ERROR_NETWORK();
		static jint ERROR_NETWORK_TIMEOUT();
		static jint ERROR_NO_MATCH();
		static jint ERROR_RECOGNIZER_BUSY();
		static jint ERROR_SERVER();
		static jint ERROR_SPEECH_TIMEOUT();
		static jstring RESULTS_RECOGNITION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpeechRecognizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpeechRecognizer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject createSpeechRecognizer(android::content::Context arg0);
		static QAndroidJniObject createSpeechRecognizer(android::content::Context arg0, android::content::ComponentName arg1);
		static jboolean isRecognitionAvailable(android::content::Context arg0);
		void cancel();
		void destroy();
		void setRecognitionListener(__JniBaseClass arg0);
		void startListening(android::content::Intent arg0);
		void stopListening();
	};
} // namespace android::speech

