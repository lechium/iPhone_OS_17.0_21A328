//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest
{
    CDUnknownBlockType _anonymousShareRemovedBlock;	// 8 = 0x8
    NSDictionary *_encryptedAnonymousSharesToRemove;	// 16 = 0x10
    NSMutableDictionary *_encryptedAnonymousShareHashToRemoveByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000023e636
@property(retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID; // @synthesize encryptedAnonymousShareHashToRemoveByRequestID=_encryptedAnonymousShareHashToRemoveByRequestID;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // @synthesize encryptedAnonymousSharesToRemove=_encryptedAnonymousSharesToRemove;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareRemovedBlock; // @synthesize anonymousShareRemovedBlock=_anonymousShareRemovedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000023e485
- (id)generateRequestOperations;	// IMP=0x000000000023e093
- (id)requestOperationClasses;	// IMP=0x000000000023e027
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x000000000023df3f
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToRemove:(id)arg2;	// IMP=0x000000000023dea6
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x000000000023de9e

@end

