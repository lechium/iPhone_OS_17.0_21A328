//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapDataSubscriptionState, NSString;
@protocol GEOMapDataSubscriptionDownloadManager;

@protocol GEOMapDataSubscriptionDownloadManagerDelegate <NSObject>
- (void)downloadManager:(id <GEOMapDataSubscriptionDownloadManager>)arg1 didUpdateState:(GEOMapDataSubscriptionState *)arg2 forIdentifier:(NSString *)arg3;
@end

