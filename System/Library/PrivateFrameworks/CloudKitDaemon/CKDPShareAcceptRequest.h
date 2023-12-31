//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSString;

@interface CKDPShareAcceptRequest : PBRequest
{
    NSString *_etag;	// 8 = 0x8
    NSString *_participantId;	// 16 = 0x10
    CKDPProtectionInfo *_protectionInfo;	// 24 = 0x18
    CKDPProtectionInfo *_publicKey;	// 32 = 0x20
    int _publicKeyVersion;	// 40 = 0x28
    CKDPProtectionInfo *_selfAddedPcs;	// 48 = 0x30
    CKDPShareIdentifier *_shareId;	// 56 = 0x38
    _Bool _acceptedInProcess;	// 64 = 0x40
    struct {
        unsigned int publicKeyVersion:1;
        unsigned int acceptedInProcess:1;
    } _has;	// 68 = 0x44
}

+ (id)options;	// IMP=0x001000000019c834
- (void).cxx_destruct;	// IMP=0x000000000019d9b8
@property(nonatomic) _Bool acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(retain, nonatomic) NSString *participantId; // @synthesize participantId=_participantId;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) CKDPProtectionInfo *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // @synthesize selfAddedPcs=_selfAddedPcs;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019d752
- (unsigned long long)hash;	// IMP=0x000000000019d648
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019d481
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019d2ff
- (void)copyTo:(id)arg1;	// IMP=0x000000000019d1df
- (Class)responseClass;	// IMP=0x000000000019d1ce
- (unsigned int)requestTypeCode;	// IMP=0x000000000019d1c3
- (void)writeTo:(id)arg1;	// IMP=0x000000000019d0a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019d094
- (id)dictionaryRepresentation;	// IMP=0x000000000019ca61
- (id)description;	// IMP=0x000000000019c9b2
@property(nonatomic) _Bool hasAcceptedInProcess;
@property(nonatomic) _Bool hasPublicKeyVersion;
@property(nonatomic) int publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property(readonly, nonatomic) _Bool hasParticipantId;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasPublicKey;
@property(readonly, nonatomic) _Bool hasSelfAddedPcs;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasShareId;

@end

