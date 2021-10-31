#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class BreakIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		static jint KIND_CHARACTER();
		static jint KIND_LINE();
		static jint KIND_SENTENCE();
		static jint KIND_TITLE();
		static jint KIND_WORD();
		static jint WORD_IDEO();
		static jint WORD_IDEO_LIMIT();
		static jint WORD_KANA();
		static jint WORD_KANA_LIMIT();
		static jint WORD_LETTER();
		static jint WORD_LETTER_LIMIT();
		static jint WORD_NONE();
		static jint WORD_NONE_LIMIT();
		static jint WORD_NUMBER();
		static jint WORD_NUMBER_LIMIT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BreakIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BreakIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static android::icu::text::BreakIterator getCharacterInstance();
		static android::icu::text::BreakIterator getCharacterInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getCharacterInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getLineInstance();
		static android::icu::text::BreakIterator getLineInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getLineInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getSentenceInstance();
		static android::icu::text::BreakIterator getSentenceInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getSentenceInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getTitleInstance();
		static android::icu::text::BreakIterator getTitleInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getTitleInstance(java::util::Locale arg0);
		static android::icu::text::BreakIterator getWordInstance();
		static android::icu::text::BreakIterator getWordInstance(android::icu::util::ULocale arg0);
		static android::icu::text::BreakIterator getWordInstance(java::util::Locale arg0);
		jobject clone();
		jint current();
		jint first();
		jint following(jint arg0);
		jint getRuleStatus();
		jint getRuleStatusVec(jintArray arg0);
		__JniBaseClass getText();
		jboolean isBoundary(jint arg0);
		jint last();
		jint next();
		jint next(jint arg0);
		jint preceding(jint arg0);
		jint previous();
		void setText(jstring arg0);
		void setText(__JniBaseClass arg0);
	};
} // namespace android::icu::text
