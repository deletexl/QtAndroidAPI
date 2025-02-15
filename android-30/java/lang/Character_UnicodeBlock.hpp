#pragma once

#include "./Character_Subset.hpp"

class JIntArray;
class JArray;
class JArray;
class JString;

namespace java::lang
{
	class Character_UnicodeBlock : public java::lang::Character_Subset
	{
	public:
		// Fields
		static java::lang::Character_UnicodeBlock ADLAM();
		static java::lang::Character_UnicodeBlock AEGEAN_NUMBERS();
		static java::lang::Character_UnicodeBlock AHOM();
		static java::lang::Character_UnicodeBlock ALCHEMICAL_SYMBOLS();
		static java::lang::Character_UnicodeBlock ALPHABETIC_PRESENTATION_FORMS();
		static java::lang::Character_UnicodeBlock ANATOLIAN_HIEROGLYPHS();
		static java::lang::Character_UnicodeBlock ANCIENT_GREEK_MUSICAL_NOTATION();
		static java::lang::Character_UnicodeBlock ANCIENT_GREEK_NUMBERS();
		static java::lang::Character_UnicodeBlock ANCIENT_SYMBOLS();
		static java::lang::Character_UnicodeBlock ARABIC();
		static java::lang::Character_UnicodeBlock ARABIC_EXTENDED_A();
		static java::lang::Character_UnicodeBlock ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS();
		static java::lang::Character_UnicodeBlock ARABIC_PRESENTATION_FORMS_A();
		static java::lang::Character_UnicodeBlock ARABIC_PRESENTATION_FORMS_B();
		static java::lang::Character_UnicodeBlock ARABIC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock ARMENIAN();
		static java::lang::Character_UnicodeBlock ARROWS();
		static java::lang::Character_UnicodeBlock AVESTAN();
		static java::lang::Character_UnicodeBlock BALINESE();
		static java::lang::Character_UnicodeBlock BAMUM();
		static java::lang::Character_UnicodeBlock BAMUM_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock BASIC_LATIN();
		static java::lang::Character_UnicodeBlock BASSA_VAH();
		static java::lang::Character_UnicodeBlock BATAK();
		static java::lang::Character_UnicodeBlock BENGALI();
		static java::lang::Character_UnicodeBlock BHAIKSUKI();
		static java::lang::Character_UnicodeBlock BLOCK_ELEMENTS();
		static java::lang::Character_UnicodeBlock BOPOMOFO();
		static java::lang::Character_UnicodeBlock BOPOMOFO_EXTENDED();
		static java::lang::Character_UnicodeBlock BOX_DRAWING();
		static java::lang::Character_UnicodeBlock BRAHMI();
		static java::lang::Character_UnicodeBlock BRAILLE_PATTERNS();
		static java::lang::Character_UnicodeBlock BUGINESE();
		static java::lang::Character_UnicodeBlock BUHID();
		static java::lang::Character_UnicodeBlock BYZANTINE_MUSICAL_SYMBOLS();
		static java::lang::Character_UnicodeBlock CARIAN();
		static java::lang::Character_UnicodeBlock CAUCASIAN_ALBANIAN();
		static java::lang::Character_UnicodeBlock CHAKMA();
		static java::lang::Character_UnicodeBlock CHAM();
		static java::lang::Character_UnicodeBlock CHEROKEE();
		static java::lang::Character_UnicodeBlock CHEROKEE_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock CHESS_SYMBOLS();
		static java::lang::Character_UnicodeBlock CHORASMIAN();
		static java::lang::Character_UnicodeBlock CJK_COMPATIBILITY();
		static java::lang::Character_UnicodeBlock CJK_COMPATIBILITY_FORMS();
		static java::lang::Character_UnicodeBlock CJK_COMPATIBILITY_IDEOGRAPHS();
		static java::lang::Character_UnicodeBlock CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock CJK_RADICALS_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock CJK_STROKES();
		static java::lang::Character_UnicodeBlock CJK_SYMBOLS_AND_PUNCTUATION();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F();
		static java::lang::Character_UnicodeBlock CJK_UNIFIED_IDEOGRAPHS_EXTENSION_G();
		static java::lang::Character_UnicodeBlock COMBINING_DIACRITICAL_MARKS();
		static java::lang::Character_UnicodeBlock COMBINING_DIACRITICAL_MARKS_EXTENDED();
		static java::lang::Character_UnicodeBlock COMBINING_DIACRITICAL_MARKS_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock COMBINING_HALF_MARKS();
		static java::lang::Character_UnicodeBlock COMBINING_MARKS_FOR_SYMBOLS();
		static java::lang::Character_UnicodeBlock COMMON_INDIC_NUMBER_FORMS();
		static java::lang::Character_UnicodeBlock CONTROL_PICTURES();
		static java::lang::Character_UnicodeBlock COPTIC();
		static java::lang::Character_UnicodeBlock COPTIC_EPACT_NUMBERS();
		static java::lang::Character_UnicodeBlock COUNTING_ROD_NUMERALS();
		static java::lang::Character_UnicodeBlock CUNEIFORM();
		static java::lang::Character_UnicodeBlock CUNEIFORM_NUMBERS_AND_PUNCTUATION();
		static java::lang::Character_UnicodeBlock CURRENCY_SYMBOLS();
		static java::lang::Character_UnicodeBlock CYPRIOT_SYLLABARY();
		static java::lang::Character_UnicodeBlock CYRILLIC();
		static java::lang::Character_UnicodeBlock CYRILLIC_EXTENDED_A();
		static java::lang::Character_UnicodeBlock CYRILLIC_EXTENDED_B();
		static java::lang::Character_UnicodeBlock CYRILLIC_EXTENDED_C();
		static java::lang::Character_UnicodeBlock CYRILLIC_SUPPLEMENTARY();
		static java::lang::Character_UnicodeBlock DESERET();
		static java::lang::Character_UnicodeBlock DEVANAGARI();
		static java::lang::Character_UnicodeBlock DEVANAGARI_EXTENDED();
		static java::lang::Character_UnicodeBlock DINGBATS();
		static java::lang::Character_UnicodeBlock DIVES_AKURU();
		static java::lang::Character_UnicodeBlock DOGRA();
		static java::lang::Character_UnicodeBlock DOMINO_TILES();
		static java::lang::Character_UnicodeBlock DUPLOYAN();
		static java::lang::Character_UnicodeBlock EARLY_DYNASTIC_CUNEIFORM();
		static java::lang::Character_UnicodeBlock EGYPTIAN_HIEROGLYPHS();
		static java::lang::Character_UnicodeBlock EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS();
		static java::lang::Character_UnicodeBlock ELBASAN();
		static java::lang::Character_UnicodeBlock ELYMAIC();
		static java::lang::Character_UnicodeBlock EMOTICONS();
		static java::lang::Character_UnicodeBlock ENCLOSED_ALPHANUMERICS();
		static java::lang::Character_UnicodeBlock ENCLOSED_ALPHANUMERIC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock ENCLOSED_CJK_LETTERS_AND_MONTHS();
		static java::lang::Character_UnicodeBlock ENCLOSED_IDEOGRAPHIC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock ETHIOPIC();
		static java::lang::Character_UnicodeBlock ETHIOPIC_EXTENDED();
		static java::lang::Character_UnicodeBlock ETHIOPIC_EXTENDED_A();
		static java::lang::Character_UnicodeBlock ETHIOPIC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock GENERAL_PUNCTUATION();
		static java::lang::Character_UnicodeBlock GEOMETRIC_SHAPES();
		static java::lang::Character_UnicodeBlock GEOMETRIC_SHAPES_EXTENDED();
		static java::lang::Character_UnicodeBlock GEORGIAN();
		static java::lang::Character_UnicodeBlock GEORGIAN_EXTENDED();
		static java::lang::Character_UnicodeBlock GEORGIAN_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock GLAGOLITIC();
		static java::lang::Character_UnicodeBlock GLAGOLITIC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock GOTHIC();
		static java::lang::Character_UnicodeBlock GRANTHA();
		static java::lang::Character_UnicodeBlock GREEK();
		static java::lang::Character_UnicodeBlock GREEK_EXTENDED();
		static java::lang::Character_UnicodeBlock GUJARATI();
		static java::lang::Character_UnicodeBlock GUNJALA_GONDI();
		static java::lang::Character_UnicodeBlock GURMUKHI();
		static java::lang::Character_UnicodeBlock HALFWIDTH_AND_FULLWIDTH_FORMS();
		static java::lang::Character_UnicodeBlock HANGUL_COMPATIBILITY_JAMO();
		static java::lang::Character_UnicodeBlock HANGUL_JAMO();
		static java::lang::Character_UnicodeBlock HANGUL_JAMO_EXTENDED_A();
		static java::lang::Character_UnicodeBlock HANGUL_JAMO_EXTENDED_B();
		static java::lang::Character_UnicodeBlock HANGUL_SYLLABLES();
		static java::lang::Character_UnicodeBlock HANIFI_ROHINGYA();
		static java::lang::Character_UnicodeBlock HANUNOO();
		static java::lang::Character_UnicodeBlock HATRAN();
		static java::lang::Character_UnicodeBlock HEBREW();
		static java::lang::Character_UnicodeBlock HIGH_PRIVATE_USE_SURROGATES();
		static java::lang::Character_UnicodeBlock HIGH_SURROGATES();
		static java::lang::Character_UnicodeBlock HIRAGANA();
		static java::lang::Character_UnicodeBlock IDEOGRAPHIC_DESCRIPTION_CHARACTERS();
		static java::lang::Character_UnicodeBlock IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION();
		static java::lang::Character_UnicodeBlock IMPERIAL_ARAMAIC();
		static java::lang::Character_UnicodeBlock INDIC_SIYAQ_NUMBERS();
		static java::lang::Character_UnicodeBlock INSCRIPTIONAL_PAHLAVI();
		static java::lang::Character_UnicodeBlock INSCRIPTIONAL_PARTHIAN();
		static java::lang::Character_UnicodeBlock IPA_EXTENSIONS();
		static java::lang::Character_UnicodeBlock JAVANESE();
		static java::lang::Character_UnicodeBlock KAITHI();
		static java::lang::Character_UnicodeBlock KANA_EXTENDED_A();
		static java::lang::Character_UnicodeBlock KANA_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock KANBUN();
		static java::lang::Character_UnicodeBlock KANGXI_RADICALS();
		static java::lang::Character_UnicodeBlock KANNADA();
		static java::lang::Character_UnicodeBlock KATAKANA();
		static java::lang::Character_UnicodeBlock KATAKANA_PHONETIC_EXTENSIONS();
		static java::lang::Character_UnicodeBlock KAYAH_LI();
		static java::lang::Character_UnicodeBlock KHAROSHTHI();
		static java::lang::Character_UnicodeBlock KHITAN_SMALL_SCRIPT();
		static java::lang::Character_UnicodeBlock KHMER();
		static java::lang::Character_UnicodeBlock KHMER_SYMBOLS();
		static java::lang::Character_UnicodeBlock KHOJKI();
		static java::lang::Character_UnicodeBlock KHUDAWADI();
		static java::lang::Character_UnicodeBlock LAO();
		static java::lang::Character_UnicodeBlock LATIN_1_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_A();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_ADDITIONAL();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_B();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_C();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_D();
		static java::lang::Character_UnicodeBlock LATIN_EXTENDED_E();
		static java::lang::Character_UnicodeBlock LEPCHA();
		static java::lang::Character_UnicodeBlock LETTERLIKE_SYMBOLS();
		static java::lang::Character_UnicodeBlock LIMBU();
		static java::lang::Character_UnicodeBlock LINEAR_A();
		static java::lang::Character_UnicodeBlock LINEAR_B_IDEOGRAMS();
		static java::lang::Character_UnicodeBlock LINEAR_B_SYLLABARY();
		static java::lang::Character_UnicodeBlock LISU();
		static java::lang::Character_UnicodeBlock LISU_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock LOW_SURROGATES();
		static java::lang::Character_UnicodeBlock LYCIAN();
		static java::lang::Character_UnicodeBlock LYDIAN();
		static java::lang::Character_UnicodeBlock MAHAJANI();
		static java::lang::Character_UnicodeBlock MAHJONG_TILES();
		static java::lang::Character_UnicodeBlock MAKASAR();
		static java::lang::Character_UnicodeBlock MALAYALAM();
		static java::lang::Character_UnicodeBlock MANDAIC();
		static java::lang::Character_UnicodeBlock MANICHAEAN();
		static java::lang::Character_UnicodeBlock MARCHEN();
		static java::lang::Character_UnicodeBlock MASARAM_GONDI();
		static java::lang::Character_UnicodeBlock MATHEMATICAL_ALPHANUMERIC_SYMBOLS();
		static java::lang::Character_UnicodeBlock MATHEMATICAL_OPERATORS();
		static java::lang::Character_UnicodeBlock MAYAN_NUMERALS();
		static java::lang::Character_UnicodeBlock MEDEFAIDRIN();
		static java::lang::Character_UnicodeBlock MEETEI_MAYEK();
		static java::lang::Character_UnicodeBlock MEETEI_MAYEK_EXTENSIONS();
		static java::lang::Character_UnicodeBlock MENDE_KIKAKUI();
		static java::lang::Character_UnicodeBlock MEROITIC_CURSIVE();
		static java::lang::Character_UnicodeBlock MEROITIC_HIEROGLYPHS();
		static java::lang::Character_UnicodeBlock MIAO();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_SYMBOLS();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_SYMBOLS_AND_ARROWS();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS();
		static java::lang::Character_UnicodeBlock MISCELLANEOUS_TECHNICAL();
		static java::lang::Character_UnicodeBlock MODI();
		static java::lang::Character_UnicodeBlock MODIFIER_TONE_LETTERS();
		static java::lang::Character_UnicodeBlock MONGOLIAN();
		static java::lang::Character_UnicodeBlock MONGOLIAN_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock MRO();
		static java::lang::Character_UnicodeBlock MULTANI();
		static java::lang::Character_UnicodeBlock MUSICAL_SYMBOLS();
		static java::lang::Character_UnicodeBlock MYANMAR();
		static java::lang::Character_UnicodeBlock MYANMAR_EXTENDED_A();
		static java::lang::Character_UnicodeBlock MYANMAR_EXTENDED_B();
		static java::lang::Character_UnicodeBlock NABATAEAN();
		static java::lang::Character_UnicodeBlock NANDINAGARI();
		static java::lang::Character_UnicodeBlock NEWA();
		static java::lang::Character_UnicodeBlock NEW_TAI_LUE();
		static java::lang::Character_UnicodeBlock NKO();
		static java::lang::Character_UnicodeBlock NUMBER_FORMS();
		static java::lang::Character_UnicodeBlock NUSHU();
		static java::lang::Character_UnicodeBlock NYIAKENG_PUACHUE_HMONG();
		static java::lang::Character_UnicodeBlock OGHAM();
		static java::lang::Character_UnicodeBlock OLD_HUNGARIAN();
		static java::lang::Character_UnicodeBlock OLD_ITALIC();
		static java::lang::Character_UnicodeBlock OLD_NORTH_ARABIAN();
		static java::lang::Character_UnicodeBlock OLD_PERMIC();
		static java::lang::Character_UnicodeBlock OLD_PERSIAN();
		static java::lang::Character_UnicodeBlock OLD_SOGDIAN();
		static java::lang::Character_UnicodeBlock OLD_SOUTH_ARABIAN();
		static java::lang::Character_UnicodeBlock OLD_TURKIC();
		static java::lang::Character_UnicodeBlock OL_CHIKI();
		static java::lang::Character_UnicodeBlock OPTICAL_CHARACTER_RECOGNITION();
		static java::lang::Character_UnicodeBlock ORIYA();
		static java::lang::Character_UnicodeBlock ORNAMENTAL_DINGBATS();
		static java::lang::Character_UnicodeBlock OSAGE();
		static java::lang::Character_UnicodeBlock OSMANYA();
		static java::lang::Character_UnicodeBlock OTTOMAN_SIYAQ_NUMBERS();
		static java::lang::Character_UnicodeBlock PAHAWH_HMONG();
		static java::lang::Character_UnicodeBlock PALMYRENE();
		static java::lang::Character_UnicodeBlock PAU_CIN_HAU();
		static java::lang::Character_UnicodeBlock PHAGS_PA();
		static java::lang::Character_UnicodeBlock PHAISTOS_DISC();
		static java::lang::Character_UnicodeBlock PHOENICIAN();
		static java::lang::Character_UnicodeBlock PHONETIC_EXTENSIONS();
		static java::lang::Character_UnicodeBlock PHONETIC_EXTENSIONS_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock PLAYING_CARDS();
		static java::lang::Character_UnicodeBlock PRIVATE_USE_AREA();
		static java::lang::Character_UnicodeBlock PSALTER_PAHLAVI();
		static java::lang::Character_UnicodeBlock REJANG();
		static java::lang::Character_UnicodeBlock RUMI_NUMERAL_SYMBOLS();
		static java::lang::Character_UnicodeBlock RUNIC();
		static java::lang::Character_UnicodeBlock SAMARITAN();
		static java::lang::Character_UnicodeBlock SAURASHTRA();
		static java::lang::Character_UnicodeBlock SHARADA();
		static java::lang::Character_UnicodeBlock SHAVIAN();
		static java::lang::Character_UnicodeBlock SHORTHAND_FORMAT_CONTROLS();
		static java::lang::Character_UnicodeBlock SIDDHAM();
		static java::lang::Character_UnicodeBlock SINHALA();
		static java::lang::Character_UnicodeBlock SINHALA_ARCHAIC_NUMBERS();
		static java::lang::Character_UnicodeBlock SMALL_FORM_VARIANTS();
		static java::lang::Character_UnicodeBlock SMALL_KANA_EXTENSION();
		static java::lang::Character_UnicodeBlock SOGDIAN();
		static java::lang::Character_UnicodeBlock SORA_SOMPENG();
		static java::lang::Character_UnicodeBlock SOYOMBO();
		static java::lang::Character_UnicodeBlock SPACING_MODIFIER_LETTERS();
		static java::lang::Character_UnicodeBlock SPECIALS();
		static java::lang::Character_UnicodeBlock SUNDANESE();
		static java::lang::Character_UnicodeBlock SUNDANESE_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock SUPERSCRIPTS_AND_SUBSCRIPTS();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_ARROWS_A();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_ARROWS_B();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_ARROWS_C();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_MATHEMATICAL_OPERATORS();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_PUNCTUATION();
		static java::lang::Character_UnicodeBlock SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS();
		static java::lang::Character_UnicodeBlock SUPPLEMENTARY_PRIVATE_USE_AREA_A();
		static java::lang::Character_UnicodeBlock SUPPLEMENTARY_PRIVATE_USE_AREA_B();
		static java::lang::Character_UnicodeBlock SURROGATES_AREA();
		static java::lang::Character_UnicodeBlock SUTTON_SIGNWRITING();
		static java::lang::Character_UnicodeBlock SYLOTI_NAGRI();
		static java::lang::Character_UnicodeBlock SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A();
		static java::lang::Character_UnicodeBlock SYMBOLS_FOR_LEGACY_COMPUTING();
		static java::lang::Character_UnicodeBlock SYRIAC();
		static java::lang::Character_UnicodeBlock SYRIAC_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock TAGALOG();
		static java::lang::Character_UnicodeBlock TAGBANWA();
		static java::lang::Character_UnicodeBlock TAGS();
		static java::lang::Character_UnicodeBlock TAI_LE();
		static java::lang::Character_UnicodeBlock TAI_THAM();
		static java::lang::Character_UnicodeBlock TAI_VIET();
		static java::lang::Character_UnicodeBlock TAI_XUAN_JING_SYMBOLS();
		static java::lang::Character_UnicodeBlock TAKRI();
		static java::lang::Character_UnicodeBlock TAMIL();
		static java::lang::Character_UnicodeBlock TAMIL_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock TANGUT();
		static java::lang::Character_UnicodeBlock TANGUT_COMPONENTS();
		static java::lang::Character_UnicodeBlock TANGUT_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock TELUGU();
		static java::lang::Character_UnicodeBlock THAANA();
		static java::lang::Character_UnicodeBlock THAI();
		static java::lang::Character_UnicodeBlock TIBETAN();
		static java::lang::Character_UnicodeBlock TIFINAGH();
		static java::lang::Character_UnicodeBlock TIRHUTA();
		static java::lang::Character_UnicodeBlock TRANSPORT_AND_MAP_SYMBOLS();
		static java::lang::Character_UnicodeBlock UGARITIC();
		static java::lang::Character_UnicodeBlock UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS();
		static java::lang::Character_UnicodeBlock UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED();
		static java::lang::Character_UnicodeBlock VAI();
		static java::lang::Character_UnicodeBlock VARIATION_SELECTORS();
		static java::lang::Character_UnicodeBlock VARIATION_SELECTORS_SUPPLEMENT();
		static java::lang::Character_UnicodeBlock VEDIC_EXTENSIONS();
		static java::lang::Character_UnicodeBlock VERTICAL_FORMS();
		static java::lang::Character_UnicodeBlock WANCHO();
		static java::lang::Character_UnicodeBlock WARANG_CITI();
		static java::lang::Character_UnicodeBlock YEZIDI();
		static java::lang::Character_UnicodeBlock YIJING_HEXAGRAM_SYMBOLS();
		static java::lang::Character_UnicodeBlock YI_RADICALS();
		static java::lang::Character_UnicodeBlock YI_SYLLABLES();
		static java::lang::Character_UnicodeBlock ZANABAZAR_SQUARE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Character_UnicodeBlock(const char *className, const char *sig, Ts...agv) : java::lang::Character_Subset(className, sig, std::forward<Ts>(agv)...) {}
		Character_UnicodeBlock(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::Character_UnicodeBlock forName(JString arg0);
		static java::lang::Character_UnicodeBlock of(jchar arg0);
		static java::lang::Character_UnicodeBlock of(jint arg0);
	};
} // namespace java::lang

