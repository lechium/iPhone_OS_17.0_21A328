//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSync/_TtC8MapsSync25MapsSyncHistorySearchItem.h>

@class GEOMapRegion, NSDate, NSString;

@interface _TtC8MapsSync25MapsSyncHistorySearchItem (HistoryEntryRecentsItem)
- (void)ifSearch:(CDUnknownBlockType)arg1 ifRoute:(CDUnknownBlockType)arg2 ifPlaceDisplay:(CDUnknownBlockType)arg3 ifTransitLineItem:(CDUnknownBlockType)arg4;	// IMP=0x00200000007b1f7a
@property(readonly, copy, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, copy, nonatomic) NSString *languageCode;
@property(readonly, copy, nonatomic) NSString *locationDisplayString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *query;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool tracksRAPReportingOnly;
@property(readonly, copy, nonatomic) NSDate *usageDate;
@end

