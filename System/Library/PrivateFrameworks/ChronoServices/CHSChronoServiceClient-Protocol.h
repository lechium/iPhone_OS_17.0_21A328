//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChronoServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@protocol CHSChronoServiceClient <NSObject>

@optional
- (void)widgetRelevanceEntriesDidChange:(NSDictionary *)arg1;
- (void)nearbyDevicesDidChange:(NSArray *)arg1;
- (void)widgetExtensionsDidChange:(NSSet *)arg1;
@end
