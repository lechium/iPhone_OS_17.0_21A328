//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSString;
@protocol BLSHUserIdleProvidingDelegate;

__attribute__((visibility("hidden")))
@interface BLSHUserIdleProvider : NSObject
{
    _Bool _shouldNotifyOfUnidle;	// 8 = 0x8
    _Bool _shouldNotifyOfUnidleChanged;	// 9 = 0x9
    id <BLSHUserIdleProvidingDelegate> _delegate;	// 16 = 0x10
    double _idleTimeout;	// 24 = 0x18
    AWAttentionAwarenessClient *_attentionAwarenessClient;	// 32 = 0x20
    AWAttentionAwarenessConfiguration *_attentionAwarenessConfiguration;	// 40 = 0x28
    NSMutableDictionary *_attentionLostTimeoutDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006d356
@property(nonatomic) _Bool shouldNotifyOfUnidleChanged; // @synthesize shouldNotifyOfUnidleChanged=_shouldNotifyOfUnidleChanged;
@property(retain, nonatomic) NSMutableDictionary *attentionLostTimeoutDictionary; // @synthesize attentionLostTimeoutDictionary=_attentionLostTimeoutDictionary;
@property(retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration; // @synthesize attentionAwarenessConfiguration=_attentionAwarenessConfiguration;
@property(retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient; // @synthesize attentionAwarenessClient=_attentionAwarenessClient;
@property(readonly, nonatomic) double idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property(nonatomic) _Bool shouldNotifyOfUnidle; // @synthesize shouldNotifyOfUnidle=_shouldNotifyOfUnidle;
@property(nonatomic) __weak id <BLSHUserIdleProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_invalidate;	// IMP=0x000000000006d1fe
- (void)_reset;	// IMP=0x000000000006d16e
- (void)_resume;	// IMP=0x000000000006d0ea
- (void)_pause;	// IMP=0x000000000006d066
- (void)_setShouldNotifyOfUnidle:(_Bool)arg1;	// IMP=0x000000000006cfb5
- (void)_setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000006cc36
- (void)invalidate;	// IMP=0x000000000006cbd9
- (void)reset;	// IMP=0x000000000006cb7c
- (void)pause;	// IMP=0x000000000006cb1f
- (void)resume;	// IMP=0x000000000006cac2
- (void)setIdleTimeout:(double)arg1 shouldReset:(_Bool)arg2;	// IMP=0x000000000006c9ea
- (id)init;	// IMP=0x000000000006c63d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

