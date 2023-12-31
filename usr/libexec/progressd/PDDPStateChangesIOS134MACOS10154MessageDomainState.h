//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPStateChangesIOS134MACOS10154MessageDomainState : PBCodable
{
    unsigned long long _flags;	// 8 = 0x8
    int _domain;	// 16 = 0x10
    NSString *_note;	// 24 = 0x18
    int _state;	// 32 = 0x20
    CDStruct_214543d2 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x002000000012f7e9
@property(retain, nonatomic) NSString *note; // @synthesize note=_note;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000012f707
- (unsigned long long)hash;	// IMP=0x001000000012f685
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012f585
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012f4b5
- (void)copyTo:(id)arg1;	// IMP=0x001000000012f419
- (void)writeTo:(id)arg1;	// IMP=0x001000000012f369
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012f35c
- (id)dictionaryRepresentation;	// IMP=0x001000000012eea4
- (id)description;	// IMP=0x001000000012edf5
@property(readonly, nonatomic) _Bool hasNote;
@property(nonatomic) _Bool hasFlags;
@property(nonatomic) _Bool hasState;
- (int)StringAsDomain:(id)arg1;	// IMP=0x001000000012ec5d
- (id)domainAsString:(int)arg1;	// IMP=0x001000000012ec14
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end

