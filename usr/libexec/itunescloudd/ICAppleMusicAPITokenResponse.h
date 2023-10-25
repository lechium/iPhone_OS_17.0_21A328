//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ICAppleMusicAPITokenCollection, ICAppleMusicAPITokenError;

@interface ICAppleMusicAPITokenResponse : PBCodable
{
    ICAppleMusicAPITokenError *_error;	// 8 = 0x8
    ICAppleMusicAPITokenCollection *_tokenCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00100000000a5d30
@property(retain, nonatomic) ICAppleMusicAPITokenError *error; // @synthesize error=_error;
@property(retain, nonatomic) ICAppleMusicAPITokenCollection *tokenCollection; // @synthesize tokenCollection=_tokenCollection;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a5c57
- (unsigned long long)hash;	// IMP=0x00100000000a5c0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a5b52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a5ab4
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a5a57
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a586c
- (id)dictionaryRepresentation;	// IMP=0x00100000000a5797
- (id)description;	// IMP=0x00100000000a56e8
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool hasTokenCollection;
- (id)privacyConsciousDescription;	// IMP=0x00100000000b6cc2
- (id)privacyConsciousDictionaryRepresentation;	// IMP=0x00100000000b6ba0

@end
