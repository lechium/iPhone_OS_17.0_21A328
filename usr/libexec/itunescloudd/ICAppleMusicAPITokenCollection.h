//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenCollection : PBCodable
{
    NSString *_developerToken;	// 8 = 0x8
    NSString *_userToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ddee0
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *developerToken; // @synthesize developerToken=_developerToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000dde33
- (unsigned long long)hash;	// IMP=0x00100000000ddde6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ddd2e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ddc90
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ddc33
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ddc26
- (id)dictionaryRepresentation;	// IMP=0x00100000000ddba3
- (id)description;	// IMP=0x00100000000ddaf4
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasDeveloperToken;
- (id)privacyConsciousDescription;	// IMP=0x001000000001e326
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x001000000001e199

@end

