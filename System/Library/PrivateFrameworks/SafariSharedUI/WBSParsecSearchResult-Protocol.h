//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKMapItem, NSString, NSURL, UIImage, WBSCompletionQuery, WBSParsecActionButton, WBSParsecImageRepresentation;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchResult
@property(readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property(readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property(readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) WBSParsecActionButton *actionButton;
@property(readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property(readonly, copy, nonatomic) NSString *mediaKind;
@property(readonly, nonatomic) NSURL *appPunchoutURL;
@property(readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly, nonatomic) NSString *completion;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSString *feedbackIdentifier;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) NSString *title;
- (UIImage *)completionIconWithSession:(id <WBSParsecSearchSession>)arg1;
- (UIImage *)iconWithSession:(id <WBSParsecSearchSession>)arg1;
- (_Bool)isPredictionFromServerMatchingUserTypedQuery:(WBSCompletionQuery *)arg1;
@end

