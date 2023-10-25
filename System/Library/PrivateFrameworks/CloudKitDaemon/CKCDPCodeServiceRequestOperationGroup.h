//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestOperationGroup : PBCodable
{
    long long _operationGroupQuantity;	// 8 = 0x8
    NSString *_operationGroupId;	// 16 = 0x10
    NSString *_operationGroupName;	// 24 = 0x18
    NSString *_operationId;	// 32 = 0x20
    struct {
        unsigned int operationGroupQuantity:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000021c34a
@property(nonatomic) long long operationGroupQuantity; // @synthesize operationGroupQuantity=_operationGroupQuantity;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *operationGroupId; // @synthesize operationGroupId=_operationGroupId;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021c226
- (unsigned long long)hash;	// IMP=0x000000000021c191
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021c082
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021bf9d
- (void)copyTo:(id)arg1;	// IMP=0x000000000021bef9
- (void)writeTo:(id)arg1;	// IMP=0x000000000021be59
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021be4c
- (id)dictionaryRepresentation;	// IMP=0x000000000021bb0c
- (id)description;	// IMP=0x000000000021ba5d
@property(nonatomic) _Bool hasOperationGroupQuantity;
@property(readonly, nonatomic) _Bool hasOperationGroupName;
@property(readonly, nonatomic) _Bool hasOperationGroupId;
@property(readonly, nonatomic) _Bool hasOperationId;

@end
