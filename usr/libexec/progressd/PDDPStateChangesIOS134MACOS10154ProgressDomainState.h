//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface PDDPStateChangesIOS134MACOS10154ProgressDomainState : PBCodable
{
    unsigned long long _flags;	// 8 = 0x8
    int _domain;	// 16 = 0x10
    int _state;	// 20 = 0x14
    CDStruct_214543d2 _has;	// 24 = 0x18
}

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001875a4
- (unsigned long long)hash;	// IMP=0x0010000000187540
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018746d
- (MISSING_TYPE *)copyWithZone: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001873d5
- (void)copyTo:(id)arg1;	// IMP=0x0010000000187360
- (void)writeTo:(id)arg1;	// IMP=0x00100000001872cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001872c0
- (id)dictionaryRepresentation;	// IMP=0x0010000000186e74
- (id)description;	// IMP=0x0010000000186dc5
@property(nonatomic) _Bool hasFlags;
- (int)StringAsState:(id)arg1;	// IMP=0x0010000000186ce8
- (id)stateAsString:(int)arg1;	// IMP=0x0010000000186c9f
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsDomain:(id)arg1;	// IMP=0x0010000000186b43
- (id)domainAsString:(int)arg1;	// IMP=0x0010000000186afa
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) int domain; // @synthesize domain=_domain;

@end
