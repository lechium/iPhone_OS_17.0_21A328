//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PDCollaborationStateChangePublish
{
    long long _totalStateChanges;	// 24 = 0x18
    NSArray *_requestedStateChanges;	// 32 = 0x20
    NSMutableDictionary *_statesByError;	// 40 = 0x28
    NSMutableArray *_statesFromServer;	// 48 = 0x30
    NSMutableArray *_statesInConflict;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001837fb
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000182e95
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x0010000000182e8d
- (id)requestData;	// IMP=0x0010000000181f00
- (void)consolidateChangesByTargetAndOwner;	// IMP=0x0010000000181b99
- (id)assetsPayloadsForStateChange:(id)arg1;	// IMP=0x0010000000181123
- (void)mergeExistingLocalStateIntoRequestStateChange:(id)arg1;	// IMP=0x00100000001809c1
- (long long)maxExecutionCount;	// IMP=0x001000000018088f
- (_Bool)wantsToExecute;	// IMP=0x001000000018086b
- (Class)expectedResponseClass;	// IMP=0x001000000018085a
- (id)acceptContentType;	// IMP=0x001000000018084d
- (id)requestContentType;	// IMP=0x0010000000180840
- (id)endpointIdentifier;	// IMP=0x0010000000180833
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000018081a
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000180808
- (_Bool)shouldSaveStateChangeWithStatusCode:(int)arg1;	// IMP=0x00100000001807f1
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x00100000001807e9
- (id)logSubsystem;	// IMP=0x00100000001807d5

@end
