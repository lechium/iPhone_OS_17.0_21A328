//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@class CKShareMetadata, NSData, NSString;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKDCompleteParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _verifyProgressURLReconstructedBlock;	// 8 = 0x8
    CDUnknownBlockType _verifyProgressShareMetadataFetchedBlock;	// 16 = 0x10
    NSString *_vettingToken;	// 24 = 0x18
    NSString *_vettingEmail;	// 32 = 0x20
    NSString *_vettingPhone;	// 40 = 0x28
    NSString *_routingKey;	// 48 = 0x30
    NSData *_encryptedKey;	// 56 = 0x38
    NSString *_baseToken;	// 64 = 0x40
    NSString *_displayedHostname;	// 72 = 0x48
    NSString *_shortToken;	// 80 = 0x50
    CKShareMetadata *_shareMetadata;	// 88 = 0x58
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x00600000001045e8
- (void).cxx_destruct;	// IMP=0x00000000001066cb
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(retain, nonatomic) NSString *shortToken; // @synthesize shortToken=_shortToken;
@property(readonly, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property(readonly, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(readonly, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(readonly, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(readonly, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property(readonly, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property(readonly, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
@property(copy, nonatomic) CDUnknownBlockType verifyProgressShareMetadataFetchedBlock; // @synthesize verifyProgressShareMetadataFetchedBlock=_verifyProgressShareMetadataFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType verifyProgressURLReconstructedBlock; // @synthesize verifyProgressURLReconstructedBlock=_verifyProgressURLReconstructedBlock;
- (void)main;	// IMP=0x0000000000106571
- (void)_verifyOONParticipant;	// IMP=0x0000000000105d29
- (void)_reconstructShareURL;	// IMP=0x0000000000105ad8
- (void)_forceFetchShareMetadata;	// IMP=0x0000000000105384
- (void)_performAuthKitVerification;	// IMP=0x0000000000104d71
- (void)_reconstructShortToken;	// IMP=0x00000000001047e3
- (id)shortSharingTokenFromData:(id)arg1;	// IMP=0x00000000001047ce
- (id)shortSharingTokenFromFullToken:(id)arg1;	// IMP=0x00000000001046d0
- (_Bool)makeStateTransition;	// IMP=0x000000000010448c
- (id)activityCreate;	// IMP=0x0000000000104463
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x000000000010423c

// Remaining properties
@property(retain, nonatomic) id <CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end
