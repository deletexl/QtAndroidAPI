#include "../../net/Uri.hpp"
#include "../../../JString.hpp"
#include "./TvContract_WatchNextPrograms.hpp"

namespace android::media::tv
{
	// Fields
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_16_9()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_16_9"
		);
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_1_1()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_1_1"
		);
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_2_3()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_2_3"
		);
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_3_2()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_3_2"
		);
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_4_3()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_4_3"
		);
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_AVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_AVAILABLE"
		);
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_FREE_WITH_SUBSCRIPTION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_FREE_WITH_SUBSCRIPTION"
		);
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_PAID_CONTENT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_PAID_CONTENT"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_AUDIO_LANGUAGE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_AUTHOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AUTHOR",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_AVAILABILITY()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AVAILABILITY",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_BROWSABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_CANONICAL_GENRE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_CONTENT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CONTENT_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_CONTENT_RATING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_DURATION_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_DURATION_MILLIS",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_EPISODE_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTENT_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTENT_URI",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERACTION_COUNT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERACTION_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERACTION_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERACTION_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_ITEM_COUNT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_ITEM_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_LAST_PLAYBACK_POSITION_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LAST_PLAYBACK_POSITION_MILLIS",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_LIVE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LIVE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_LOGO_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LOGO_URI",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_LONG_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_OFFER_PRICE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_OFFER_PRICE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_POSTER_ART_ASPECT_RATIO()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_POSTER_ART_ASPECT_RATIO",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_POSTER_ART_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_PREVIEW_VIDEO_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_PREVIEW_VIDEO_URI",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_RELEASE_DATE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_RELEASE_DATE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING_STYLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SEARCHABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SEASON_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SERIES_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SERIES_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SHORT_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_SPLIT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SPLIT_ID",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_STARTING_PRICE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_STARTING_PRICE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_ASPECT_RATIO()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_THUMBNAIL_ASPECT_RATIO",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_TRANSIENT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_VERSION_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_VIDEO_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_VIDEO_WIDTH()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::COLUMN_WATCH_NEXT_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_WATCH_NEXT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString TvContract_WatchNextPrograms::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri TvContract_WatchNextPrograms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FANS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_FANS"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FOLLOWERS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_FOLLOWERS"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LIKES()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_LIKES"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LISTENS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_LISTENS"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_THUMBS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_THUMBS"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWERS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_VIEWERS"
		);
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_VIEWS"
		);
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_PERCENTAGE"
		);
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_STARS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_STARS"
		);
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_ALBUM()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_ALBUM"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_ARTIST()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_ARTIST"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_CHANNEL()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_CHANNEL"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_CLIP()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_CLIP"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_EVENT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_EVENT"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_MOVIE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_MOVIE"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_PLAYLIST()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_PLAYLIST"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_STATION()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_STATION"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_TRACK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TRACK"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_EPISODE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_EPISODE"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_SEASON()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_SEASON"
		);
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_SERIES()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_SERIES"
		);
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_CONTINUE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_CONTINUE"
		);
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEW()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_NEW"
		);
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEXT()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_NEXT"
		);
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_WATCHLIST()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_WATCHLIST"
		);
	}
	
	// QJniObject forward
	TvContract_WatchNextPrograms::TvContract_WatchNextPrograms(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media::tv

