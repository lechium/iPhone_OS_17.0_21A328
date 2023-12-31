//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MessageProtection/NSCopying-Protocol.h>

@class NGMPBP256Key, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>
{
    NSMutableArray *_prekeys;	// 8 = 0x8
    NGMPBP256Key *_signingKey;	// 16 = 0x10
}

+ (Class)prekeysType;	// IMP=0x0010000000018e7e
- (void).cxx_destruct;	// IMP=0x0000000000019a9e
@property(retain, nonatomic) NSMutableArray *prekeys; // @synthesize prekeys=_prekeys;
@property(retain, nonatomic) NGMPBP256Key *signingKey; // @synthesize signingKey=_signingKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000198ca
- (unsigned long long)hash;	// IMP=0x000000000001987d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000197c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000195ed
- (void)copyTo:(id)arg1;	// IMP=0x0000000000019513
- (void)writeTo:(id)arg1;	// IMP=0x00000000000193b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000193a9
- (id)dictionaryRepresentation;	// IMP=0x0000000000018f3e
- (id)description;	// IMP=0x0000000000018e8f
- (id)prekeysAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000018e61
- (unsigned long long)prekeysCount;	// IMP=0x0000000000018e44
- (void)addPrekeys:(id)arg1;	// IMP=0x0000000000018dda
- (void)clearPrekeys;	// IMP=0x0000000000018dbd

@end

