//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, RFExpandableStandardCardSection, RFFactItemButtonCardSection, RFFactItemShortNumberCardSection, RFFactItemStandardCardSection, RFLongItemStandardCardSection, RFPrimaryHeaderRichCardSection, RFPrimaryHeaderStandardCardSection, RFReferenceFootnoteCardSection, RFReferenceRichCardSection, RFSimpleItemRichCardSection, RFSimpleItemStandardCardSection, RFSummaryItemAlignedTextCardSection, RFSummaryItemShortNumberCardSection, RFSummaryItemStandardCardSection, RFSummaryItemTextCardSection, SFActivityIndicatorCardSection, SFAppIconCardSection, SFAppLinkCardSection, SFArchiveViewCardSection, SFAttributionFooterCardSection, SFAudioPlaybackCardSection, SFButtonCardSection, SFButtonListCardSection, SFCollectionCardSection, SFColorBarCardSection, SFCombinedCardSection, SFCommandRowCardSection, SFCompactRowCardSection, SFDescriptionCardSection, SFDetailedRowCardSection, SFFindMyCardSection, SFFlightCardSection, SFGridCardSection, SFHeroCardSection, SFHeroTitleCardSection, SFHorizontalButtonCardSection, SFHorizontalScrollCardSection, SFImagesCardSection, SFInfoCardSection, SFKeyValueDataCardSection, SFLargeTitleDetailedRowCardSection, SFLeadingTrailingCardSection, SFLinkPresentationCardSection, SFListenToCardSection, SFMapCardSection, SFMapPlaceCardSection, SFMapsDetailedRowCardSection, SFMediaInfoCardSection, SFMediaPlayerCardSection, SFMediaRemoteControlCardSection, SFMessageCardSection, SFMetaInfoCardSection, SFMiniCardSection, SFNewsCardSection, SFNowPlayingCardSection, SFPersonHeaderCardSection, SFProductCardSection, SFResponseWrapperCardSection, SFRichTitleCardSection, SFRowCardSection, SFScoreboardCardSection, SFSectionHeaderCardSection, SFSelectableGridCardSection, SFSocialMediaPostCardSection, SFSplitCardSection, SFStockChartCardSection, SFStrokeAnimationCardSection, SFSuggestionCardSection, SFTableHeaderRowCardSection, SFTableRowCardSection, SFTextColumnsCardSection, SFTitleCardSection, SFTrackListCardSection, SFVerticalLayoutCardSection, SFWatchListCardSection, SFWatchNowCardSection, SFWebCardSection, SFWorldMapCardSection;

@protocol SFCardSectionValue <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) RFFactItemButtonCardSection *rfFactItemButtonCardSection;
@property(retain, nonatomic) RFExpandableStandardCardSection *rfExpandableStandardCardSection;
@property(retain, nonatomic) RFSummaryItemAlignedTextCardSection *rfSummaryItemAlignedTextCardSection;
@property(retain, nonatomic) RFSimpleItemStandardCardSection *rfSimpleItemStandardCardSection;
@property(retain, nonatomic) RFSimpleItemRichCardSection *rfSimpleItemRichCardSection;
@property(retain, nonatomic) RFReferenceRichCardSection *rfReferenceRichCardSection;
@property(retain, nonatomic) RFReferenceFootnoteCardSection *rfReferenceFootnoteCardSection;
@property(retain, nonatomic) RFPrimaryHeaderStandardCardSection *rfPrimaryHeaderStandardCardSection;
@property(retain, nonatomic) RFPrimaryHeaderRichCardSection *rfPrimaryHeaderRichCardSection;
@property(retain, nonatomic) RFLongItemStandardCardSection *rfLongItemStandardCardSection;
@property(retain, nonatomic) RFFactItemStandardCardSection *rfFactItemStandardCardSection;
@property(retain, nonatomic) RFFactItemShortNumberCardSection *rfFactItemShortNumberCardSection;
@property(retain, nonatomic) RFSummaryItemStandardCardSection *rfSummaryItemStandardCardSection;
@property(retain, nonatomic) RFSummaryItemTextCardSection *rfSummaryItemTextCardSection;
@property(retain, nonatomic) RFSummaryItemShortNumberCardSection *rfSummaryItemShortNumberCardSection;
@property(retain, nonatomic) SFLargeTitleDetailedRowCardSection *largeTitleDetailedRowCardSection;
@property(retain, nonatomic) SFAppIconCardSection *appIconCardSection;
@property(retain, nonatomic) SFArchiveViewCardSection *archiveViewCardSection;
@property(retain, nonatomic) SFHeroTitleCardSection *heroTitleCardSection;
@property(retain, nonatomic) SFLeadingTrailingCardSection *leadingTrailingCardSection;
@property(retain, nonatomic) SFCommandRowCardSection *commandRowCardSection;
@property(retain, nonatomic) SFButtonListCardSection *buttonListCardSection;
@property(retain, nonatomic) SFStrokeAnimationCardSection *strokeAnimationCardSection;
@property(retain, nonatomic) SFWatchNowCardSection *watchNowCardSection;
@property(retain, nonatomic) SFListenToCardSection *listenToCardSection;
@property(retain, nonatomic) SFResponseWrapperCardSection *responseWrapperCardSection;
@property(retain, nonatomic) SFCombinedCardSection *combinedCardSection;
@property(retain, nonatomic) SFCollectionCardSection *collectionCardSection;
@property(retain, nonatomic) SFInfoCardSection *infoCardSection;
@property(retain, nonatomic) SFMiniCardSection *miniCardSection;
@property(retain, nonatomic) SFNewsCardSection *newsCardSection;
@property(retain, nonatomic) SFHeroCardSection *heroCardSection;
@property(retain, nonatomic) SFFindMyCardSection *findMyCardSection;
@property(retain, nonatomic) SFLinkPresentationCardSection *linkPresentationCardSection;
@property(retain, nonatomic) SFSplitCardSection *splitCardSection;
@property(retain, nonatomic) SFColorBarCardSection *colorBarCardSection;
@property(retain, nonatomic) SFPersonHeaderCardSection *personHeaderCardSection;
@property(retain, nonatomic) SFGridCardSection *gridCardSection;
@property(retain, nonatomic) SFAttributionFooterCardSection *attributionFooterCardSection;
@property(retain, nonatomic) SFWorldMapCardSection *worldMapCardSection;
@property(retain, nonatomic) SFCompactRowCardSection *compactRowCardSection;
@property(retain, nonatomic) SFMapPlaceCardSection *mapPlaceCardSection;
@property(retain, nonatomic) SFMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property(retain, nonatomic) SFHorizontalScrollCardSection *horizontalScrollCardSection;
@property(retain, nonatomic) SFProductCardSection *productCardSection;
@property(retain, nonatomic) SFVerticalLayoutCardSection *verticalLayoutCardSection;
@property(retain, nonatomic) SFHorizontalButtonCardSection *horizontalButtonCardSection;
@property(retain, nonatomic) SFButtonCardSection *buttonCardSection;
@property(retain, nonatomic) SFMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property(retain, nonatomic) SFWatchListCardSection *watchListCardSection;
@property(retain, nonatomic) SFMetaInfoCardSection *metaInfoCardSection;
@property(retain, nonatomic) SFSectionHeaderCardSection *sectionHeaderCardSection;
@property(retain, nonatomic) SFSelectableGridCardSection *selectableGridCardSection;
@property(retain, nonatomic) SFSuggestionCardSection *suggestionCardSection;
@property(retain, nonatomic) SFImagesCardSection *imagesCardSection;
@property(retain, nonatomic) SFDetailedRowCardSection *detailedRowCardSection;
@property(retain, nonatomic) SFMessageCardSection *messageCardSection;
@property(retain, nonatomic) SFWebCardSection *webCardSection;
@property(retain, nonatomic) SFActivityIndicatorCardSection *activityIndicatorCardSection;
@property(retain, nonatomic) SFFlightCardSection *flightCardSection;
@property(retain, nonatomic) SFAudioPlaybackCardSection *audioPlaybackCardSection;
@property(retain, nonatomic) SFTrackListCardSection *trackListCardSection;
@property(retain, nonatomic) SFTitleCardSection *titleCardSection;
@property(retain, nonatomic) SFTextColumnsCardSection *textColumnsCardSection;
@property(retain, nonatomic) SFTableRowCardSection *tableRowCardSection;
@property(retain, nonatomic) SFTableHeaderRowCardSection *tableHeaderRowCardSection;
@property(retain, nonatomic) SFStockChartCardSection *stockChartCardSection;
@property(retain, nonatomic) SFSocialMediaPostCardSection *socialMediaPostCardSection;
@property(retain, nonatomic) SFScoreboardCardSection *scoreboardCardSection;
@property(retain, nonatomic) SFRowCardSection *rowCardSection;
@property(retain, nonatomic) SFRichTitleCardSection *richTitleCardSection;
@property(retain, nonatomic) SFNowPlayingCardSection *nowPlayingCardSection;
@property(retain, nonatomic) SFMediaPlayerCardSection *mediaPlayerCardSection;
@property(retain, nonatomic) SFMediaInfoCardSection *mediaInfoCardSection;
@property(retain, nonatomic) SFMapCardSection *mapCardSection;
@property(retain, nonatomic) SFKeyValueDataCardSection *keyValueDataCardSection;
@property(retain, nonatomic) SFDescriptionCardSection *descriptionCardSection;
@property(retain, nonatomic) SFAppLinkCardSection *appLinkCardSection;
@end

