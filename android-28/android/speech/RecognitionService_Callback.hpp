#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Bundle;
}
namespace android::speech
{
	class RecognitionService;
}

namespace android::speech
{
	class RecognitionService_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecognitionService_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecognitionService_Callback(QJniObject obj);
		
		// Constructors
		
		// Methods
		void beginningOfSpeech() const;
		void bufferReceived(JByteArray arg0) const;
		void endOfSpeech() const;
		void error(jint arg0) const;
		jint getCallingUid() const;
		void partialResults(android::os::Bundle arg0) const;
		void readyForSpeech(android::os::Bundle arg0) const;
		void results(android::os::Bundle arg0) const;
		void rmsChanged(jfloat arg0) const;
	};
} // namespace android::speech

