//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration;
@protocol LUIAttentionAwareIdleTimerDelegate, OS_dispatch_queue;

@interface LUIAttentionAwareIdleTimer : NSObject
{
    id <LUIAttentionAwareIdleTimerDelegate> _delegate;	// 8 = 0x8
    AWAttentionAwarenessConfiguration *_config;	// 16 = 0x10
    AWAttentionAwarenessClient *_client;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_attentionAwarenessClientQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000035841
+ (_Bool)shouldSetupAttentionAwareIdleTimer;	// IMP=0x00100000000356d4
- (void).cxx_destruct;	// IMP=0x0020000000035ef1
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *attentionAwarenessClientQueue; // @synthesize attentionAwarenessClientQueue=_attentionAwarenessClientQueue;
@property(retain, nonatomic) AWAttentionAwarenessClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *config; // @synthesize config=_config;
@property(nonatomic) __weak id <LUIAttentionAwareIdleTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_attentionLost;	// IMP=0x0010000000035d7d
- (void)pause;	// IMP=0x0010000000035c89
- (void)start;	// IMP=0x0010000000035b95
- (id)init;	// IMP=0x0010000000035896

@end

