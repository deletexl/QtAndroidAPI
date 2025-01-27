#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;

namespace android::text::util
{
	class Rfc822Tokenizer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Rfc822Tokenizer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Rfc822Tokenizer(QJniObject obj);
		
		// Constructors
		Rfc822Tokenizer();
		
		// Methods
		static JArray tokenize(JString arg0);
		static void tokenize(JString arg0, JObject arg1);
		jint findTokenEnd(JString arg0, jint arg1) const;
		jint findTokenStart(JString arg0, jint arg1) const;
		JString terminateToken(JString arg0) const;
	};
} // namespace android::text::util

