//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class TITypingSession, TITypingSessionAligned;

@protocol TITypingSessionAggregatedEventObserver <NSObject>
- (void)sessionDidEnd:(TITypingSession *)arg1 aligned:(TITypingSessionAligned *)arg2;

@optional
- (void)tearDown;
@end

