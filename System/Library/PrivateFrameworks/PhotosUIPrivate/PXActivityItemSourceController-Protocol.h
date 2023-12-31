//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSOrderedSet, NSURL, PHPerson, UIActivityViewController;
@protocol PXActivityViewController;

@protocol PXActivityItemSourceController <NSObject>
@property(readonly, nonatomic) _Bool itemSourcesSupportSlideshow;
@property(readonly, nonatomic) unsigned long long unsavedSyndicatedAssetCount;
@property(readonly, nonatomic) _Bool isPreparingIndividualItems;
@property(readonly, nonatomic) NSURL *publishedURL;
@property(readonly, nonatomic) _Bool itemSourcesSupportMomentShareLinkCreation;
@property(readonly, nonatomic) _Bool momentSharePublishAttempted;
@property(retain, nonatomic) PHPerson *person;
@property(readonly, copy, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) _Bool shouldShareAsAssetBundles;
@property(readonly, nonatomic) _Bool shouldExcludeAccessibilityDescriptionInAllItemSources;
@property(readonly, nonatomic) _Bool shouldExcludeCaptionInAllItemSources;
@property(readonly, nonatomic) _Bool shouldExcludeLocationInAllItemSources;
@property(readonly, nonatomic) _Bool shouldExcludeLivenessInAllItemSources;
@property(readonly, nonatomic) _Bool shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property(readonly, nonatomic) long long preferredExportFormat;
@property(readonly, nonatomic) _Bool shouldShareAsUnmodifiedOriginals;
@property(nonatomic) unsigned long long preferredPreparationType;
@property(readonly, copy, nonatomic) NSOrderedSet *assetItemSources;
@property(nonatomic) __weak UIActivityViewController<PXActivityViewController> *activityViewController;
- (struct PXAssetMediaTypeCount)requestAssetsMediaTypeCount;
@end

