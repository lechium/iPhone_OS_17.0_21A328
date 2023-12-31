//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPStatus;

@interface PDDPEventStatus : PBCodable
{
    NSString *_objectId;	// 8 = 0x8
    PDDPStatus *_status;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000152f44
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000152e81
- (unsigned long long)hash;	// IMP=0x0010000000152e34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000152d7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000152cde
- (void)copyTo:(id)arg1;	// IMP=0x0010000000152c7b
- (void);	// IMP=0x0010000000152c1e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000152c11
- (id)dictionaryRepresentation;	// IMP=0x0010000000152993
- (id)description;	// IMP=0x00100000001528e4
@property(readonly, nonatomic) _Bool hasObjectId;
@property(readonly, nonatomic) _Bool hasStatus;

@end

