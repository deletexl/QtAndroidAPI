#include "../../JString.hpp"
#include "./RecognizerResultsIntent.hpp"

namespace android::speech
{
	// Fields
	JString RecognizerResultsIntent::ACTION_VOICE_SEARCH_RESULTS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"ACTION_VOICE_SEARCH_RESULTS",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTML_BASE_URLS",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_HTTP_HEADERS",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_STRINGS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_STRINGS",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::EXTRA_VOICE_SEARCH_RESULT_URLS()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"EXTRA_VOICE_SEARCH_RESULT_URLS",
			"Ljava/lang/String;"
		);
	}
	JString RecognizerResultsIntent::URI_SCHEME_INLINE()
	{
		return getStaticObjectField(
			"android.speech.RecognizerResultsIntent",
			"URI_SCHEME_INLINE",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	RecognizerResultsIntent::RecognizerResultsIntent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::speech

