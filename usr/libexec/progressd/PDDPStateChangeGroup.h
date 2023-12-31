//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPStateChangeGroup : PBCodable
{
    NSString *_groupId;	// 8 = 0x8
    unsigned int _roles;	// 16 = 0x10
    struct {
        unsigned int roles:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00200000000d2f52
@property(nonatomic) unsigned int roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d2eba
- (unsigned long long)hash;	// IMP=0x00100000000d2e68
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d2dae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d2d16
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d2cb3
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d2c4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d2c40
- (id)dictionaryRepresentation;	// IMP=0x00100000000d299e
- (id)description;	// IMP=0x00100000000d28ef
@property(nonatomic) _Bool hasRoles;
@property(readonly, nonatomic) _Bool hasGroupId;

@end

