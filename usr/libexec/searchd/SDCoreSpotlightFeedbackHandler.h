//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SDCoreSpotlightFeedbackHandler : NSObject
{
    _Bool _ignoreResultEngagements;	// 8 = 0x8
    NSMutableArray *_analyticsItems;	// 16 = 0x10
    NSMutableArray *_topAnalyticsItemPerSection;	// 24 = 0x18
    NSString *_lastQuery;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000000149ba
- (void).cxx_destruct;	// IMP=0x0020000000016489
@property(nonatomic) _Bool ignoreResultEngagements; // @synthesize ignoreResultEngagements=_ignoreResultEngagements;
@property(retain, nonatomic) NSString *lastQuery; // @synthesize lastQuery=_lastQuery;
@property(retain, nonatomic) NSMutableArray *topAnalyticsItemPerSection; // @synthesize topAnalyticsItemPerSection=_topAnalyticsItemPerSection;
@property(retain, nonatomic) NSMutableArray *analyticsItems; // @synthesize analyticsItems=_analyticsItems;
- (void)updateRankingSectionItemsForResult:(id)arg1 withQuery:(id)arg2;	// IMP=0x0010000000016420
- (void)updateShortcutForResult:(id)arg1 withQuery:(id)arg2 currentTime:(id)arg3;	// IMP=0x0010000000015fd0
- (void)deleteEngagementItem:(id)arg1 externalIdentifier:(id)arg2 protectionClass:(id)arg3;	// IMP=0x0010000000015ec3
- (void)indexEngagementItem:(id)arg1 currentTime:(id)arg2 externalIdentifier:(id)arg3 protectionClass:(id)arg4 expire:(_Bool)arg5 shortcutString:(id)arg6 update:(_Bool)arg7;	// IMP=0x0010000000015c06
- (void)updateSpotlightUsageCount;	// IMP=0x0010000000015b25
- (void)searchViewDidDisappear:(id)arg1;	// IMP=0x0010000000015b0b
- (void)didEngageResult:(id)arg1 engagedAnalyticsItem:(id)arg2 atPosition:(unsigned long long)arg3 withEvent:(unsigned long long)arg4 forQuery:(id)arg5 currentTime:(id)arg6;	// IMP=0x0010000000015a2d
- (void)didPerformCommand:(id)arg1;	// IMP=0x0010000000015424
- (id)_remapSafariSyntheticBookmarkID:(id)arg1;	// IMP=0x00100000000153a3
- (_Bool)_isSafari:(id)arg1;	// IMP=0x001000000001533f
- (void)didRankSections:(id)arg1;	// IMP=0x0010000000014c60
- (void)didStartSearch:(id)arg1;	// IMP=0x0010000000014b36
- (void)didEngageSection:(id)arg1 withEvent:(unsigned long long)arg2;	// IMP=0x0010000000014b30
- (void)didEngageSection:(id)arg1;	// IMP=0x0010000000014aaa
- (id)init;	// IMP=0x0010000000014a0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

