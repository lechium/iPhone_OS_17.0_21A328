//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPSubscription;

@interface CKDPSubscriptionCreateRequest : PBRequest
{
    CKDPSubscription *_subscription;	// 8 = 0x8
}

+ (id)options;	// IMP=0x00100000001c897a
- (void).cxx_destruct;	// IMP=0x00000000001c8edc
@property(retain, nonatomic) CKDPSubscription *subscription; // @synthesize subscription=_subscription;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001c8e5e
- (unsigned long long)hash;	// IMP=0x00000000001c8e41
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001c8db1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c8d39
- (void)copyTo:(id)arg1;	// IMP=0x00000000001c8d0f
- (Class)responseClass;	// IMP=0x00000000001c8cfe
- (unsigned int)requestTypeCode;	// IMP=0x00000000001c8cf3
- (void)writeTo:(id)arg1;	// IMP=0x00000000001c8ccf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001c8cc2
- (id)dictionaryRepresentation;	// IMP=0x00000000001c8a8e
- (id)description;	// IMP=0x00000000001c89df
@property(readonly, nonatomic) _Bool hasSubscription;

@end

