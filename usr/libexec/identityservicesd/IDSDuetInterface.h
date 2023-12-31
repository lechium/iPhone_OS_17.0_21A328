//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IDSDuetInterfaceDelegate;

@interface IDSDuetInterface : NSObject
{
    id <IDSDuetInterfaceDelegate> _delegate;	// 8 = 0x8
    NSMutableSet *_initialSyncClientIDs;	// 16 = 0x10
    NSMutableSet *_reunionSyncClientIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000013155
- (void).cxx_destruct;	// IMP=0x00200000000136e8
@property(retain, nonatomic) NSMutableSet *reunionSyncClientIDs; // @synthesize reunionSyncClientIDs=_reunionSyncClientIDs;
@property(retain, nonatomic) NSMutableSet *initialSyncClientIDs; // @synthesize initialSyncClientIDs=_initialSyncClientIDs;
@property(nonatomic) __weak id <IDSDuetInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAdmissionCheckCache;	// IMP=0x0010000000013685
- (void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000013501
- (void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000001337d
- (void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000013377
- (id)_newKeyForValues:(id)arg1 priority:(long long)arg2;	// IMP=0x0010000000013260
- (_Bool)reunionSyncInProgress;	// IMP=0x0010000000013258
- (void)setReunionSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x0010000000013252
- (_Bool)initialSyncInProgress;	// IMP=0x001000000001324a
- (void)setInitialSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x0010000000013244
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1;	// IMP=0x001000000001323e
- (void)dealloc;	// IMP=0x001000000001320f
- (id)init;	// IMP=0x00100000000131e0
- (void)_setupPairedSystemContext;	// IMP=0x00100000000131da

@end

