//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDUploadMergeableDeltasURLRequest : CKDURLRequest
{
    NSArray *_deltas;	// 8 = 0x8
    NSArray *_replacementRequests;	// 16 = 0x10
    CDUnknownBlockType _perDeltaCompletionBlock;	// 24 = 0x18
    CDUnknownBlockType _perReplaceDeltasRequestCompletionBlock;	// 32 = 0x20
    NSMutableDictionary *_deltasByRequestID;	// 40 = 0x28
    NSMutableDictionary *_replacementRequestsByRequestID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003dbfd
@property(retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // @synthesize replacementRequestsByRequestID=_replacementRequestsByRequestID;
@property(retain, nonatomic) NSMutableDictionary *deltasByRequestID; // @synthesize deltasByRequestID=_deltasByRequestID;
@property(copy, nonatomic) CDUnknownBlockType perReplaceDeltasRequestCompletionBlock; // @synthesize perReplaceDeltasRequestCompletionBlock=_perReplaceDeltasRequestCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perDeltaCompletionBlock; // @synthesize perDeltaCompletionBlock=_perDeltaCompletionBlock;
@property(readonly, copy, nonatomic) NSArray *replacementRequests; // @synthesize replacementRequests=_replacementRequests;
@property(readonly, copy, nonatomic) NSArray *deltas; // @synthesize deltas=_deltas;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000003d7e2
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000003d4ca
- (id)generateRequestOperations;	// IMP=0x000000000003c9ff
- (id)anonymousUserIDForHTTPHeader;	// IMP=0x000000000003c985
- (_Bool)handlesAnonymousCKUserIDPropagation;	// IMP=0x000000000003c97d
- (id)requestOperationClasses;	// IMP=0x000000000003c891
- (id)zoneIDsToLock;	// IMP=0x000000000003c789
- (_Bool)allowsAnonymousAccount;	// IMP=0x000000000003c76f
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x000000000003c69e
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000003c5b6
- (id)initWithOperation:(id)arg1 deltas:(id)arg2 replacementRequests:(id)arg3;	// IMP=0x000000000003c497

@end

