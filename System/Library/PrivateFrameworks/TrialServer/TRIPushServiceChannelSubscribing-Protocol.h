//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TRIPushChannelId;

@protocol TRIPushServiceChannelSubscribing
- (NSArray *)subscribedChannelIds;
- (void)unsubscribeFromChannel:(TRIPushChannelId *)arg1;
- (void)subscribeToChannel:(TRIPushChannelId *)arg1;
@end
