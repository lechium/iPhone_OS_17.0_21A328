//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PDDPPerson;

@interface PDDPUserInfo : PBCodable
{
    PDDPPerson *_person;	// 8 = 0x8
    NSMutableArray *_roles;	// 16 = 0x10
}

+ (Class)rolesType;	// IMP=0x00200000000aa6a1
- (void).cxx_destruct;	// IMP=0x00200000000ab0ed
@property(retain, nonatomic) NSMutableArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) PDDPPerson *person; // @synthesize person=_person;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000aaf19
- (unsigned long long)hash;	// IMP=0x00100000000aaecc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000aae14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000aac3c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000aab54
- (void);	// IMP=0x00100000000aaa02
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000aa9f5
- (id)dictionaryRepresentation;	// IMP=0x00100000000aa761
- (id)description;	// IMP=0x00100000000aa6b2
- (id)rolesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000aa684
- (unsigned long long)rolesCount;	// IMP=0x00100000000aa667
- (void)addRoles:(id)arg1;	// IMP=0x00100000000aa5fd
- (void)clearRoles;	// IMP=0x00100000000aa5e0
@property(readonly, nonatomic) _Bool hasPerson;

@end

