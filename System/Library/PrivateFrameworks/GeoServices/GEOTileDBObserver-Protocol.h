//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOTileDB, NSArray;

@protocol GEOTileDBObserver <NSObject>

@optional
- (void)tileDB:(GEOTileDB *)arg1 didExpireSubscriptions:(NSArray *)arg2 forReason:(long long)arg3;
- (void)tileDBDidDeleteExternalResource:(GEOTileDB *)arg1;
@end
